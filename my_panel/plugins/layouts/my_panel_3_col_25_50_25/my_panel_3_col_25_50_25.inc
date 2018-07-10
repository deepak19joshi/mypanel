<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */
// Plugin definition here.
$plugin = array(
    'title' => t('My Panel 3 Column 25/50/25'),
    'category' => t('My Panel Columns: 3'),
    'icon' => 'my_panel_3_col_25_50_25.png',
    'theme' => 'panels_my_panel_3_col_25_50_25',
    'theme arguments' => array('id', 'content'),
    'css' => 'my_panel_3_col_25_50_25.css',
    'regions' => array(
        'left' => t('Left side'),
        'middle' => t('Middle column'),
        'right' => t('Right side'),
    ),
);
