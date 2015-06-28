<?php
function govhack_view_filters_views_post_execute(&$view)
{
    if ($view->current_display == 'prizes_list' && $view->args[0] != 'all') {
            $location = taxonomy_term_load($view->args[1]);
            foreach ($view->result as $i => $result) {

                $r = false;
                // show all international (country is blank)
                if (empty($result->field_field_country)) {
                    $r = true;
                } else if ($result->field_field_country[0]['raw']['tid'] == $location->field_country['und'][0]['tid']) { // national and local prizes
                    if (empty($result->field_field_jurisdiction)) { // national, no location
                        $r = true;
                    } else {
                        foreach ($result->field_field_jurisdiction as $loc) {
                            if ($loc['raw']['tid'] == $view->args[1]) { // local, location matches
                                $r = true;
                            }
                        }
                    }
                }

                //
                if (!$r) {
                    unset($view->result[$i]);
                }
            }
    }

    if ($view->current_display == 'my_projects') {
        foreach ($view->result as $i => $result) {
            $r = node_access('update', $result->nid);
            if (!$r) {
                unset($view->result[$i]);
            }
        }
    }
    if ($view->current_display == 'project_list' ||
        $view->current_display == 'project_export' ||
        $view->current_display == 'project_export_private'
    ) {
        foreach ($view->result as $i => $result) {
            if ($view->args[0]) {
                $tids = Array();
                if ($view->args[0] == 'mine') {
                    $user = user_load($GLOBALS['user']->uid);
                    foreach ($user->field_jurisdiction['und'] as $location) {
                        $tids[] = $location['tid'];
                    }
                } else {
                    $tids[] = $view->args[0];
                }
                $remove = true;
                foreach ($result->field_field_project_jurisdiction as $location) {
                    if (in_array($location['raw']['tid'], $tids)) {
                        $remove = false;
                    }
                }
                if ($remove) {
                    unset($view->result[$i]);
                }
            }
        }

    }

}
