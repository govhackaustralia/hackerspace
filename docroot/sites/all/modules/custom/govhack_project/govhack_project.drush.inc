<?php

/**
 * Implements hook_drush_command().
 */
function govhack_project_drush_command()
{

    $items['prize-import'] = array(
        'description' => 'govhack prize import',
        'aliases' => array('pi'),
    );

    return $items;
}

/**
 * Callback for the drush-demo-command command
 */
function drush_govhack_project_prize_import()
{
    $events = array(
        619 => "canberra",
        632 => "canberra_heritage_hack",
        612 => "camperdown_games_for_learning",
        639 => "parramatta",
        641 => "sydney",
        640 => "tyro_fintech_hub",
        648 => "auckland",
        649 => "christchurch",
        650 => "dunedin",
        651 => "hamilton",
        652 => "napier_hawkes_bay",
        653 => "northland",
        654 => "queenstown",
        622 => "wellington",
        655 => "whanganui",
        642 => "brisbane-maker",
        209 => "brisbane",
        643 => "brisbane-youth",
        644 => "far_north_queensland",
        127 => "gold-coast",
        645 => "ipswich",
        646 => "logan",
        647 => "rockhampton",
        600 => "sunshine-coast",
        601 => "toowoomba",
        159 => "adelaide",
        637 => "adelaide_maker",
        160 => "mount-gambier-youth",
        576 => "onkaparinga",
        575 => "playford",
        636 => "port-adelaide-enfield",
        620 => "hobart",
        635 => "launceston",
        577 => "ballarat",
        124 => "geelong",
        634 => "wyndham",
        125 => "melbourne",
        631 => "melbourne_mapspace",
        633 => "geraldton",
        621 => "perth"
    );
    $regions = Array
    ("australia" => array(), "international" => array(),
        // international and australia
        "act" => Array(619 => "Canberra", 632 => "Canberra Heritage Hack"),
        "nsw" => Array(612 => "Camperdown Games for Learning",
            639 => "Parramatta",
            641 => "Sydney Official",
            640 => "Tyro Fintech Hub"),
        "nz" => Array(648 => "Auckland",
            649 => "Christchurch",
            650 => "Dunedin",
            651 => "Hamilton",
            652 => "Napier, Hawkes Bay",
            653 => "Northland",
            654 => "Queenstown",
            622 => "Wellington",
            655 => "Whanganui"),
        "qld" => Array(642 => "Brisbane Maker Node",
            209 => "Brisbane Official",
            643 => "Brisbane Youth Node",
            644 => "Far North Queensland",
            127 => "Gold Coast",
            645 => "Ipswich",
            646 => "Logan",
            647 => "Rockhampton",
            600 => "Sunshine Coast",
            601 => "Toowoomba"),
        "sa" => Array(159 => "Adelaide",
            637 => "Adelaide Maker",
            160 => "Mount Gambier",
            576 => "Onkaparinga",
            575 => "Playford",
            636 => "Port Adelaide Enfield"),
        "tas" => Array(620 => "Hobart",
            635 => "Launceston"),
        "vic" => Array(577 => "Ballarat",
            124 => "Geelong",
            634 => "Hack for Wyndham",
            125 => "Melbourne",
            631 => "Melbourne Mapspace"),
        "wa" => Array(633 => "Geraldton",
            621 => "Perth")
    );

    $allprizes = json_decode(file_get_contents('all.json'));
    foreach ($allprizes as $prize) {
        if (!in_array($prize->jurisdiction, array_keys($regions))) {
            drupal_set_message(t('Unknown region: ' . $prize->jurisdiction));
        }
        if (isset($prize->events)) {
            foreach ($prize->events as $event) {
                if (!in_array($event, array_values($events))) {
                    drupal_set_message(t('Unknown event: ' . $event));
                }
            }
        }
    }

    $vocab = taxonomy_vocabulary_machine_name_load('prizes');
    $existing_terms = taxonomy_get_tree($vocab->vid);
    $existing_term_names = Array();
    foreach ($existing_terms as $term) {
        $existing_term_names[$term->name] = $term->tid;
    }

    foreach ($allprizes as $prize) {
        $id = str_replace("--","-",str_replace("--","-",str_replace(Array(","," ","?","!","’","&","\xE2\x80\xA8"),"",$prize->id)));
        if (in_array($prize->name, array_keys($existing_term_names))) {
            $term = taxonomy_term_load($existing_term_names[$prize->name]);
            //drupal_set_message("Loaded " . $term->tid . " " . $id);
        } else {
            $term = new stdClass();
            $term->vid = $vocab->vid;
            $term->name = $prize->name;
            drupal_set_message("NEW " . $term->tid . " " . $id);
        }
        $term->description = $prize->body;
        $term->format = "full_html";
        $term->field_sponsor = array('und' => array(array('value' => $prize->organisation_title)));
        if ($prize->jurisdiction != "international") {
            $term->field_country = array('und' => array(array('tid' => ($prize->jurisdiction == 'nz' ? 277 : 276))));
        } else {
            $term->field_country = array('und' => array());
        }
        $term->field_jurisdiction = array('und' => array());

        if ($prize->jurisdiction != "australia" && $prize->jurisdiction != "nz") {
            if (isset($prize->events)) {
                //drupal_set_message("Event specific " . $term->tid . " " . $prize->id);
                //drupal_set_message(print_r($prize->events,true));
                foreach ($prize->events as $event) {
                    //drupal_set_message(print_r(array('tid' => array_search($event,$events)),true));
                    $term->field_jurisdiction['und'][] = array('tid' => array_search($event, $events));
                }
            } else {
                foreach (array_keys($regions[$prize->jurisdiction]) as $tid) {
                    $term->field_jurisdiction['und'][] = array('tid' => $tid);
                }
            }
        } else {
            $term->field_jurisdiction['und'] = array();
        }
        //print_r($term);
        taxonomy_term_save($term);
        drupal_set_message("Saved " . $term->tid . " " . $id);
        $conditions = array('source' => 'taxonomy/term/' . $term->tid);
        $path = path_load($conditions);
        $path['alias'] = "prizes/" .  $id;
        path_save($path);
        //print_r($path);
    }

}