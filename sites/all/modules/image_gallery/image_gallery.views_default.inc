<?php
/**
 * @file
 * image_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function image_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bears_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bears Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bears';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: my gallery image */
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['id'] = 'field_mygalleryimagefield_1';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['table'] = 'field_data_field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['field'] = 'field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['label'] = '';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_animal_tags']['id'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['table'] = 'field_data_field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['field'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['label'] = '';
  $handler->display->display_options['fields']['field_animal_tags']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'my_gallery_image' => 'my_gallery_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '5',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gallery';

  /* Display: Bears */
  $handler = $view->new_display('page', 'Bears', 'page');
  $handler->display->display_options['path'] = 'photo-gallery/bears';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bears';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['bears_photo_gallery'] = $view;

  $view = new view();
  $view->name = 'bunnies_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bunnies Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bunnies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: my gallery image */
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['id'] = 'field_mygalleryimagefield_1';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['table'] = 'field_data_field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['field'] = 'field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['label'] = '';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_animal_tags']['id'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['table'] = 'field_data_field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['field'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['label'] = '';
  $handler->display->display_options['fields']['field_animal_tags']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'my_gallery_image' => 'my_gallery_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '3',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gallery';

  /* Display: Bunnies */
  $handler = $view->new_display('page', 'Bunnies', 'page');
  $handler->display->display_options['path'] = 'photo-gallery/bunnies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bunnies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['bunnies_photo_gallery'] = $view;

  $view = new view();
  $view->name = 'cats_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Cats Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: my gallery image */
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['id'] = 'field_mygalleryimagefield_1';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['table'] = 'field_data_field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['field'] = 'field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['label'] = '';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_animal_tags']['id'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['table'] = 'field_data_field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['field'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['label'] = '';
  $handler->display->display_options['fields']['field_animal_tags']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'my_gallery_image' => 'my_gallery_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '4',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gallery';

  /* Display: Cats  */
  $handler = $view->new_display('page', 'Cats ', 'page');
  $handler->display->display_options['path'] = 'photo-gallery/cats';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Cats';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['cats_photo_gallery'] = $view;

  $view = new view();
  $view->name = 'dogs_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dogs Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dogs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: my gallery image */
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['id'] = 'field_mygalleryimagefield_1';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['table'] = 'field_data_field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['field'] = 'field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['label'] = '';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_animal_tags']['id'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['table'] = 'field_data_field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['field'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['label'] = '';
  $handler->display->display_options['fields']['field_animal_tags']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'my_gallery_image' => 'my_gallery_image',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '6',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gallery';

  /* Display: Dogs */
  $handler = $view->new_display('page', 'Dogs', 'page');
  $handler->display->display_options['path'] = 'photo-gallery/dogs';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Dogs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['dogs_photo_gallery'] = $view;

  $view = new view();
  $view->name = 'photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: my gallery image */
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['id'] = 'field_mygalleryimagefield_1';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['table'] = 'field_data_field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['field'] = 'field_mygalleryimagefield';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['label'] = '';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mygalleryimagefield_1']['settings'] = array(
    'image_style' => 'gallery_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_animal_tags']['id'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['table'] = 'field_data_field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['field'] = 'field_animal_tags';
  $handler->display->display_options['fields']['field_animal_tags']['label'] = '';
  $handler->display->display_options['fields']['field_animal_tags']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'my_gallery_image' => 'my_gallery_image',
  );

  /* Display: Photo Gallery */
  $handler = $view->new_display('page', 'Photo Gallery', 'page');
  $handler->display->display_options['path'] = 'photo-gallery';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Photo Gallery */
  $handler = $view->new_display('page', 'Photo Gallery', 'page_1');
  $handler->display->display_options['path'] = 'photo-gallery/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['photo_gallery'] = $view;

  return $export;
}
