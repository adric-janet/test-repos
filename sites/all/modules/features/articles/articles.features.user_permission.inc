<?php
/**
 * @file
 * articles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function articles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create articles content'.
  $permissions['create articles content'] = array(
    'name' => 'create articles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any articles content'.
  $permissions['delete any articles content'] = array(
    'name' => 'delete any articles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own articles content'.
  $permissions['delete own articles content'] = array(
    'name' => 'delete own articles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any articles content'.
  $permissions['edit any articles content'] = array(
    'name' => 'edit any articles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own articles content'.
  $permissions['edit own articles content'] = array(
    'name' => 'edit own articles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
