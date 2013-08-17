<?php
/**
 * @file
 * mpme_deploy_sender.deploy_endpoints.inc
 */

/**
 * Implements hook_deploy_endpoints_default().
 */
function mpme_deploy_sender_deploy_endpoints_default() {
  $export = array();

  $endpoint = new DeployEndpoint();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 1;
  $endpoint->name = 'my_deploy_sender';
  $endpoint->title = 'My Deploy Sender';
  $endpoint->description = '';
  $endpoint->debug = 1;
  $endpoint->authenticator_plugin = 'DeployAuthenticatorSession';
  $endpoint->authenticator_config = array(
    'username' => 'admin',
    'password' => 'q',
  );
  $endpoint->service_plugin = 'DeployServiceRestJSON';
  $endpoint->service_config = array(
    'url' => 'http://d7b.l/services/rest',
  );
  $export['my_deploy_sender'] = $endpoint;

  return $export;
}
