<?php
/**
 * Plugin array.
 */
$plugin = array(
    'single' => TRUE,
    'title' => t('Custom Pane- Image'),
    'description' => t('Display Custom Pane Image'),
    'category' => array(t('Custom My Pane'), -5),
    'edit form' => 'my_panel_image_pane_content_type_edit_form',
    'render callback' => 'my_panel_image_content_type_pane_render',
    'admin info' => 'my_panel_image_pane_admin_info',
    'defaults' => array(),
    'all contexts' => TRUE,
);

/**
 * 'Edit form callback for the content type.
 */
function my_panel_image_pane_content_type_edit_form($form, &$form_state) {
    $conf = $form_state['conf'];

    $form['image_title'] = [
      '#type' => 'textfield',
      '#title' => t('Title'),
      '#description' => t('Image Title'),
      '#default_value' => $conf['image_title'],
    ];

    $form['image_file'] = array(
        '#title' => t('Image'),
        '#type' => 'managed_file',
        '#description' => t('The uploaded image will be displayed on this pane.'),
        '#default_value' => $conf['image_file'],
        '#upload_location' => 'public://my_pane_images/',
    );

    return $form;
}


/**
 * Submit function, note anything in the form_state[conf] automatically gets saved
 */
function my_panel_image_pane_content_type_edit_form_submit(&$form, &$form_state) {
    // Set the values.
    $form_state['conf']['image_title'] = $form_state['values']['image_title'];

    // Upload image file.
    $file = file_load($form_state['values']['image_file']);
    $file->status = FILE_STATUS_PERMANENT;
    file_save($file);

    $form_state['conf']['image_file'] = $file->fid;;

}

/**
 * Run-time rendering of the body of the block (content type)
 *
 */
function my_panel_image_content_type_pane_render($subtype, $conf, $args, $contexts) {

    if (empty($contexts)) {
        return;
    }
    // Get full object.
    $image_title = ctools_context_keyword_substitute($conf['image_title'], array(), $contexts);
    $content = '<p>' . $image_title . '</p>';
    if(!empty($conf['image_file'])) {
        // Capture the image file path.
        $image_file = file_load($conf['image_file']);
        $image_path = '';

        if (isset($image_file->uri)) {
            $image_path = $image_file->uri;
        }

        $image = theme_image(array(
            'path' => ($image_path),
            'alt' => t('Pan Image.'),
            'title' => t('My pane image.'),
            'attributes' => array('class' => 'pane_image','width'=> '100','height'=> '100'),
        ));
        $content.= '<p>' . $image . '</p>';
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
function my_panel_image_pane_admin_info($subtype, $conf, $contexts) {
    if (!empty($conf)) {

        // Capture the image file path.
        $image_file = file_load($conf['image_file']);
        $image_path = '';

        if (isset($image_file->uri)) {
            $image_path = $image_file->uri;
        }

        $image = theme_image(array(
            'path' => ($image_path),
            'alt' => t('Pane Image.'),
            'title' => t('My pane image.'),
            'attributes' => array('class' => 'pane_image','width'=> '100','height'=> '100'),
        ));
        $content = '<p><b>Image Title:</b> ' . $conf['image_title'] . '</p>';
        $content.= '<p><b>View Image:</b> ' . $image . '</p>';

        $block = new stdClass;
        $block->title = $conf['override_title'] ? $conf['override_title_text'] : '';
        $block->content = $content;
        return $block;
    }
}