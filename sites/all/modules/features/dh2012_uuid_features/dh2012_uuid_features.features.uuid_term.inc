<?php
/**
 * @file
 * dh2012_uuid_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function dh2012_uuid_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Wordpress',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '1cdfe32b-5070-4adf-a4cd-cc1428cd8055',
    'vocabulary_machine_name' => 'technology',
  );
  $terms[] = array(
    'name' => 'Drupal',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '2ef30451-ccd4-4d95-a092-08a3c0f3021e',
    'vocabulary_machine_name' => 'technology',
  );
  return $terms;
}
