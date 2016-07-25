<?php
/**
 * @file
 * page_standard.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function page_standard_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edition|node|page_standard|form';
  $field_group->group_name = 'group_edition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_standard';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pages';
  $field_group->data = array(
    'label' => ' / Édition',
    'weight' => '45',
    'children' => array(
      0 => 'field_contenu',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => ' / Édition',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-edition',
        'description' => '',
      ),
      'formatter' => 'no-start',
    ),
  );
  $field_groups['group_edition|node|page_standard|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metatags|node|page_standard|form';
  $field_group->group_name = 'group_metatags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_standard';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_pages';
  $field_group->data = array(
    'label' => ' / Metatags',
    'weight' => '46',
    'children' => array(
      0 => 'field_description',
      1 => 'title',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metatags',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_metatags|node|page_standard|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pages|node|page_standard|form';
  $field_group->group_name = 'group_pages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_standard';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pages',
    'weight' => '0',
    'children' => array(
      0 => 'group_edition',
      1 => 'group_metatags',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Pages',
      'instance_settings' => array(
        'classes' => 'group-pages field-group-multipage-group',
        'page_header' => '3',
        'page_counter' => '1',
        'move_button' => '0',
        'move_additional' => '1',
      ),
    ),
  );
  $field_groups['group_pages|node|page_standard|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t(' / Metatags');
  t(' / Édition');
  t('Pages');

  return $field_groups;
}
