<?php
/**
 * @file
 * campuscms_feature_faculty.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function campuscms_feature_faculty_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_faculty_lab|node|faculty|form';
  $field_group->group_name = 'group_faculty_faculty_lab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_faculty_faculty';
  $field_group->data = array(
    'label' => 'Lab',
    'weight' => '26',
    'children' => array(
      0 => 'field_faculty_faculty_lab_loc',
      1 => 'field_faculty_faculty_lab_phn',
      2 => 'field_faculty_faculty_lab_site',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lab',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_faculty_faculty_lab|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_faculty|node|faculty|form';
  $field_group->group_name = 'group_faculty_faculty';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faculty',
    'weight' => '10',
    'children' => array(
      0 => 'field_faculty_faculty_awards',
      1 => 'field_faculty_faculty_education',
      2 => 'field_faculty_faculty_res_int',
      3 => 'group_faculty_faculty_lab',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Faculty',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_faculty_faculty|node|faculty|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_lab|node|faculty|default';
  $field_group->group_name = 'group_faculty_lab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lab',
    'weight' => '5',
    'children' => array(
      0 => 'field_faculty_faculty_lab_site',
      1 => 'field_faculty_faculty_lab_loc',
      2 => 'field_faculty_faculty_lab_phn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lab',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_faculty_lab|node|faculty|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faculty_staff|node|faculty|form';
  $field_group->group_name = 'group_faculty_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'faculty';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '11',
    'children' => array(
      0 => 'field_faculty_staff_department',
      1 => 'field_faculty_staff_function',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_faculty_staff|node|faculty|form'] = $field_group;

  return $export;
}
