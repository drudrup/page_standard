<?php
/**
 * @file
 * page_standard.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function page_standard_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Come On';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'bloc_comeon';
  $fe_block_boxes->body = 'Allez viens !';

  $export['bloc_comeon'] = $fe_block_boxes;

  return $export;
}
