<?php
/**
 * @file
 * my_panel_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function my_panel_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->name = 'node:flex_page:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9066798c-f380-40f7-a0ff-892511ad99bd';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-295858f0-a05a-41c5-b6a8-325530269f9d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '295858f0-a05a-41c5-b6a8-325530269f9d';
  $display->content['new-295858f0-a05a-41c5-b6a8-325530269f9d'] = $pane;
  $display->panels['left'][0] = 'new-295858f0-a05a-41c5-b6a8-325530269f9d';
  $pane = new stdClass();
  $pane->pid = 'new-17b29759-b288-47ae-94df-6dc9a493f74d';
  $pane->panel = 'left';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '17b29759-b288-47ae-94df-6dc9a493f74d';
  $display->content['new-17b29759-b288-47ae-94df-6dc9a493f74d'] = $pane;
  $display->panels['left'][1] = 'new-17b29759-b288-47ae-94df-6dc9a493f74d';
  $pane = new stdClass();
  $pane->pid = 'new-db3d0696-1e97-4e1c-af5e-302a6c16c7c2';
  $pane->panel = 'middle';
  $pane->type = 'my_panel_text_pane';
  $pane->subtype = 'my_panel_text_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text_title' => 'Text1 Title',
    'text_description' => array(
      'value' => 'Description here1',
      'format' => 'full_html',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db3d0696-1e97-4e1c-af5e-302a6c16c7c2';
  $display->content['new-db3d0696-1e97-4e1c-af5e-302a6c16c7c2'] = $pane;
  $display->panels['middle'][0] = 'new-db3d0696-1e97-4e1c-af5e-302a6c16c7c2';
  $pane = new stdClass();
  $pane->pid = 'new-c506103b-ebd0-4faf-bffa-ea424ef2f43e';
  $pane->panel = 'right';
  $pane->type = 'my_panel_image_pane';
  $pane->subtype = 'my_panel_image_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'image_title' => 'Imag1 Title',
    'image_file' => '11',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c506103b-ebd0-4faf-bffa-ea424ef2f43e';
  $display->content['new-c506103b-ebd0-4faf-bffa-ea424ef2f43e'] = $pane;
  $display->panels['right'][0] = 'new-c506103b-ebd0-4faf-bffa-ea424ef2f43e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-295858f0-a05a-41c5-b6a8-325530269f9d';
  $panelizer->display = $display;
  $export['node:flex_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->name = 'node:flex_page:default:default';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ea09289b-7cdb-46d0-bbcf-331bad8a632a';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:default:default';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92a14fcf-702f-47b4-a2ab-a47a047ccbc2';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92a14fcf-702f-47b4-a2ab-a47a047ccbc2';
  $display->content['new-92a14fcf-702f-47b4-a2ab-a47a047ccbc2'] = $pane;
  $display->panels['left'][0] = 'new-92a14fcf-702f-47b4-a2ab-a47a047ccbc2';
  $pane = new stdClass();
  $pane->pid = 'new-35173c6b-8ad9-4a79-ac14-51d98121b12b';
  $pane->panel = 'left';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'default',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '35173c6b-8ad9-4a79-ac14-51d98121b12b';
  $display->content['new-35173c6b-8ad9-4a79-ac14-51d98121b12b'] = $pane;
  $display->panels['left'][1] = 'new-35173c6b-8ad9-4a79-ac14-51d98121b12b';
  $pane = new stdClass();
  $pane->pid = 'new-ca66edf5-da88-427d-b947-a13c01bc967d';
  $pane->panel = 'middle';
  $pane->type = 'my_panel_text_pane';
  $pane->subtype = 'my_panel_text_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text_title' => 'Test1 Title',
    'text_description' => array(
      'value' => '1 Description here',
      'format' => 'full_html',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca66edf5-da88-427d-b947-a13c01bc967d';
  $display->content['new-ca66edf5-da88-427d-b947-a13c01bc967d'] = $pane;
  $display->panels['middle'][0] = 'new-ca66edf5-da88-427d-b947-a13c01bc967d';
  $pane = new stdClass();
  $pane->pid = 'new-91a720c3-0c21-451c-8aa7-59ea7e5a7e4a';
  $pane->panel = 'right';
  $pane->type = 'my_panel_image_pane';
  $pane->subtype = 'my_panel_image_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'image_title' => 'Test Image1',
    'image_file' => '12',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '91a720c3-0c21-451c-8aa7-59ea7e5a7e4a';
  $display->content['new-91a720c3-0c21-451c-8aa7-59ea7e5a7e4a'] = $pane;
  $display->panels['right'][0] = 'new-91a720c3-0c21-451c-8aa7-59ea7e5a7e4a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-92a14fcf-702f-47b4-a2ab-a47a047ccbc2';
  $panelizer->display = $display;
  $export['node:flex_page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'flex_page';
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->name = 'node:flex_page:default:full';
  $panelizer->css_id = '';
  $panelizer->css_class = '';
  $panelizer->css = '';
  $panelizer->no_blocks = FALSE;
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $display = new panels_display();
  $display->layout = 'my_panel_3_col_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '047d9dde-1881-4c3b-9d4f-1458f2aff1fe';
  $display->storage_type = 'panelizer_default';
  $display->storage_id = 'node:flex_page:default:full';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1540ee5c-3fc9-4356-95cf-6213b19da6b0';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1540ee5c-3fc9-4356-95cf-6213b19da6b0';
  $display->content['new-1540ee5c-3fc9-4356-95cf-6213b19da6b0'] = $pane;
  $display->panels['left'][0] = 'new-1540ee5c-3fc9-4356-95cf-6213b19da6b0';
  $pane = new stdClass();
  $pane->pid = 'new-dec0e7e6-6c39-4220-8754-ad08b2206d7a';
  $pane->panel = 'left';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'full',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dec0e7e6-6c39-4220-8754-ad08b2206d7a';
  $display->content['new-dec0e7e6-6c39-4220-8754-ad08b2206d7a'] = $pane;
  $display->panels['left'][1] = 'new-dec0e7e6-6c39-4220-8754-ad08b2206d7a';
  $pane = new stdClass();
  $pane->pid = 'new-830b0c30-8f7b-43b3-8975-5c1c5c7aa6d6';
  $pane->panel = 'middle';
  $pane->type = 'my_panel_text_pane';
  $pane->subtype = 'my_panel_text_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'text_title' => 'Test1 Text here',
    'text_description' => array(
      'value' => 'Description here 1',
      'format' => 'full_html',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '830b0c30-8f7b-43b3-8975-5c1c5c7aa6d6';
  $display->content['new-830b0c30-8f7b-43b3-8975-5c1c5c7aa6d6'] = $pane;
  $display->panels['middle'][0] = 'new-830b0c30-8f7b-43b3-8975-5c1c5c7aa6d6';
  $pane = new stdClass();
  $pane->pid = 'new-cb7ca58f-16fb-482e-acfa-c0bc73abe074';
  $pane->panel = 'right';
  $pane->type = 'my_panel_image_pane';
  $pane->subtype = 'my_panel_image_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'image_title' => 'Test Image1',
    'image_file' => '13',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cb7ca58f-16fb-482e-acfa-c0bc73abe074';
  $display->content['new-cb7ca58f-16fb-482e-acfa-c0bc73abe074'] = $pane;
  $display->panels['right'][0] = 'new-cb7ca58f-16fb-482e-acfa-c0bc73abe074';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1540ee5c-3fc9-4356-95cf-6213b19da6b0';
  $panelizer->display = $display;
  $export['node:flex_page:default:full'] = $panelizer;

  return $export;
}
