<?php
/**
 * @file
 * mpme_deploy_sender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mpme_deploy_sender_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_endpoints") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}
