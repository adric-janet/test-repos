<?php
/**
 * @file
 * articles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function newarticles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_articles:node/add/articles
  $menu_links['navigation_articles:node/add/articles'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/articles',
    'router_path' => 'node/add/articles',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      ),
      'identifier' => 'navigation_articles:node/add/articles',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');


  return $menu_links;
}
