<?php
/**
 * @file
 * dh2012_node_export.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function dh2012_node_export_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'First article on site A\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'b43cc47e-b8a4-4d79-80a1-6c7fcb8fdc58\',
      \'nid\' => \'3\',
      \'type\' => \'article\',
      \'language\' => \'und\',
      \'created\' => \'1376242590\',
      \'changed\' => \'1376242590\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f995885c-e8fa-4fc6-950e-cde3c1510224\',
      \'revision_timestamp\' => \'1376242590\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'First article on site A, body is about Drupal (entityref) and Wordpress (noderef)\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>First article on site A, body is about Drupal (entityref) and Wordpress (noderef)</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_related_nodes\' => array(
        \'und\' => array(
          array(
            \'nid\' => \'2\',
          ),
        ),
      ),
      \'field_related_pages\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'node\',
          \'id\' => \'2\',
          \'delta\' => 0,
          \'property\' => \'nid\',
          \'module\' => \'node_reference\',
          \'field_name\' => \'field_related_nodes\',
          \'langcode\' => \'und\',
          \'uuid\' => \'16e1b5e2-81b1-4663-bdb4-b8bfbad113e6\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_related_pages\',
          \'langcode\' => \'und\',
          \'uuid\' => \'ab17e068-a28e-4013-ba0e-7e685a119e0f\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Second page on site A\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a5d9cd60-f0c5-4c09-9a32-e042e79be3f1\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1376242552\',
      \'changed\' => \'1376242552\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16e1b5e2-81b1-4663-bdb4-b8bfbad113e6\',
      \'revision_timestamp\' => \'1376242552\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Second page on site A, body is about Wordpress\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>Second page on site A, body is about Wordpress</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_technology\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'2\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'2\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_technology\',
          \'langcode\' => \'und\',
          \'uuid\' => \'3f1d1248-dbf1-47c5-a89a-a708a85a1ecb\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'First page on site A\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9d923e62-be71-4b9f-a58e-b510a8236eea\',
      \'nid\' => \'1\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1376242531\',
      \'changed\' => \'1376242531\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ab17e068-a28e-4013-ba0e-7e685a119e0f\',
      \'revision_timestamp\' => \'1376242531\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'First page on site A, body is about Drupal\',
            \'summary\' => \'\',
            \'format\' => \'plain_text\',
            \'safe_value\' => "<p>First page on site A, body is about Drupal</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_technology\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_technology\',
          \'langcode\' => \'und\',
          \'uuid\' => \'f2889617-ddb2-4d40-9a52-3f200aa2b922\',
        ),
      ),
    ),
)',
);
  return $node_export;
}
