<?php
/**
 * @file
 * ochack_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ochack_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_info|node|project|form';
  $field_group->group_name = 'group_additional_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Additional info',
    'weight' => '14',
    'children' => array(
      0 => 'field_additional_support_needed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-additional-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_info|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|project|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '13',
    'children' => array(
      0 => 'body',
      1 => 'field_description',
      2 => 'field_keywords',
      3 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-basic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comp_details|node|project|form';
  $field_group->group_name = 'group_comp_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Competition Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_project_jurisdiction',
      1 => 'field_prizes',
      2 => 'field_act_prizes',
      3 => 'field_victorian_technology_innov',
      4 => 'field_adelaide_prizes',
      5 => 'field_geelong_ballarat_prizes',
      6 => 'field_gold_coast_prizes',
      7 => 'field_melbourne_prizes',
      8 => 'field_mount_gambier_prizes',
      9 => 'field_nsw_sydney_prizes',
      10 => 'field_tasmania_prizes',
      11 => 'field_wa_perth_prizes',
      12 => 'field_hack_hosting',
      13 => 'field_science_prize',
      14 => 'field_digital_humanities_prize',
      15 => 'field_social_inclusion_prize',
      16 => 'field_business_prize',
      17 => 'field_data_journalism_prize',
      18 => 'field_brisbane_prizes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Competition Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-comp-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_comp_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_used|node|project|form';
  $field_group->group_name = 'group_data_used';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data Used',
    'weight' => '3',
    'children' => array(
      0 => 'field_other_datasets',
      1 => 'field_local_datasets_used',
      2 => 'field_datasets_used',
      3 => 'field_local_sa_data_used',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Data Used',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-data-used field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_data_used|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_judging_criteria|node|project|default';
  $field_group->group_name = 'group_judging_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Judging Criteria',
    'weight' => '2',
    'children' => array(
      0 => 'field_originality',
      1 => 'field_relevance',
      2 => 'field_consistency',
      3 => 'field_quality',
      4 => 'field_usability',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-judging-criteria field-group-fieldset',
      ),
    ),
  );
  $export['group_judging_criteria|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|project|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic',
      1 => 'group_multimedia',
      2 => 'group_repo_demo',
      3 => 'group_additional_info',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-main field-group-tabs',
      ),
    ),
  );
  $export['group_main|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|project|form';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '15',
    'children' => array(
      0 => 'field_image',
      1 => 'field_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-multimedia field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_multimedia|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proj_details|node|project|form';
  $field_group->group_name = 'group_proj_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-proj-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_proj_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proj_results|node|project|form';
  $field_group->group_name = 'group_proj_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Results',
    'weight' => '4',
    'children' => array(
      0 => 'field_download_url',
      1 => 'field_url',
      2 => 'field_video_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Project Results',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-proj-results field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_proj_results|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_repo_demo|node|project|form';
  $field_group->group_name = 'group_repo_demo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Code repo and demo',
    'weight' => '16',
    'children' => array(
      0 => 'field_download_url',
      1 => 'field_install_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-repo-demo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_repo_demo|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_team_details|node|project|form';
  $field_group->group_name = 'group_team_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Team Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_contributor',
      1 => 'field_team_contact_details',
      2 => 'field_team_name',
      3 => 'field_team_awards',
      4 => 'field_procurement',
      5 => 'field_code_for_australia',
      6 => 'field_data_portal_use_case',
      7 => 'field_showcase',
      8 => 'field_team_prize_entrepreneurshi',
      9 => 'field_team_prize_professional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Team Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-team-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_team_details|node|project|form'] = $field_group;

  return $export;
}
