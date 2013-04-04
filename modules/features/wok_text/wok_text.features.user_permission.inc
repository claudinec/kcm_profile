<?php
/**
 * @file
 * wok_text.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function wok_text_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: use text format 3.
  $permissions['use text format 3'] = array(
    'name' => 'use text format 3',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
