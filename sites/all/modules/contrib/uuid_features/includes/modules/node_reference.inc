<?php
/**
 * @file
 * uuid_node hooks on behalf of the node_reference module.
 */

/**
 * Implements hook_uuid_node_features_export_render().
 */
function node_reference_uuid_node_features_export_alter(&$export, &$pipe, $node) {
  $fields = uuid_features_find_module_fields(array('node_reference'), $node);
  foreach ($fields as $field_name => $field) {
    // Loop through all values of the field.
    foreach ($field as $lang => $instances) {
      foreach ($instances as $instance) {
        if (!empty($instance['nid'])) {
          $uuid = node_reference_uuid_find($instance['nid']);
          if ($uuid) {
            $pipe['uuid_node'][$uuid] = $uuid;
          }
        }
      }
    }
  }
}

/**
 * Implements hook_uuid_node_features_export_render_alter().
 */
function node_reference_uuid_node_features_export_render_alter(&$export, $node, $module) {
  $fields = uuid_features_find_module_fields(array('node_reference'), $node);
  foreach ($fields as $field_name => $field) {
    // Loop through all values of the field.
    foreach ($field as $lang => $instances) {
      // Loop through all values of the field.
      foreach ($instances as $delta => $instance) {
        if (!empty($instance['nid'])) {
          $uuid = node_reference_uuid_find($instance['nid']);
          if (!empty($uuid)) {
            $export->{$field_name}[$lang][$delta] = array('uuid' => $uuid);
          }
          else {
            unset($export->{$field_name}[$lang][$delta]);
          }
        }
      }
    }
  }
}

/**
 * Implements hook_uuid_node_features_rebuild_alter().
 * Replace noderef uuid's with a field array suitable for node_save().
 */
function node_reference_uuid_node_features_rebuild_alter(&$node, $module) {
  $fields = uuid_features_find_module_fields(array('node_reference'), $node);
  foreach ($fields as $field_name => $field) {
    // Loop through all values of the field.
    foreach ($field as $lang => $instances) {
      // Loop through all values of the field.
      foreach ($instances as $delta => $instance) {
        $nid = uuid_node_find($instance['uuid']);
        if (!empty($nid)) {
          $node->{$field_name}[$lang][$delta] = array('nid' => $nid);
        }
        else {
          // Unset this instance to avoid any damage it might do.
          // This means that the feature might require more than one rebuild
          // to be complete, but it is way to hard to take ordering of nodes and
          // circular dependencies into account.
          unset($node->{$field_name}[$lang][$delta]);
        }
      }
    }
  }
}

function node_reference_uuid_find($nid) {
  return db_select('node', 'n')
    ->fields('n', array('uuid'))
    ->condition('nid', $nid)
    ->execute()
    ->fetchField();
}