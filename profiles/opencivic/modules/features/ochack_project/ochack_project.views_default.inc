<?php
/**
 * @file
 * ochack_project.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ochack_project_views_default_views() {
  $export = array();

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
  /* Relationship: Field: Jurisdiction/Local State (field_jurisdiction) */
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['relationships']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Field: Field: Jurisdiction/Local State */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = '';
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['alter']['text'] = '[field_jurisdiction] ';
  $handler->display->display_options['fields']['field_jurisdiction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_jurisdiction']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['type'] = 'taxonomy_term_reference_plain';
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
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  /* Sort criterion: Field: Jurisdiction/Local State (field_jurisdiction) */
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
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
  $translatables['national_prizes_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('term from field_jurisdiction'),
    t('[field_jurisdiction] '),
    t('[field_jurisdiction]: [name]'),
    t('Country'),
    t('Vocabulary'),
    t('Entity Reference'),
  );
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
  $handler->display->display_options['header']['area']['content'] = '<ul class="tabs primary"><li class="active"><a href="admin/structure/taxonomy/prizes/add">Add New Prize</a></li></ul>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Field: Jurisdiction/Local State */
  $handler->display->display_options['fields']['field_jurisdiction']['id'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['field'] = 'field_jurisdiction';
  $handler->display->display_options['fields']['field_jurisdiction']['label'] = 'Prize Region';
  $handler->display->display_options['fields']['field_jurisdiction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_jurisdiction']['empty'] = 'International';
  $handler->display->display_options['fields']['field_jurisdiction']['delta_offset'] = '0';
  /* Sort criterion: Field: Jurisdiction/Local State (field_jurisdiction) */
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['id'] = 'field_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['table'] = 'field_data_field_jurisdiction';
  $handler->display->display_options['sorts']['field_jurisdiction_tid']['field'] = 'field_jurisdiction_tid';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
  /* Contextual filter: Field: Jurisdiction/Local State (field_jurisdiction) */
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
  /* Filter criterion: Field: Jurisdiction/Local State (field_jurisdiction) */
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
  $translatables['prize_list'] = array(
    t('Master'),
    t('Prize List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<ul class="tabs primary"><li class="active"><a href="admin/structure/taxonomy/prizes/add">Add New Prize</a></li></ul>'),
    t('Prize Region'),
    t('International'),
    t('All'),
    t('Filter by Location'),
    t('Page'),
  );
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
  $translatables['prizes_projects'] = array(
    t('Master'),
    t('Prizes projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
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
  $translatables['project_prizes'] = array(
    t('Master'),
    t('project_prizes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('node'),
    t('Page'),
  );
  $export['project_prizes'] = $view;

  $view = new view();
  $view->name = 'project_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'project_videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Project Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_project_jurisdiction',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_project_jurisdiction' => 'field_project_jurisdiction',
    'field_video_url' => 'field_video_url',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_jurisdiction' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['fields']['field_project_jurisdiction']['exclude'] = TRUE;
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Local Event Location (field_project_jurisdiction) */
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['id'] = 'field_project_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['field'] = 'field_project_jurisdiction_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'project-videos';
  $translatables['project_videos'] = array(
    t('Master'),
    t('Project Videos'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Local Event State'),
    t('Video URL'),
    t('Page'),
  );
  $export['project_videos'] = $view;

  $view = new view();
  $view->name = 'projects';
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'title',
    'title' => 'title',
    'field_team_name' => 'field_team_name',
    'field_url' => 'field_url',
    'field_video_url' => 'field_video_url',
    'field_project_jurisdiction' => 'field_project_jurisdiction',
    'field_jurisdiction' => 'field_jurisdiction',
    'php' => 'php',
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
      'sortable' => 0,
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
    'field_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_project_jurisdiction' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_jurisdiction' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_act_prizes']['id'] = 'field_act_prizes';
  $handler->display->display_options['fields']['field_act_prizes']['table'] = 'field_data_field_act_prizes';
  $handler->display->display_options['fields']['field_act_prizes']['field'] = 'field_act_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_adelaide_prizes']['id'] = 'field_adelaide_prizes';
  $handler->display->display_options['fields']['field_adelaide_prizes']['table'] = 'field_data_field_adelaide_prizes';
  $handler->display->display_options['fields']['field_adelaide_prizes']['field'] = 'field_adelaide_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_geelong_ballarat_prizes']['id'] = 'field_geelong_ballarat_prizes';
  $handler->display->display_options['fields']['field_geelong_ballarat_prizes']['table'] = 'field_data_field_geelong_ballarat_prizes';
  $handler->display->display_options['fields']['field_geelong_ballarat_prizes']['field'] = 'field_geelong_ballarat_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_gold_coast_prizes']['id'] = 'field_gold_coast_prizes';
  $handler->display->display_options['fields']['field_gold_coast_prizes']['table'] = 'field_data_field_gold_coast_prizes';
  $handler->display->display_options['fields']['field_gold_coast_prizes']['field'] = 'field_gold_coast_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_melbourne_prizes']['id'] = 'field_melbourne_prizes';
  $handler->display->display_options['fields']['field_melbourne_prizes']['table'] = 'field_data_field_melbourne_prizes';
  $handler->display->display_options['fields']['field_melbourne_prizes']['field'] = 'field_melbourne_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_mount_gambier_prizes']['id'] = 'field_mount_gambier_prizes';
  $handler->display->display_options['fields']['field_mount_gambier_prizes']['table'] = 'field_data_field_mount_gambier_prizes';
  $handler->display->display_options['fields']['field_mount_gambier_prizes']['field'] = 'field_mount_gambier_prizes';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_nsw_sydney_prizes']['id'] = 'field_nsw_sydney_prizes';
  $handler->display->display_options['fields']['field_nsw_sydney_prizes']['table'] = 'field_data_field_nsw_sydney_prizes';
  $handler->display->display_options['fields']['field_nsw_sydney_prizes']['field'] = 'field_nsw_sydney_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_tasmania_prizes']['id'] = 'field_tasmania_prizes';
  $handler->display->display_options['fields']['field_tasmania_prizes']['table'] = 'field_data_field_tasmania_prizes';
  $handler->display->display_options['fields']['field_tasmania_prizes']['field'] = 'field_tasmania_prizes';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_wa_perth_prizes']['id'] = 'field_wa_perth_prizes';
  $handler->display->display_options['fields']['field_wa_perth_prizes']['table'] = 'field_data_field_wa_perth_prizes';
  $handler->display->display_options['fields']['field_wa_perth_prizes']['field'] = 'field_wa_perth_prizes';
  /* Sort criterion: Content: Local Event Location (field_project_jurisdiction) */
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['id'] = 'field_project_jurisdiction_tid';
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['sorts']['field_project_jurisdiction_tid']['field'] = 'field_project_jurisdiction_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
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
  /* Filter criterion: Content: Local Event Location (field_project_jurisdiction) */
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['id'] = 'field_project_jurisdiction_tid';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['field'] = 'field_project_jurisdiction_tid';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['value'] = array(
    115 => '115',
    159 => '159',
    209 => '209',
    256 => '256',
    124 => '124',
    127 => '127',
    125 => '125',
    160 => '160',
    119 => '119',
    123 => '123',
    126 => '126',
  );
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['operator_id'] = 'field_project_jurisdiction_tid_op';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['label'] = 'Filter by Local Event/Region';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['operator'] = 'field_project_jurisdiction_tid_op';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['identifier'] = 'field_project_jurisdiction_tid';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_project_jurisdiction_tid']['vocabulary'] = 'jurisdiction';

  /* Display: Home Page */
  $handler = $view->new_display('page', 'Home Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Team Name */
  $handler->display->display_options['fields']['field_team_name']['id'] = 'field_team_name';
  $handler->display->display_options['fields']['field_team_name']['table'] = 'field_data_field_team_name';
  $handler->display->display_options['fields']['field_team_name']['field'] = 'field_team_name';
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  /* Filter criterion: Content: Host (field_download_url:url) */
  $handler->display->display_options['filters']['field_download_url_url']['id'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['filters']['field_download_url_url']['field'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'home';

  /* Display: Project List Page */
  $handler = $view->new_display('page', 'Project List Page', 'project_list');
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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event/Region';
  $handler->display->display_options['fields']['field_project_jurisdiction']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if ($view->args[0]) {
$data_array = (array)$data;
if ($view->args[0] == \'mine\') {
$tid = $data_array["field_field_jurisdiction"][0]["raw"]["tid"];
} else {
$tid = $view->args[0];
}
var_dump( $data_array["field_field_project_jurisdiction"][0]["raw"]["tid"]);
var_dump( $tid);
var_dump( $data_array["field_field_project_jurisdiction"][0]["raw"]["tid"] !== $tid);
} else {
var_dump(false);
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'projects';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'project_export');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Project Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  /* Field: Content: Prizes */
  $handler->display->display_options['fields']['field_prizes']['id'] = 'field_prizes';
  $handler->display->display_options['fields']['field_prizes']['table'] = 'field_data_field_prizes';
  $handler->display->display_options['fields']['field_prizes']['field'] = 'field_prizes';
  /* Field: Content: Host */
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
  $handler->display->display_options['path'] = 'projects/csv';

  /* Display: Data export private */
  $handler = $view->new_display('views_data_export', 'Data export private', 'project_export_private');
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
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
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
  /* Field: Content: Supporting vendors */
  $handler->display->display_options['fields']['field_contributor_1']['id'] = 'field_contributor_1';
  $handler->display->display_options['fields']['field_contributor_1']['table'] = 'field_data_field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['field'] = 'field_contributor';
  $handler->display->display_options['fields']['field_contributor_1']['label'] = 'Team Members';
  $handler->display->display_options['fields']['field_contributor_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_contributor_1']['delta_offset'] = '0';
  /* Field: Content: Team Contact Details */
  $handler->display->display_options['fields']['field_team_contact_details']['id'] = 'field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['fields']['field_team_contact_details']['field'] = 'field_team_contact_details';
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
  $handler->display->display_options['path'] = 'projects/csv-private';

  /* Display: School/University Teams */
  $handler = $view->new_display('page', 'School/University Teams', 'page_4');
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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  /* Filter criterion: Content: Host (field_download_url:url) */
  $handler->display->display_options['filters']['field_download_url_url']['id'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['filters']['field_download_url_url']['field'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_team_awards_value']['id'] = 'field_team_awards_value';
  $handler->display->display_options['filters']['field_team_awards_value']['table'] = 'field_data_field_team_awards';
  $handler->display->display_options['filters']['field_team_awards_value']['field'] = 'field_team_awards_value';
  $handler->display->display_options['filters']['field_team_awards_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_team_awards_value']['value'] = array();
  /* Filter criterion: Content: Team Contact Details (field_team_contact_details) */
  $handler->display->display_options['filters']['field_team_contact_details_value']['id'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['filters']['field_team_contact_details_value']['field'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_team_contact_details_value']['value'] = '.edu';
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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  /* Filter criterion: Content: Host (field_download_url:url) */
  $handler->display->display_options['filters']['field_download_url_url']['id'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['filters']['field_download_url_url']['field'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_team_awards_value']['id'] = 'field_team_awards_value';
  $handler->display->display_options['filters']['field_team_awards_value']['table'] = 'field_data_field_team_awards';
  $handler->display->display_options['filters']['field_team_awards_value']['field'] = 'field_team_awards_value';
  $handler->display->display_options['filters']['field_team_awards_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_team_awards_value']['value'] = array();
  /* Filter criterion: Content: Team Contact Details (field_team_contact_details) */
  $handler->display->display_options['filters']['field_team_contact_details_value']['id'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['filters']['field_team_contact_details_value']['field'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_team_contact_details_value']['value'] = '.gov';
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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  /* Filter criterion: Content: Host (field_download_url:url) */
  $handler->display->display_options['filters']['field_download_url_url']['id'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['filters']['field_download_url_url']['field'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Team Contact Details (field_team_contact_details) */
  $handler->display->display_options['filters']['field_team_contact_details_value']['id'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['filters']['field_team_contact_details_value']['field'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_team_contact_details_value']['value'] = '.gov';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_team_prize_professional_value']['id'] = 'field_team_prize_professional_value';
  $handler->display->display_options['filters']['field_team_prize_professional_value']['table'] = 'field_data_field_team_prize_professional';
  $handler->display->display_options['filters']['field_team_prize_professional_value']['field'] = 'field_team_prize_professional_value';
  $handler->display->display_options['filters']['field_team_prize_professional_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_team_prize_professional_value']['value'] = array();
  $handler->display->display_options['path'] = 'projects/professional';

  /* Display: Entrepreneurial Teams */
  $handler = $view->new_display('page', 'Entrepreneurial Teams', 'page_6');
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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random seed */
  $handler->display->display_options['sorts']['random_seed']['id'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['table'] = 'views';
  $handler->display->display_options['sorts']['random_seed']['field'] = 'random_seed';
  $handler->display->display_options['sorts']['random_seed']['reset_seed_int'] = 'custom';
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
  /* Filter criterion: Content: Host (field_download_url:url) */
  $handler->display->display_options['filters']['field_download_url_url']['id'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['filters']['field_download_url_url']['field'] = 'field_download_url_url';
  $handler->display->display_options['filters']['field_download_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Video URL (field_video_url:url) */
  $handler->display->display_options['filters']['field_video_url_url']['id'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['filters']['field_video_url_url']['field'] = 'field_video_url_url';
  $handler->display->display_options['filters']['field_video_url_url']['operator'] = 'not empty';
  /* Filter criterion: Content: Team Contact Details (field_team_contact_details) */
  $handler->display->display_options['filters']['field_team_contact_details_value']['id'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['table'] = 'field_data_field_team_contact_details';
  $handler->display->display_options['filters']['field_team_contact_details_value']['field'] = 'field_team_contact_details_value';
  $handler->display->display_options['filters']['field_team_contact_details_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_team_contact_details_value']['value'] = '.gov';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_team_prize_entrepreneurshi_value']['id'] = 'field_team_prize_entrepreneurshi_value';
  $handler->display->display_options['filters']['field_team_prize_entrepreneurshi_value']['table'] = 'field_data_field_team_prize_entrepreneurshi';
  $handler->display->display_options['filters']['field_team_prize_entrepreneurshi_value']['field'] = 'field_team_prize_entrepreneurshi_value';
  $handler->display->display_options['filters']['field_team_prize_entrepreneurshi_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_team_prize_entrepreneurshi_value']['value'] = array();
  $handler->display->display_options['path'] = 'projects/entrepreneur';

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
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Video URL */
  $handler->display->display_options['fields']['field_video_url']['id'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['table'] = 'field_data_field_video_url';
  $handler->display->display_options['fields']['field_video_url']['field'] = 'field_video_url';
  $handler->display->display_options['fields']['field_video_url']['click_sort_column'] = 'url';
  /* Field: Content: Local Event Location */
  $handler->display->display_options['fields']['field_project_jurisdiction']['id'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['table'] = 'field_data_field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['field'] = 'field_project_jurisdiction';
  $handler->display->display_options['fields']['field_project_jurisdiction']['label'] = 'Local Event State';
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
  $translatables['projects'] = array(
    t('Master'),
    t('GovHack 2015 Projects'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Project Title'),
    t('Local Event State'),
    t('Broken handler field_data_field_act_prizes.field_act_prizes'),
    t('Broken handler field_data_field_adelaide_prizes.field_adelaide_prizes'),
    t('Broken handler field_data_field_geelong_ballarat_prizes.field_geelong_ballarat_prizes'),
    t('Broken handler field_data_field_gold_coast_prizes.field_gold_coast_prizes'),
    t('Broken handler field_data_field_melbourne_prizes.field_melbourne_prizes'),
    t('Broken handler field_data_field_mount_gambier_prizes.field_mount_gambier_prizes'),
    t('Prizes'),
    t('Broken handler field_data_field_nsw_sydney_prizes.field_nsw_sydney_prizes'),
    t('Broken handler field_data_field_tasmania_prizes.field_tasmania_prizes'),
    t('Broken handler field_data_field_wa_perth_prizes.field_wa_perth_prizes'),
    t('Filter by Local Event/Region'),
    t('Home Page'),
    t('Team Name'),
    t('Url'),
    t('Video URL'),
    t('Country'),
    t('Project List Page'),
    t('Image'),
    t('Local Event/Region'),
    t('PHP'),
    t('Data export'),
    t('Source URL'),
    t('Data export private'),
    t('author'),
    t('Author Name'),
    t('E-mail'),
    t('Team Members'),
    t('Team Contact Details'),
    t('Procurement Opportunities'),
    t('School/University Teams'),
    t('Public Servant Teams'),
    t('Professional Teams'),
    t('Entrepreneurial Teams'),
    t('My Projects'),
  );
  $export['projects'] = $view;

  return $export;
}
