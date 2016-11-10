<?php
/**
 * @file
 * luggage_data.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_data_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create data content'.
  $permissions['create data content'] = array(
    'name' => 'create data content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any data content'.
  $permissions['delete any data content'] = array(
    'name' => 'delete any data content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own data content'.
  $permissions['delete own data content'] = array(
    'name' => 'delete own data content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any data content'.
  $permissions['edit any data content'] = array(
    'name' => 'edit any data content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own data content'.
  $permissions['edit own data content'] = array(
    'name' => 'edit own data content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
