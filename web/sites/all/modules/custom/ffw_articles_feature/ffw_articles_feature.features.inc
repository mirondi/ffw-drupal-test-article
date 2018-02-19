<?php
/**
 * @file
 * ffw_articles_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ffw_articles_feature_node_info() {
  $items = array(
    'ffw_cs_article' => array(
      'name' => t('FFW CS Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
