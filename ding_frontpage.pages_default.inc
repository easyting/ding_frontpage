<?php
/**
 * @file
 * ding_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ding_frontpage_default_page_manager_pages() {
  $page = new stdClass();
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
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
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
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6_stacked';
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
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Lad dine reserveringer holde ferie [nid:56]',
          'nid' => '56',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Slet',
        ),
        1 => array(
          'node' => 'Nyt på semesterhylden [nid:59]',
          'nid' => '59',
          'type' => 'ding_news',
          'weight' => '2',
          'node_delete_1' => 'Slet',
        ),
        2 => array(
          'node' => 'Introduktion til UC Viden [nid:62]',
          'nid' => '62',
          'type' => 'ding_news',
          'weight' => '3',
          'node_delete_2' => 'Slet',
        ),
        3 => array(
          'node' => 'Videreuddannelse [nid:103]',
          'nid' => '103',
          'type' => 'ding_news',
          'weight' => '4',
          'node_delete_3' => 'Slet',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'taxonomy',
      'item_template' => 'ding_nodelist.ding_news.taxonomy',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Gi\' Googlerne baghjul [nid:91]',
          'nid' => '91',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Slet',
        ),
        1 => array(
          'node' => 'Workshop i informationssøgning / 2 [nid:90]',
          'nid' => '90',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Slet',
        ),
        2 => array(
          'node' => 'Workshop i informationssøgning / 1 [nid:89]',
          'nid' => '89',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Slet',
        ),
        3 => array(
          'node' => 'Kom godt fra start [nid:114]',
          'nid' => '114',
          'type' => 'ding_event',
          'weight' => '4',
          'node_delete_3' => 'Slet',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'vertical_accordion',
      'item_template' => 'ding_nodelist.ding_event.vaccordion',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->panels['right'][0] = 'new-2';
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'top';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Introduktion til RefWorks [nid:55]',
          'nid' => '55',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Slet',
        ),
        1 => array(
          'node' => 'Gi\' Googlerne baghjul [nid:91]',
          'nid' => '91',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Slet',
        ),
        2 => array(
          'node' => 'Demonstration af hjemmeside [nid:112]',
          'nid' => '112',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Slet',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'carousel',
      'item_template' => 'ding_nodelist.ding_event.carousel',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->content['new-3'] = $pane;
    $display->panels['top'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Halbib frontpage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'halbib_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'top_right_small' => NULL,
      'top_right_medium' => NULL,
      'middle_right' => NULL,
      'top_wide' => NULL,
      'left_large' => NULL,
      'right_small' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'left_large';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Lad dine reserveringer holde ferie [nid:56]',
          'nid' => '56',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Nyt på semesterhylden [nid:59]',
          'nid' => '59',
          'type' => 'ding_news',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Introduktion til UC Viden [nid:62]',
          'nid' => '62',
          'type' => 'ding_news',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Udlånsautomater [nid:92]',
          'nid' => '92',
          'type' => 'ding_news',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'taxonomy',
      'item_template' => 'ding_nodelist.ding_news.taxonomy',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['left_large'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'left_large';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Gi\' Googlerne baghjul [nid:91]',
          'nid' => '91',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Workshop i informationssøgning / 1 [nid:89]',
          'nid' => '89',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Workshop i informationssøgning / 2 [nid:90]',
          'nid' => '90',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'taxonomy',
      'item_template' => 'ding_nodelist.ding_event.taxonomy',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->panels['left_large'][1] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'left_large';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_page',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Udenlandske tidsskriftartikler [nid:67]',
          'nid' => '67',
          'type' => 'ding_page',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Sådan reserverer du [nid:78]',
          'nid' => '78',
          'type' => 'ding_page',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Sådan betaler du dine bøder og regninger [nid:85]',
          'nid' => '85',
          'type' => 'ding_page',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'taxonomy',
      'item_template' => 'ding_nodelist.ding_page.taxonomy',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->content['new-6'] = $pane;
    $display->panels['left_large'][2] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'right_small';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_event',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Introduktion til RefWorks [nid:55]',
          'nid' => '55',
          'type' => 'ding_event',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'Workshop i informationssøgning / 2 [nid:90]',
          'nid' => '90',
          'type' => 'ding_event',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Gi\' Googlerne baghjul [nid:91]',
          'nid' => '91',
          'type' => 'ding_event',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Demonstration af hjemmeside [nid:112]',
          'nid' => '112',
          'type' => 'ding_event',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'vertical_accordion',
      'item_template' => 'ding_nodelist.ding_event.vaccordion',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
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
    $display->content['new-7'] = $pane;
    $display->panels['right_small'][0] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'top_wide';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'content_type' => 'ding_news',
      'override_title_text' => '',
      'selected_nodes' => array(
        0 => array(
          'node' => 'Lad dine reserveringer holde ferie [nid:56]',
          'nid' => '56',
          'type' => 'ding_news',
          'weight' => '1',
          'node_delete_0' => 'Delete',
        ),
        1 => array(
          'node' => 'For 5. semester - vejledning i bacheloropgave [nid:64]',
          'nid' => '64',
          'type' => 'ding_news',
          'weight' => '2',
          'node_delete_1' => 'Delete',
        ),
        2 => array(
          'node' => 'Velkommen til Campus [nid:96]',
          'nid' => '96',
          'type' => 'ding_news',
          'weight' => '3',
          'node_delete_2' => 'Delete',
        ),
        3 => array(
          'node' => 'Introduktion til UC Viden [nid:62]',
          'nid' => '62',
          'type' => 'ding_news',
          'weight' => '4',
          'node_delete_3' => 'Delete',
        ),
      ),
      'taxonomy_filters' => array(),
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'limit' => '5',
      'columns' => 'full',
      'widget_type' => 'carousel',
      'item_template' => 'ding_nodelist.ding_news.carousel',
      'sort_field' => 'created',
      'sort_order' => 'desc',
      'sort_sticky' => 0,
      'more_links' => array(),
      'autoscroll_delay' => '10000',
      'unique_id' => 'pane-814',
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
    $display->content['new-8'] = $pane;
    $display->panels['top_wide'][0] = 'new-8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ding_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ding_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Ding frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_secondary' => NULL,
      'main_content' => NULL,
      'main_left_right' => NULL,
      'main_right_right' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
        'cache_key' => '503a9220d2c86',
        'new' => TRUE,
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $display->content['new-9'] = $pane;
    $display->panels['left'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
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
        'cache_key' => '503a9220b57c1',
        'new' => TRUE,
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
    $display->content['new-10'] = $pane;
    $display->panels['left'][1] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['right'][0] = 'new-11';
    $pane = new stdClass();
    $pane->pid = 'new-12';
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
    $display->content['new-12'] = $pane;
    $display->panels['top'][0] = 'new-12';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_frontpage'] = $page;

  return $pages;

}
