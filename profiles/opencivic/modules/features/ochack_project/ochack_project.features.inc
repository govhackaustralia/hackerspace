<?php
/**
 * @file
 * ochack_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ochack_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ochack_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function ochack_project_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: project
  $schemaorg['node']['project'] = array(
    'rdftype' => array(
      0 => 'schema:CreativeWork',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'field_description' => array(
      'predicates' => array(),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_image' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(),
    ),
    'field_contributor' => array(
      'predicates' => array(),
    ),
    'field_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_video' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
      'type' => 'rel',
    ),
    'field_additional_support_needed' => array(
      'predicates' => array(),
    ),
    'field_download_url' => array(
      'predicates' => array(),
    ),
    'field_install_url' => array(
      'predicates' => array(),
    ),
    'field_team_contact_details' => array(
      'predicates' => array(),
    ),
    'field_prizes' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_project_jurisdiction' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_team_name' => array(
      'predicates' => array(),
    ),
    'field_other_datasets' => array(
      'predicates' => array(),
    ),
    'field_datasets_used' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_project_rating' => array(
      'predicates' => array(),
    ),
    'field_act_prizes' => array(
      'predicates' => array(),
    ),
    'field_team_awards' => array(
      'predicates' => array(),
    ),
    'field_procurement' => array(
      'predicates' => array(),
    ),
    'field_code_for_australia' => array(
      'predicates' => array(),
    ),
    'field_data_portal_use_case' => array(
      'predicates' => array(),
    ),
    'field_showcase' => array(
      'predicates' => array(),
    ),
    'field_victorian_technology_innov' => array(
      'predicates' => array(),
    ),
    'field_adelaide_prizes' => array(
      'predicates' => array(),
    ),
    'field_geelong_ballarat_prizes' => array(
      'predicates' => array(),
    ),
    'field_gold_coast_prizes' => array(
      'predicates' => array(),
    ),
    'field_melbourne_prizes' => array(
      'predicates' => array(),
    ),
    'field_mount_gambier_prizes' => array(
      'predicates' => array(),
    ),
    'field_nsw_sydney_prizes' => array(
      'predicates' => array(),
    ),
    'field_tasmania_prizes' => array(
      'predicates' => array(),
    ),
    'field_wa_perth_prizes' => array(
      'predicates' => array(),
    ),
    'field_hack_hosting' => array(
      'predicates' => array(),
    ),
    'field_science_prize' => array(
      'predicates' => array(),
    ),
    'field_local_datasets_used' => array(
      'predicates' => array(),
    ),
    'field_digital_humanities_prize' => array(
      'predicates' => array(),
    ),
    'field_social_inclusion_prize' => array(
      'predicates' => array(),
    ),
    'field_business_prize' => array(
      'predicates' => array(),
    ),
    'field_data_journalism_prize' => array(
      'predicates' => array(),
    ),
    'field_project_video' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_video_url' => array(
      'predicates' => array(),
    ),
    'field_originality' => array(
      'predicates' => array(),
    ),
    'field_relevance' => array(
      'predicates' => array(),
    ),
    'field_consistency' => array(
      'predicates' => array(),
    ),
    'field_quality' => array(
      'predicates' => array(),
    ),
    'field_usability' => array(
      'predicates' => array(),
    ),
    'field_judge_comment' => array(
      'predicates' => array(),
    ),
    'field_brisbane_prizes' => array(
      'predicates' => array(),
    ),
    'field_local_sa_data_used' => array(
      'predicates' => array(),
    ),
    'field_team_prize_entrepreneurshi' => array(
      'predicates' => array(),
    ),
    'field_team_prize_professional' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}
