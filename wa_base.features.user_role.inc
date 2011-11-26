<?php
/**
 * @file
 * wa_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wa_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: site editor
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => '3',
  );

  return $roles;
}
