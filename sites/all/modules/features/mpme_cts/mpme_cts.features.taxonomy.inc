<?php
/**
 * @file
 * mpme_cts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mpme_cts_taxonomy_default_vocabularies() {
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
