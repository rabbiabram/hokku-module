<?php
$content['type']  = array (
  'name' => 'Hokku',
  'type' => 'hokku',
  'description' => 'Японские хокку',
  'title_label' => 'Title',
  'body_label' => 'hokku_body',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => true,
    'revision' => true,
    'sticky' => false,
  ),
  'old_type' => 'hokku',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '2',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'fivestar' => 1,
  'fivestar_stars' => '5',
  'fivestar_labels_enable' => 1,
  'fivestar_label_0' => 'Cancel rating',
  'fivestar_label_1' => 'Poor',
  'fivestar_label_2' => 'Okay',
  'fivestar_label_3' => 'Good',
  'fivestar_label_4' => 'Great',
  'fivestar_label_5' => 'Awesome',
  'fivestar_label_6' => 'Give it @star/@count',
  'fivestar_label_7' => 'Give it @star/@count',
  'fivestar_label_8' => 'Give it @star/@count',
  'fivestar_label_9' => 'Give it @star/@count',
  'fivestar_label_10' => 'Give it @star/@count',
  'fivestar_style' => 'average',
  'fivestar_text' => 'smart',
  'fivestar_title' => 1,
  'fivestar_feedback' => 1,
  'fivestar_unvote' => 0,
  'fivestar_position_teaser' => 'below',
  'fivestar_position' => 'below',
  'fivestar_comment' => '0',
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'email',
    'field_name' => 'field_hokku_email',
    'type' => 'email',
    'widget_type' => 'email_textfield',
    'change' => 'Change basic information',
    'weight' => '32',
    'size' => '60',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'email' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'op' => 'Save field settings',
    'module' => 'email',
    'widget_module' => 'email',
    'columns' => 
    array (
      'email' => 
      array (
        'type' => 'varchar',
        'length' => 255,
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '32',
      'parent' => '',
      'label' => 
      array (
        'format' => 'inline',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'body_field' => '0',
  'revision_information' => '20',
  'author' => '20',
  'options' => '25',
  'comment_settings' => '30',
  'menu' => '-2',
  'book' => '10',
);
//unstable
