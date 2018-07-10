<?php

/**
 * @file
 * Implementation of hook_panels_layouts.
 */
// Plugin definition here.

$plugin = array(
    'title' => t('My Panel 3 column 25/50/25 stacked'),
    'category' => t('My Panel Columns: 3'),
    'icon' => 'my_panel_3_col_25_50_25_stacked.png',
    'theme' => 'panels_my_panel_3_col_25_50_25_stacked',
    'css' => 'my_panel_3_col_25_50_25_stacked.css',
    'regions' => array(
        'top' => t('Top'),
        'left' => t('Left side'),
        'middle' => t('Middle column'),
        'right' => t('Right side'),
        'bottom' => t('Bottom'),
    ),
);
