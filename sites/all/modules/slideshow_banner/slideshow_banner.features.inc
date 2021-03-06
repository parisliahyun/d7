<?php
/**
 * @file
 * slideshow_banner.features.inc
 */

/**
 * Implements hook_views_api().
 */
function slideshow_banner_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slideshow_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Banner'),
      'help' => '',
    ),
  );
  return $items;
}
