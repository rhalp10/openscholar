<?php

function os_boxes_boxes_plugins() {
  $info = array();
  $path = drupal_get_path('module', 'os_boxes').'/plugins/';

  $info['os_boxes_default'] = array(
    'handler' => array(
      'class' => 'os_boxes_default',
      'file' => 'os_boxes_default.inc',
      'path' => $path,
      'parent' => 'box',
    ),
  );

  $info['os_boxes_addthis'] = array(
    'title' => 'AddThis',
    'description' => 'Social networking links',
    'tags' => array('Social'),
    'handler' => array(
      'class' => 'os_boxes_addthis',
      'file' => 'os_boxes_addthis.inc',
      'path' => $path.'/os_boxes_addthis',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_manual_list'] = array(
    'title' => 'Featured Posts',
    'description' => 'Create your own list of posts',
    'tags' => array('Content'),
    'handler' => array(
      'class' => 'os_boxes_manual_list',
      'file' => 'os_boxes_manual_list.inc',
      'path' => $path.'/os_boxes_manual_list',
      'parent' => 'os_boxes_default',
    ),
  );

 /* $info['os_boxes_media'] = array(
    'title' => 'Embed Media',
    'description' => 'Embed a video, audio or other internet resource',
    'tags' => array('Media'),
    'handler' => array(
      'class' => 'os_boxes_media',
      'file' => 'os_boxes_media.inc',
      'path' => $path.'/os_boxes_media',
      'parent' => 'os_boxes_default',
    ),
  );*/

  $info['os_boxes_slideshow'] = array(
    'title' => 'Slideshow',
    'description' => 'Displays a slideshow of your uploaded pictures.',
    'module dependencies' => array('os_image_gallery'),
    'tags' => array('Media'),
    'handler' => array(
      'class' => 'os_boxes_slideshow',
      'file' => 'os_boxes_slideshow.inc',
      'path' => $path . '/os_boxes_slideshow',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_booktoc'] = array(
    'title' => 'Booklet: Table of Contents',
    'description' => 'The table of contents for a booklet',
    'tags' => array('Content'),
    'handler' => array(
      'class' => 'os_boxes_booktoc',
      'file' => 'os_boxes_booktoc.inc',
      'path' => $path.'/os_boxes_booktoc',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_twitterfeed'] = array(
    'title' => 'Twitter',
    'description' => 'Shows recent tweets',
    'tags' => array('Social'),
    'module dependencies' => array('twitter_pull'),
    'handler' => array(
      'class' => 'os_boxes_twitterfeed',
      'file' => 'os_boxes_twitterfeed.inc',
      'path' => $path.'/os_boxes_twitterfeed',
      'parent' => 'os_boxes_default',
    ),
  );

  // Publication Boxes
  $info['os_boxes_pub_ca'] = array(
    'title' => 'Publications: Coauthors',
    'description' => 'Displays a list of coauthors of your publications',
    'tags' => array('Content'),
    'module dependencies' => array('os_publications'),
    'handler' => array(
      'class' => 'os_boxes_pub_ca',
      'file' => 'os_boxes_pub_ca.inc',
      'path' => $path.'/os_boxes_pub_ca',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_pub_type'] = array(
    'title' => 'Publications: Types',
    'description' => 'Displays a list of publication types you have published to',
    'tags' => array('Content'),
    'module dependencies' => array('os_publications'),
    'handler' => array(
      'class' => 'os_boxes_pub_type',
      'file' => 'os_boxes_pub_type.inc',
      'path' => $path.'/os_boxes_pub_type',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_pub_year'] = array(
    'title' => 'Publications: Years',
    'description' => 'Displays a list of years you have published something in',
    'tags' => array('Content'),
    'module dependencies' => array('os_publications'),
    'handler' => array(
      'class' => 'os_boxes_pub_year',
      'file' => 'os_boxes_pub_year.inc',
      'path' => $path.'/os_boxes_pub_year',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_follow'] = array(
    'title' => 'Follow Me Widget',
    'description' => 'Displays a list of links to your social media profiles.',
    'tags' => array('Social'),
    'handler' => array(
      'class' => 'os_boxes_follow',
      'file' => 'os_boxes_follow.inc',
      'path' => $path.'/os_boxes_follow',
      'parent' => 'os_boxes_default',
    ),
  );

  $info['os_boxes_site_info'] = array(
    'title' => 'Site Info',
    'tags' => array('Misc'),
    'handler' => array(
      'class' => 'os_boxes_site_info',
      'file' => 'os_boxes_site_info.inc',
      'path' => $path.'/os_boxes_site_info',
      'parent' => 'os_boxes_default',
    ),
    'factory' => FALSE,
  );

  $info['os_boxes_site_logo'] = array(
    'title' => 'Site Logo',
    'tags' => array('Misc'),
    'handler' => array(
      'class' => 'os_boxes_site_logo',
      'file' => 'os_boxes_site_logo.inc',
      'path' => $path.'/os_boxes_site_logo',
      'parent' => 'os_boxes_default',
    ),
    'factory' => FALSE,
  );

  $info['os_taxonomy_fbt'] = array(
    'title' => 'Taxonomy widget',
    'description' => 'Filter content by category',
    'tags' => array('Content'),
    'handler' => array(
      'class' => 'os_taxonomy_fbt',
      'file' =>  'os_taxonomy_fbt.inc',
      'path' => $path . '/os_taxonomy_fbt',
      'parent' => 'os_boxes_default',
    ),
  );

  return $info;
}