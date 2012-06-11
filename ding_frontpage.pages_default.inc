<?php
/**
 * @file
 * ding_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_frontpage_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Ding frontpage';
  $page->admin_description = 'Front page.';
  $page->path = 'ding_frontpage';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Artesis frontpage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'omega_12_mainpage_complex';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'middle' => NULL,
      'bottom_left_small' => NULL,
      'bottom_right_small' => NULL,
      'bottom_medium_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'bottom_left_small';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.single',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['bottom_left_small'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'bottom_medium_right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['bottom_medium_right'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'bottom_right_small';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #2 [nid:2]',
          'nid' => '2',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.single',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['bottom_right_small'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Event 1 [nid:10]',
          'nid' => '10',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Event 2 [nid:11]',
          'nid' => '11',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Event 3 [nid:12]',
          'nid' => '12',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Test event #4 [nid:14]',
          'nid' => '14',
          'type' => 'ding_event',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
        4 => array(
          'node' => 'Hanne Vibeke Holst [nid:15]',
          'nid' => '15',
          'type' => 'ding_event',
          'weight' => '5',
          'node_delete_4' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'columns' => 'full',
      'widget_type' => 'horizontal_accordeon',
      'item_template' => 'ding_nodelist.ding_event.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(
        0 => array(
          'text' => 'RSS',
          'links' => 'http://google.com',
        ),
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['middle'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #2 [nid:2]',
          'nid' => '2',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['middle'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'top_left';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(),
      'taxonomy_filters' => array(
        0 => array(
          'filter_field' => 'field_type',
          'filter_terms' => array(
            0 => 2,
          ),
          'filter_delete_0' => 'Delete',
        ),
      ),
      'override_title_text' => 'Kort nyt kort',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(
        0 => array(
          'text' => 'RSS',
          'links' => 'http://google.com',
        ),
        1 => array(
          'text' => 'Category aa',
          'links' => 'http://artesis.dev/editorial-base/aa',
        ),
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['top_left'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'top_left';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Event 1 [nid:10]',
          'nid' => '10',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Event 2 [nid:11]',
          'nid' => '11',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Event 3 [nid:12]',
          'nid' => '12',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Test event #4 [nid:14]',
          'nid' => '14',
          'type' => 'ding_event',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'columns' => 'full',
      'widget_type' => 'horizontal_accordeon',
      'item_template' => 'ding_nodelist.ding_event.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(
        0 => array(
          'text' => 'RSS',
          'links' => 'http://google.com',
        ),
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['top_left'][1] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'top_left';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => 'single item test',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['top_left'][2] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'top_left';
    $pane->type = 'ding_item_list';
    $pane->subtype = 'ding_item_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item_query' => 'dorthe',
      'item_count' => '3',
      'override_title' => 1,
      'override_title_text' => 'Popular materials',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['top_left'][3] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'top_right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => 'test liu 1',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Event 1 [nid:10]',
          'nid' => '10',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Event 2 [nid:11]',
          'nid' => '11',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Event 3 [nid:12]',
          'nid' => '12',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Test event #4 [nid:14]',
          'nid' => '14',
          'type' => 'ding_event',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'columns' => 'full',
      'widget_type' => 'horizontal_accordeon',
      'item_template' => 'ding_nodelist.ding_event.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(
        0 => array(
          'text' => 'RSS',
          'links' => 'http://google.com',
        ),
      ),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['top_right'][0] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'top_right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Log ind her [nid:4]',
          'nid' => '4',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Test news article #2 [nid:2]',
          'nid' => '2',
          'type' => 'ding_news',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'carousel',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['top_right'][1] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'top_right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Test news article #1 [nid:1]',
          'nid' => '1',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'override_title_text' => '',
      'columns' => 'full',
      'widget_type' => 'single',
      'item_template' => 'ding_nodelist.ding_news.image_text',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'more_links' => array(),
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['top_right'][2] = 'new-12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Ding frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ding_news';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'news',
      'display' => 'ctools_context_teaser_list',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'rules',
      'settings' => array(
        'granularity' => 'context',
        'language' => 1,
        'cache_key' => 'panel_context:page-ding_frontpage:page_ding_frontpage_panel_context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-13'] = $pane;
    $display->panels['left'][0] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'ding_event';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '6',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 1,
      'feed_icons' => 1,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => 'events',
      'display' => 'ctools_context_teaser_list',
      'override_title' => 0,
      'override_title_text' => 'Calendar',
    );
    $pane->cache = array(
      'method' => 'rules',
      'settings' => array(
        'granularity' => 'none',
        'language' => 1,
        'cache_key' => 'panel_context:page-ding_frontpage:page_ding_frontpage_panel_context',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-event-teaser-list',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = '';
    $display->content['new-14'] = $pane;
    $display->panels['left'][1] = 'new-14';
    $pane = new stdClass;
    $pane->pid = 'new-15';
    $pane->panel = 'right';
    $pane->type = 'campaign';
    $pane->subtype = 'campaign';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'ding_campaign_count' => 3,
      'ding_campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '300',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-15'] = $pane;
    $display->panels['right'][0] = 'new-15';
    $pane = new stdClass;
    $pane->pid = 'new-16';
    $pane->panel = 'top';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-16'] = $pane;
    $display->panels['top'][0] = 'new-16';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_frontpage'] = $page;

 return $pages;

}
