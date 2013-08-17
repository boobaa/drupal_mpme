<?php
/**
 * @file
 * mpme_deploy_sender.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function mpme_deploy_sender_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'mydeploy_plan';
  $plan->title = 'My Deploy Plan';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 0;
  $plan->processor_plugin = 'DeployProcessorBatch';
  $plan->processor_config = array();
  $plan->endpoints = array(
    'my_deploy_sender' => 'my_deploy_sender',
  );
  $export['mydeploy_plan'] = $plan;

  return $export;
}
