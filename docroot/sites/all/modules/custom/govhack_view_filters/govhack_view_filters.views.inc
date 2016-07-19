<?php

// remember args come from sites/all/modules/entityreference/plugins/selection/EntityReference_SelectionHandler_Views.class.php
// under GOVHACK SPECIAL HACKHACKHACK FIXME TODO OMGWHAT function getReferencableEntities(
function govhack_view_filters_views_post_execute(&$view)
{
    if ($view->current_display == 'locations') {
        //$region = taxonomy_term_load($view->args[0]);

        $locations = taxonomy_get_children($view->args[0]);
        $location_tids = array_keys($locations);
        foreach($locations as $tid => $location) {
            $view->result[] = (object)array(
                "taxonomy_term_data_name" => $location->name,
                "taxonomy_term_data_vid" => $location->vid,
                "tid" => $tid,
                "taxonomy_vocabulary_machine_name" => "jurisdiction"
            );
        }
        foreach ($view->result as $i => $result) {
            if (!in_array($result->tid, $location_tids)) {
                unset($view->result[$i]);
            }
        }
    }
    if ($view->current_display == 'prizes_list') {
        // $view->args[0] = event region
        // $view->args[1] = event specific location
            $location = taxonomy_term_load($view->args[1]);
            foreach ($view->result as $i => $result) {

                $r = false;
                // show all international (country is blank)
                if (empty($result->_field_data['tid']['entity']->field_country['und']) && !is_null($view->args[1]) && $view->args[1] != '_none')  {
                    $r = true;
                } else if ($result->_field_data['tid']['entity']->field_country['und'][0]['tid']
                    == $location->field_country['und'][0]['tid'] && !is_null($view->args[1]) && $view->args[1] != '_none') { // national and local prizes
                    if (empty($result->_field_data['tid']['entity']->field_jurisdiction['und'])) { // national, no location
                        $r = true;
                    } else {
                        foreach ($result->_field_data['tid']['entity']->field_jurisdiction['und'] as $loc) {
                            if ($loc['tid'] == $view->args[1]) { // local, location matches
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
        $view->current_display == 'by_prize' ||
        $view->current_display == 'project_export' ||
        $view->current_display == 'project_export_private'
    ) {
        foreach ($view->result as $i => $result) {
            if ($view->args[0]) {
                $tids = Array();
                if ($view->args[0] == 'mine') {
                    $user = user_load($GLOBALS['user']->uid);
                    foreach ($user->field_region['und'] as $location) {
                        $tids[] = $location['tid'];
                    }
                    foreach ($user->field_jurisdiction['und'] as $location) {
                        $tids[] = $location['tid'];
                    }
                } else {
                    $tids[] = $view->args[0];
                }
                $remove = true;
                foreach ($result->field_field_event_location as $location) {
                    if (in_array($location['raw']['tid'], $tids)) {
                        $remove = false;
                    }
                }
                foreach ($result->field_field_region as $location) {
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
