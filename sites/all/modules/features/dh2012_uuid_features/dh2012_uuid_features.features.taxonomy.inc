<?php
/**
 * @file
 * dh2012_uuid_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dh2012_uuid_features_taxonomy_default_vocabularies() {
  return array(
    'technology' => array(
      'name' => 'Technology',
      'machine_name' => 'technology',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
