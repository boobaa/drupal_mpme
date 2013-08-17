<?php
/**
 * @file
 * dh2012_uuid_features.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function dh2012_uuid_features_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'First article on site A',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2b75ed26-b0cf-455d-87b8-2e726dd93f04',
  'type' => 'article',
  'language' => 'und',
  'created' => 1376240136,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '412bd291-4a4d-4abd-8b81-8a8f544daac0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'First article on site A, body is about Drupal (entityref) and Wordpress (noderef)',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>First article on site A, body is about Drupal (entityref) and Wordpress (noderef)</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_related_nodes' => array(
    'und' => array(
      0 => array(
        'uuid' => '7711b420-c35d-4939-aee3-8a63eed35bb3',
      ),
    ),
  ),
  'field_related_pages' => array(
    'und' => array(
      0 => array(
        'target_id' => 1,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-11 18:55:36 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'First page on site A',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '15ac28be-0f42-42ff-beab-a3862d95c309',
  'type' => 'page',
  'language' => 'und',
  'created' => 1376240073,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '59b36487-fe44-4add-aa4a-063415251c15',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'First page on site A, body is about Drupal',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>First page on site A, body is about Drupal</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_technology' => array(
    'und' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-11 18:54:33 +0200',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Second page on site A',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '265497be-442f-4788-aa71-f4a85c575de2',
  'type' => 'page',
  'language' => 'und',
  'created' => 1376240093,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7711b420-c35d-4939-aee3-8a63eed35bb3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Second page on site A, body is about Wordpress',
        'summary' => '',
        'format' => 'plain_text',
        'safe_value' => '<p>Second page on site A, body is about Wordpress</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_technology' => array(
    'und' => array(
      0 => array(
        'tid' => 2,
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-08-11 18:54:53 +0200',
);
  return $nodes;
}
