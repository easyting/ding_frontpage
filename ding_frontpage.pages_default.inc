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
  $page->name = 'bronden_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Bronden frontpage';
  $page->admin_description = '';
  $page->path = 'bronden_frontpage';
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
  $handler->name = 'page_bronden_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'bronden_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
      'center' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Bronden frontpage';
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
      'list_type' => 'custom-dynamic',
      'dynamic_switch' => 1,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => 1,
      'content_type' => 'ding_event',
      'limit' => '10',
      'more_links' => array(),
      'override_title_text' => NULL,
      'selected_nodes' => array(),
      'sort_field' => 'event_date',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(
        0 => array(
          'filter_field' => 'field_category',
          'filter_terms' => array(
            0 => 53,
          ),
          'filter_delete_0' => 'Delete',
        ),
      ),
      'unique_id' => 'pane-13765683297856',
      'widget_type' => 'horizontal_accordion',
      'item_template' => 'ding_nodelist.ding_event.image_text',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
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
      'list_type' => 'custom-dynamic',
      'dynamic_switch' => 1,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'content_type' => 'ding_news',
      'limit' => '5',
      'more_links' => array(),
      'override_title_text' => '',
      'selected_nodes' => array(),
      'sort_field' => 'created',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(
        0 => array(
          'filter_field' => 'field_editorial_base_n',
          'filter_terms' => array(
            0 => 17,
          ),
          'filter_delete_0' => 'Delete',
        ),
      ),
      'unique_id' => 'pane-13765685478958',
      'widget_type' => 'carousel',
      'item_template' => 'ding_nodelist.ding_news.carousel',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['bronden_frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ding_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Ding frontpage';
  $page->admin_description = 'Front page.';
  $page->path = 'ding_frontpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
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
  $display = new panels_display();
  $display->layout = 'omega_12_twocol_6_6_bricks';
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
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'left_above';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => NULL,
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'content_type' => 'ding_news',
      'limit' => '5',
      'more_links' => array(
        0 => array(
          'text' => 'Se flere',
          'links' => '<front>',
        ),
        1 => array(
          'text' => 'Om Kilden',
          'links' => '<front>',
        ),
      ),
      'override_title_text' => 'Kilden',
      'selected_nodes' => array(),
      'sort_field' => 'created',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-13765681972832',
      'widget_type' => 'slider',
      'item_template' => 'ding_nodelist.ding_news.slider',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['left_above'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'right_above';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => NULL,
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'content_type' => 'ding_news',
      'limit' => '5',
      'more_links' => array(
        0 => array(
          'text' => 'Strandcafeen',
          'links' => '<front>',
        ),
        1 => array(
          'text' => 'AOF',
          'links' => '<front>',
        ),
        2 => array(
          'text' => 'Om Brønden',
          'links' => '<front>',
        ),
      ),
      'override_title_text' => 'Brønden',
      'selected_nodes' => array(),
      'sort_field' => 'created',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-13765682524951',
      'widget_type' => 'slider',
      'item_template' => 'ding_nodelist.ding_news.slider',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['right_above'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'top';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'all',
      'dynamic_switch' => 0,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => 0,
      'content_type' => 'ding_event',
      'limit' => '10',
      'more_links' => array(),
      'override_title_text' => NULL,
      'selected_nodes' => array(),
      'sort_field' => 'event_date',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(),
      'unique_id' => 'pane-13765680136410',
      'widget_type' => 'horizontal_accordion',
      'item_template' => 'ding_nodelist.ding_event.image_text',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['top'][0] = 'new-5';
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
  $handler->weight = 0;
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
  $display->layout = 'ding_layout_1';
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
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['left'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
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
    $display->content['new-7'] = $pane;
    $display->panels['left'][1] = 'new-7';
    $pane = new stdClass();
    $pane->pid = 'new-8';
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
    $display->content['new-8'] = $pane;
    $display->panels['right'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
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
    $display->content['new-9'] = $pane;
    $display->panels['top'][0] = 'new-9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ding_frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'kilden_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Kilden frontpage';
  $page->admin_description = '';
  $page->path = 'kilden_frontpage';
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
  $handler->name = 'page_kilden_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'kilden_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout = 'omega_12_twocol_6_6_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Kilden frontpage';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'left_above';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'custom-dynamic',
      'dynamic_switch' => 1,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => 1,
      'content_type' => 'ding_event',
      'limit' => '10',
      'more_links' => array(),
      'override_title_text' => NULL,
      'selected_nodes' => array(),
      'sort_field' => 'event_date',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(
        0 => array(
          'filter_field' => 'field_category',
          'filter_terms' => array(
            0 => 54,
          ),
          'filter_delete_0' => 'Delete',
        ),
      ),
      'unique_id' => 'pane-13765684992595',
      'widget_type' => 'horizontal_accordion',
      'item_template' => 'ding_nodelist.ding_event.image_text',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['left_above'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'right_above';
    $pane->type = 'ding_nodelist';
    $pane->subtype = 'ding_nodelist';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'list_type' => 'custom-dynamic',
      'dynamic_switch' => 1,
      'nodes_switch' => 0,
      'autoscroll_delay' => '3000',
      'columns' => 'full',
      'content_filter_promoted' => 0,
      'content_filter_date' => '',
      'content_type' => 'ding_news',
      'limit' => '5',
      'more_links' => array(),
      'override_title_text' => '',
      'selected_nodes' => array(),
      'sort_field' => 'created',
      'sort_order' => 'asc',
      'taxonomy_filters' => array(
        0 => array(
          'filter_field' => 'field_editorial_base_n',
          'filter_terms' => array(
            0 => 16,
          ),
          'filter_delete_0' => 'Delete',
        ),
      ),
      'unique_id' => 'pane-13765685229622',
      'widget_type' => 'carousel',
      'item_template' => 'ding_nodelist.ding_news.carousel',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
        'granularity' => 'context',
      ),
    );
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['right_above'][0] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['kilden_frontpage'] = $page;

  return $pages;

}
