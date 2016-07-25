<?php
/**
 * @file
 * page_standard.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function page_standard_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:page_standard.
  $config['node:page_standard'] = array(
    'instance' => 'node:page_standard',
    'config' => array(
      'title' => array(
        'value' => '[node:title]',
      ),
      'description' => array(
        'value' => '[node:field_description]',
      ),
      'shortlink' => array(
        'value' => '',
      ),
    ),
  );

  return $config;
}
