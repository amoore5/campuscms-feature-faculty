<?php
/**
 * @file
 * campuscms_feature_faculty.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_faculty_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-toolbar-administrator:node/add/faculty
  $menu_links['menu-toolbar-administrator:node/add/faculty'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'node/add/faculty',
    'router_path' => 'node/add/faculty',
    'link_title' => 'Faculty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/add',
  );
  // Exported menu link: menu-toolbar-site-manager:node/add/faculty
  $menu_links['menu-toolbar-site-manager:node/add/faculty'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'node/add/faculty',
    'router_path' => 'node/add/faculty',
    'link_title' => 'Faculty',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '8',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:node/add/faculty
  $menu_links['navigation:node/add/faculty'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/faculty',
    'router_path' => 'node/add/faculty',
    'link_title' => 'Faculty',
    'options' => array(
      'attributes' => array(
        'title' => 'Use this content type to manage information about faculty, staff, advisors, etc.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Faculty');


  return $menu_links;
}
