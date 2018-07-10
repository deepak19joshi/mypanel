<?php
/**
 * Plugin array.
 */
$plugin = array(
    'single' => TRUE,
    'title' => t('Custom Pane- Text'),
    'description' => t('Display Custom Pane Text'),
    'category' => array(t('Custom My Pane'), -5),
    'edit form' => 'my_panel_text_pane_content_type_edit_form',
    'render callback' => 'my_panel_text_content_type_pane_render',
    'admin info' => 'my_panel_text_pane_admin_info',
    'defaults' => array(),
    'all contexts' => TRUE,
);

/**
 * 'Edit form callback for the content type.
 */
function my_panel_text_pane_content_type_edit_form(&$form, &$form_state) {
    $conf = $form_state['conf'];

    $form['text_title'] = [
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#description' => t('panel Title'),
      '#default_value' => $conf['text_title'],
    ];

    $form['text_description'] = [
      '#type' => 'text_format',
      '#format'=> 'full_html',
      '#title' => t('Description'),
      '#description' => t('Show the description'),
      '#default_value' => $conf['text_description'],
    ];

    return $form;
}


/**
 * Submit function, note anything in the form_state[conf] automatically gets saved
 */
function my_panel_text_pane_content_type_edit_form_submit(&$form, &$form_state) {
    // Set the values.
    $form_state['conf']['text_title'] = $form_state['values']['text_title'];
    $form_state['conf']['text_description'] = $form_state['values']['text_description'];
}

/**
 * Run-time rendering of the body of the block (content type)
 *
 */
function my_panel_text_content_type_pane_render($subtype, $conf, $args, $contexts) {

    if (empty($contexts)) {
        return;
    }
    // Get full object.
    $content = ctools_context_keyword_substitute($conf['text_title'], array(), $contexts);

    // Check description field.
    if(!empty($conf['text_description'])) {
        $content.= '<p>' . $conf['text_description']['value'] . '</p>';
    }
    // Render as a block.
    $block = new stdClass();
    // Set content.
    $block->content = $content;

    return $block;
}

/**
 * 'admin info callback for custom panel pane.
 */
function my_panel_text_pane_admin_info($subtype, $conf, $contexts) {
    if (!empty($conf)) {
        $block = new stdClass;
        $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
        $text_title = ctools_context_keyword_substitute($conf['text_title'], array(), $contexts);
        $text_desc = $conf['text_description']['value'];

        $content = '<p><b>Title:</b> ' . $text_title . '</p>';
        $content.= '<p><b>Description:</b> ' . $text_desc . '</p>';

        $block->content = $content;
        return $block;
    }
}