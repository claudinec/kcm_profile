<?php
/**
 * @file
 * kcm_dev.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kcm_dev_user_default_permissions() {
  $permissions = array();

  // Exported permission: access environment indicator.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  return $permissions;
}
