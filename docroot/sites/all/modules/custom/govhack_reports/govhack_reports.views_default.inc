<?php
/**
 * @file
 * govhack_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function govhack_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'GovHack 2015 Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '60';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
    'field_team_name' => 'field_team_name',
    'field_best_youth_teams' => 'field_team_name',
    'field_url' => 'field_url',
    'field_video_url' => 'field_video_url',
    'field_event_location' => 'field_event_location',
    'field_project_video' => 'field_video_url',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_best_youth_teams' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_video' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.youth-label {
margin-left: 5px;  color: white;  background-color: #5bc0de;  display: inline;  padding: .2em .6em .3em;  font-size: 75%;  font-weight: 700;  line-height: 1;  color: #fff;   text-align: center;  white-space: nowrap;  vertical-align: baseline;  border-radius: .25em;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  /* Relationship: File Usage: File */
  $handler->display->display_options['relationships']['node_to_file']['id'] = 'node_to_file';
  $handler->display->display_options['relationships']['node_to_file']['table'] = 'file_usage';
  $handler->display->display_options['relationships']['node_to_file']['field'] = 'node_to_file';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Content: Ready */
  $handler->display->display_options['fields']['field_ready']['id'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['table'] = 'field_data_field_ready';
  $handler->display->display_options['fields']['field_ready']['field'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['label'] = 'Project Status';
  $handler->display->display_options['fields']['field_ready']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['alter']['text'] = 'Submitted';
  $handler->display->display_options['fields']['field_ready']['empty'] = 'Draft';
  $handler->display->display_options['fields']['field_ready']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['type'] = 'list_key';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Project Title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  /* Sort criterion: Content: Prizes (field_prizes) */
  $handler->display->display_options['sorts']['field_prizes_target_id']['id'] = 'field_prizes_target_id';
  $handler->display->display_options['sorts']['field_prizes_target_id']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['sorts']['field_prizes_target_id']['field'] = 'field_prizes_target_id';
  /* Sort criterion: Field: Region (field_region) */
  $handler->display->display_options['sorts']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['sorts']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['sorts']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['sorts']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_region_tid']['expose']['label'] = 'Region';
  /* Sort criterion: Content: Event Location (field_event_location) */
  $handler->display->display_options['sorts']['field_event_location_target_id']['id'] = 'field_event_location_target_id';
  $handler->display->display_options['sorts']['field_event_location_target_id']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['sorts']['field_event_location_target_id']['field'] = 'field_event_location_target_id';
  $handler->display->display_options['sorts']['field_event_location_target_id']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_event_location_target_id']['expose']['label'] = 'Local Event';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Project List Page */
  $handler = $view->new_display('page', 'Project List Page', 'project_list');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'projects';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'project_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'projects.%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Project Description';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Content: Evidence Repository URL */
  $handler->display->display_options['fields']['field_download_url']['id'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['fields']['field_download_url']['field'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['label'] = 'Source URL';
  $handler->display->display_options['fields']['field_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_download_url']['type'] = 'link_plain';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'link_plain';
  /* Field: Content: Used Datasets */
  $handler->display->display_options['fields']['field_official_datasets']['id'] = 'field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['table'] = 'field_data_field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['field'] = 'field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_official_datasets']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_official_datasets']['delta_offset'] = '0';
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'node_to_file';
  $handler->display->display_options['fields']['uri']['label'] = 'Project Image URL';
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Used Datasets';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach($data->field_field_official_datasets as $member) {
$item = reset($member[\'rendered\'][\'entity\'][\'field_collection_item\']);
echo $item[\'field_dataset_name\'][0][\'#markup\'].\' [\'.$item[\'field_publishing_organisation\'][0][\'#markup\']."] @ ". $item[\'field_dataset_url\'][0][\'#element\'][\'url\'] ."\\n";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Ready */
  $handler->display->display_options['fields']['field_ready']['id'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['table'] = 'field_data_field_ready';
  $handler->display->display_options['fields']['field_ready']['field'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['label'] = 'Project Status';
  $handler->display->display_options['fields']['field_ready']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['alter']['text'] = 'Submitted';
  $handler->display->display_options['fields']['field_ready']['empty'] = 'Draft';
  $handler->display->display_options['fields']['field_ready']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['type'] = 'list_key';
  $handler->display->display_options['path'] = 'projects/csv';

  /* Display: Projects By Prize Data export */
  $handler = $view->new_display('views_data_export', 'Projects By Prize Data export', 'by_prize');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'projects-by-prize.%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['label'] = 'Prize Name';
  $handler->display->display_options['fields']['field_prizes']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_prizes']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_prizes']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Project Description';
  /* Field: Content: Evidence Repository URL */
  $handler->display->display_options['fields']['field_download_url']['id'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['fields']['field_download_url']['field'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['label'] = 'Source URL';
  $handler->display->display_options['fields']['field_download_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_download_url']['type'] = 'link_plain';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_video_url']['type'] = 'link_plain';
  /* Field: Content: Used Datasets */
  $handler->display->display_options['fields']['field_official_datasets']['id'] = 'field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['table'] = 'field_data_field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['field'] = 'field_official_datasets';
  $handler->display->display_options['fields']['field_official_datasets']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_official_datasets']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Prizes (field_prizes) */
  $handler->display->display_options['sorts']['field_prizes_target_id']['id'] = 'field_prizes_target_id';
  $handler->display->display_options['sorts']['field_prizes_target_id']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['sorts']['field_prizes_target_id']['field'] = 'field_prizes_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['path'] = 'projects/by-prize';

  /* Display: Data export private */
  $handler = $view->new_display('views_data_export', 'Data export private', 'project_export_private');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'projects-private.%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Project Description';
  /* Field: Field: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author Name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Content: Team Phone Numbers */
  $handler->display->display_options['fields']['field_team_contact_details']['id'] = 'field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['field'] = 'field_team_contact_details';
  /* Field: Content: Project Editors */
  $handler->display->display_options['fields']['field_contributor_1']['id'] = 'field_contributor_1';
  $handler->display->display_options['fields']['field_contributor_1']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['label'] = 'Team Members';
  $handler->display->display_options['fields']['field_contributor_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contributor_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_contributor_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contributor_1']['separator'] = '|';
  /* Field: Content: Team Members */
  $handler->display->display_options['fields']['field_other_team_members']['id'] = 'field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['table'] = 'field_data_field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['field'] = 'field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['label'] = 'Other Team Members';
  $handler->display->display_options['fields']['field_other_team_members']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_other_team_members']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_other_team_members']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_other_team_members']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_team_members']['separator'] = '';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Content: Procurement Opportunities */
  $handler->display->display_options['fields']['field_procurement']['id'] = 'field_procurement';
  $handler->display->display_options['fields']['field_procurement']['table'] = 'field_data_field_procurement';
  $handler->display->display_options['fields']['field_procurement']['field'] = 'field_procurement';
  $handler->display->display_options['fields']['field_procurement']['type'] = 'list_key';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Team Members';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
foreach ($data->field_field_contributor_1 as $contributor) {
echo $contributor["raw"]["entity"]->name.\' \'. $contributor["raw"]["entity"]->mail. "\\n";
}
foreach($data->field_field_other_team_members as $member) {
$item = reset($member[\'rendered\'][\'entity\'][\'field_collection_item\']);
echo $item[\'field_team_member_name\'][0][\'#markup\'].\' \'.$item[\'field_team_member_email\'][0][\'#markup\']."\\n";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Team Prize Details */
  $handler->display->display_options['fields']['field_team_prize_details']['id'] = 'field_team_prize_details';
  $handler->display->display_options['fields']['field_team_prize_details']['table'] = 'field_data_field_team_prize_details';
  $handler->display->display_options['fields']['field_team_prize_details']['field'] = 'field_team_prize_details';
  /* Field: Content: Ready */
  $handler->display->display_options['fields']['field_ready']['id'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['table'] = 'field_data_field_ready';
  $handler->display->display_options['fields']['field_ready']['field'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['alter']['text'] = 'Submitted';
  $handler->display->display_options['fields']['field_ready']['empty'] = 'Draft';
  $handler->display->display_options['fields']['field_ready']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['type'] = 'list_key';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'projects/csv-private-yRgkNzuFDdz';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Higher Education Teams */
  $handler = $view->new_display('page', 'Higher Education Teams', 'page_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'projects:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'projects/edu';

  /* Display: Public Servant Teams */
  $handler = $view->new_display('page', 'Public Servant Teams', 'page_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'projects:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'projects/publicservant';

  /* Display: Professional Teams */
  $handler = $view->new_display('page', 'Professional Teams', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'projects:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'projects/professional';

  /* Display: My Projects */
  $handler = $view->new_display('page', 'My Projects', 'my_projects');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'my_projects';

  /* Display: Ready */
  $handler = $view->new_display('page', 'Ready', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video Upload */
  $handler->display->display_options['fields']['field_project_video']['id'] = 'field_project_video';
  $handler->display->display_options['fields']['field_project_video']['table'] = 'field_data_field_project_video';
  $handler->display->display_options['fields']['field_project_video']['field'] = 'field_project_video';
  $handler->display->display_options['fields']['field_project_video']['label'] = '';
  $handler->display->display_options['fields']['field_project_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_project_video']['alter']['text'] = '[field_project_video] 
 ';
  $handler->display->display_options['fields']['field_project_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_project_video']['alter']['path'] = '[field_project_video]';
  $handler->display->display_options['fields']['field_project_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_project_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_project_video']['type'] = 'file_url_plain';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['alter']['text'] = '[field_video_url][field_project_video]';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Evidence Repository URL */
  $handler->display->display_options['fields']['field_download_url']['id'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['fields']['field_download_url']['field'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['label'] = 'Source/Evidence';
  $handler->display->display_options['fields']['field_download_url']['click_sort_column'] = 'url';
  /* Field: Content: Ready */
  $handler->display->display_options['fields']['field_ready']['id'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['table'] = 'field_data_field_ready';
  $handler->display->display_options['fields']['field_ready']['field'] = 'field_ready';
  $handler->display->display_options['fields']['field_ready']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['alter']['text'] = 'Submitted';
  $handler->display->display_options['fields']['field_ready']['empty'] = 'Draft';
  $handler->display->display_options['fields']['field_ready']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ready']['type'] = 'list_key';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'projects/ready';

  /* Display: Youth Teams */
  $handler = $view->new_display('page', 'Youth Teams', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'projects:default';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['path'] = 'projects/youth';

  /* Display: Data export private simple */
  $handler = $view->new_display('views_data_export', 'Data export private simple', 'views_data_export_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'projects-private.%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Project Description';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = 'Local Event State';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author Name';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  /* Field: Content: Team Phone Numbers */
  $handler->display->display_options['fields']['field_team_contact_details']['id'] = 'field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['field'] = 'field_team_contact_details';
  /* Field: Content: Project Editors */
  $handler->display->display_options['fields']['field_contributor_1']['id'] = 'field_contributor_1';
  $handler->display->display_options['fields']['field_contributor_1']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['label'] = 'Team Members';
  $handler->display->display_options['fields']['field_contributor_1']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_contributor_1']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_contributor_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contributor_1']['separator'] = '|';
  /* Field: Content: Team Members */
  $handler->display->display_options['fields']['field_other_team_members']['id'] = 'field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['table'] = 'field_data_field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['field'] = 'field_other_team_members';
  $handler->display->display_options['fields']['field_other_team_members']['label'] = 'Other Team Members';
  $handler->display->display_options['fields']['field_other_team_members']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_other_team_members']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_other_team_members']['separator'] = '';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Content: Procurement Opportunities */
  $handler->display->display_options['fields']['field_procurement']['id'] = 'field_procurement';
  $handler->display->display_options['fields']['field_procurement']['table'] = 'field_data_field_procurement';
  $handler->display->display_options['fields']['field_procurement']['field'] = 'field_procurement';
  $handler->display->display_options['fields']['field_procurement']['type'] = 'list_key';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['path'] = 'projects/csv-private-simple';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['Projects'] = $view;

  $view = new view();
  $view->name = 'dataset_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Dataset List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Dataset URL */
  $handler->display->display_options['fields']['field_dataset_url']['id'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['table'] = 'field_data_field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['field'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['click_sort_column'] = 'url';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    13 => '13',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_local_dataset_tid']['id'] = 'field_local_dataset_tid';
  $handler->display->display_options['filters']['field_local_dataset_tid']['table'] = 'field_data_field_local_dataset';
  $handler->display->display_options['filters']['field_local_dataset_tid']['field'] = 'field_local_dataset_tid';
  $handler->display->display_options['filters']['field_local_dataset_tid']['operator'] = 'empty';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jurisdiction',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_jurisdiction' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['dataset_list'] = $view;

  $view = new view();
  $view->name = 'datasets_used';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Datasets Used';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Datasets Used';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'views_data_export_1';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/datasets-used/csv">Download as CSV</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Field collection item: Entity with the Used Datasets (field_official_datasets) */
  $handler->display->display_options['relationships']['field_official_datasets_node']['id'] = 'field_official_datasets_node';
  $handler->display->display_options['relationships']['field_official_datasets_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_official_datasets_node']['field'] = 'field_official_datasets_node';
  /* Field: Field collection item: Dataset Name */
  $handler->display->display_options['fields']['field_dataset_name']['id'] = 'field_dataset_name';
  $handler->display->display_options['fields']['field_dataset_name']['table'] = 'field_data_field_dataset_name';
  $handler->display->display_options['fields']['field_dataset_name']['field'] = 'field_dataset_name';
  /* Field: Field collection item: Dataset URL */
  $handler->display->display_options['fields']['field_dataset_url']['id'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['table'] = 'field_data_field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['field'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['click_sort_column'] = 'url';
  /* Field: Field collection item: Jurisdiction of Data */
  $handler->display->display_options['fields']['field_jurisdiction_of_data']['id'] = 'field_jurisdiction_of_data';
  $handler->display->display_options['fields']['field_jurisdiction_of_data']['table'] = 'field_data_field_jurisdiction_of_data';
  $handler->display->display_options['fields']['field_jurisdiction_of_data']['field'] = 'field_jurisdiction_of_data';
  /* Field: Field collection item: Publishing Organisation/Agency */
  $handler->display->display_options['fields']['field_publishing_organisation']['id'] = 'field_publishing_organisation';
  $handler->display->display_options['fields']['field_publishing_organisation']['table'] = 'field_data_field_publishing_organisation';
  $handler->display->display_options['fields']['field_publishing_organisation']['field'] = 'field_publishing_organisation';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_official_datasets_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_official_datasets_node';
  $handler->display->display_options['fields']['title']['label'] = 'Projects using Dataset';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[view_node]';
  /* Sort criterion: Field collection item: Dataset URL (field_dataset_url:url) */
  $handler->display->display_options['sorts']['field_dataset_url_url']['id'] = 'field_dataset_url_url';
  $handler->display->display_options['sorts']['field_dataset_url_url']['table'] = 'field_data_field_dataset_url';
  $handler->display->display_options['sorts']['field_dataset_url_url']['field'] = 'field_dataset_url_url';
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_official_datasets' => 'field_official_datasets',
  );
  $handler->display->display_options['filters']['field_name']['group'] = 1;
  /* Filter criterion: Field collection item: Dataset Name (field_dataset_name) */
  $handler->display->display_options['filters']['field_dataset_name_value']['id'] = 'field_dataset_name_value';
  $handler->display->display_options['filters']['field_dataset_name_value']['table'] = 'field_data_field_dataset_name';
  $handler->display->display_options['filters']['field_dataset_name_value']['field'] = 'field_dataset_name_value';
  $handler->display->display_options['filters']['field_dataset_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dataset_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dataset_name_value']['expose']['operator_id'] = 'field_dataset_name_value_op';
  $handler->display->display_options['filters']['field_dataset_name_value']['expose']['label'] = 'Dataset Name';
  $handler->display->display_options['filters']['field_dataset_name_value']['expose']['operator'] = 'field_dataset_name_value_op';
  $handler->display->display_options['filters']['field_dataset_name_value']['expose']['identifier'] = 'field_dataset_name_value';
  $handler->display->display_options['filters']['field_dataset_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field collection item: Jurisdiction of Data (field_jurisdiction_of_data) */
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['id'] = 'field_jurisdiction_of_data_value';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['table'] = 'field_data_field_jurisdiction_of_data';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['field'] = 'field_jurisdiction_of_data_value';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['group'] = 1;
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['expose']['operator_id'] = 'field_jurisdiction_of_data_value_op';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['expose']['label'] = 'Jurisdiction of Data';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['expose']['operator'] = 'field_jurisdiction_of_data_value_op';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['expose']['identifier'] = 'field_jurisdiction_of_data_value';
  $handler->display->display_options['filters']['field_jurisdiction_of_data_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field collection item: Publishing Organisation/Agency (field_publishing_organisation) */
  $handler->display->display_options['filters']['field_publishing_organisation_value']['id'] = 'field_publishing_organisation_value';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['table'] = 'field_data_field_publishing_organisation';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['field'] = 'field_publishing_organisation_value';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['group'] = 1;
  $handler->display->display_options['filters']['field_publishing_organisation_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_publishing_organisation_value']['expose']['operator_id'] = 'field_publishing_organisation_value_op';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['expose']['label'] = 'Publishing Organisation/Agency';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['expose']['operator'] = 'field_publishing_organisation_value_op';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['expose']['identifier'] = 'field_publishing_organisation_value';
  $handler->display->display_options['filters']['field_publishing_organisation_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_official_datasets_node';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Project Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'datasets-used';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'datasets-used-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'datasets-used/csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['datasets_used'] = $view;

  $view = new view();
  $view->name = 'local_dataset_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Local Dataset List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Dataset URL */
  $handler->display->display_options['fields']['field_dataset_url']['id'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['table'] = 'field_data_field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['field'] = 'field_dataset_url';
  $handler->display->display_options['fields']['field_dataset_url']['click_sort_column'] = 'url';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_local_dataset_tid']['id'] = 'field_local_dataset_tid';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['table'] = 'field_data_field_local_dataset';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['field'] = 'field_local_dataset_tid';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_local_dataset_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    13 => '13',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_local_dataset',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_dataset_url' => 0,
    'field_local_dataset' => 0,
    'tid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['local_dataset_list'] = $view;

  $view = new view();
  $view->name = 'local_prizes_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Local Prizes List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Local Event */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['delta_offset'] = '0';
  /* Sort criterion: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Contextual filter: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['default_argument_options']['argument'] = 'ACT';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    11 => '11',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_jurisdiction' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['local_prizes_list'] = $view;

  $view = new view();
  $view->name = 'national_prizes_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'National Prizes List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Local Event */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['text'] = '[field_jurisdiction] ';
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_jurisdiction']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_jurisdiction]: [name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = TRUE;
  /* Sort criterion: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
  $handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
  $handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
  $handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'prizes_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'field_jurisdiction' => 0,
    'field_caption' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['national_prizes_list'] = $view;

  $view = new view();
  $view->name = 'prize_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Prize List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Prize List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_jurisdiction',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Local Event */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = 'Prize Region';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['empty'] = 'National/International';
  $handler->display->display_options['fields']['field_jurisdiction']['delta_offset'] = '0';
  /* Sort criterion: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  /* Contextual filter: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_jurisdiction_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'prizes' => 'prizes',
  );
  /* Filter criterion: Field: Local Event (field_jurisdiction) */
  $handler->display->display_options['filters']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_jurisdiction_tid']['expose']['operator_id'] = 'field_jurisdiction_tid_op';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['expose']['label'] = 'Filter by Location';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['expose']['operator'] = 'field_jurisdiction_tid_op';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['expose']['identifier'] = 'field_jurisdiction_tid';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_jurisdiction_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_jurisdiction_tid']['vocabulary'] = 'jurisdiction';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'prizes';
  $export['prize_list'] = $view;

  $view = new view();
  $view->name = 'prizes_projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prizes projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Prizes projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Prizes (field_prizes) */
  $handler->display->display_options['arguments']['field_prizes_target_id']['id'] = 'field_prizes_target_id';
  $handler->display->display_options['arguments']['field_prizes_target_id']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['arguments']['field_prizes_target_id']['field'] = 'field_prizes_target_id';
  $handler->display->display_options['arguments']['field_prizes_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_prizes_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_prizes_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_prizes_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_prizes_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_prizes_target_id']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['label'] = '';
  $handler->display->display_options['fields']['field_prizes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prizes']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_prizes']['delta_offset'] = '0';
  /* Field: Content: Originality */
  $handler->display->display_options['fields']['field_originality']['id'] = 'field_originality';
  $handler->display->display_options['fields']['field_originality']['table'] = 'field_data_field_originality';
  $handler->display->display_options['fields']['field_originality']['field'] = 'field_originality';
  $handler->display->display_options['fields']['field_originality']['label'] = '';
  $handler->display->display_options['fields']['field_originality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_originality']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_originality']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_originality']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Quality */
  $handler->display->display_options['fields']['field_quality']['id'] = 'field_quality';
  $handler->display->display_options['fields']['field_quality']['table'] = 'field_data_field_quality';
  $handler->display->display_options['fields']['field_quality']['field'] = 'field_quality';
  $handler->display->display_options['fields']['field_quality']['label'] = '';
  $handler->display->display_options['fields']['field_quality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quality']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_quality']['type'] = 'fivestar_formatter_percentage';
  $handler->display->display_options['fields']['field_quality']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['prizes_projects'] = $view;

  $view = new view();
  $view->name = 'project_prizes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'project_prizes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'project_prizes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content with term */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'taxonomy_index';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'prizes' => 'prizes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'projects-by-prizes';
  $export['project_prizes'] = $view;

  return $export;
}
