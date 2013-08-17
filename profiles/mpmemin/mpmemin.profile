<?php
/**
 * @file
 * Enables modules and site configuration for a MPMEmin site installation.
 */

/**
 * @TODO: This might be impolite/too aggressive. We should at least check that
 * other install profiles are not present to ensure we don't collide with a
 * similar form alter in their profile.
 *
 * Set this as default install profile.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  foreach ($form['profile'] as $key => $element) {
    $form['profile'][$key]['#value'] = 'mpmemin';
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function mpmemin_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'boobaa@csecsy.hu';
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'boobaa@csecsy.hu';
  $form['server_settings']['site_default_country']['#default_value'] = 'HU';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Budapest';
  $form['server_settings']['date_default_timezone']['#attributes'] = array('class' => array('timezone-nodetect'));
}
