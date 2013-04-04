<?php
/**
 * @file
 * kcm_pages.features.inc
 */

/**
 * Implements hook_node_info().
 */
function kcm_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Basic page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}