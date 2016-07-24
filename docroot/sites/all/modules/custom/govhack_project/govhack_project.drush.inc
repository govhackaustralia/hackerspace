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
        638 => "manly_northern_beaches",
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
        634 => "hack_for_wyndham",
        125 => "melbourne",
        631 => "melbourne_mapspace",
        633 => "geraldton",
        621 => "perth"
    );
    $regions = Array
    (
        "act" => Array(619 => "Canberra", 632 => "Canberra Heritage Hack"),
        "nsw" => Array(612 => "Camperdown Games for Learning",
            638 => "Manly Northern Beaches",
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

    $allprizes = json_decode(file_get_contents ('all.json'));
    foreach ($allprizes as $prize) {
        if (!in_array($prize->jurisdiction, array_keys($regions))) {
            drupal_set_message(t('Unknown region: '.$prize->jurisdiction));
        }
        if (isset($prize->events)) {
            foreach ($prize->events as $event) {
                if (!in_array($event, array_values($events))) {
                    drupal_set_message(t('Unknown event: ' . $event));
                }
            }
        }
    }
}