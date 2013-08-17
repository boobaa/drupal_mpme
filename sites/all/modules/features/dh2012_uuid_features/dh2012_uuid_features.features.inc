<?php
/**
 * @file
 * dh2012_uuid_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dh2012_uuid_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
