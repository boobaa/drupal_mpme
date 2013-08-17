<?php
/**
 * @file
 * dh2012_defaultcontent.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function dh2012_defaultcontent_content_defaults() {
  $content = array();

  $content['article_1'] = (object) array(
    'title' => 'First article on site A',
    'status' => 1,
    'promote' => 1,
    'sticky' => 0,
    'type' => 'article',
    'language' => 'und',
    'created' => 1376245166,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'article_1',
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
          'machine_name' => 'page_2',
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
  );

  $content['page_1'] = (object) array(
    'title' => 'First page on site A',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1376245057,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'page_1',
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
  );

  $content['page_2'] = (object) array(
    'title' => 'Second page on site A',
    'status' => 1,
    'promote' => 0,
    'sticky' => 0,
    'type' => 'page',
    'language' => 'und',
    'created' => 1376245082,
    'comment' => 0,
    'translate' => 0,
    'machine_name' => 'page_2',
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
  );

return $content;
}
