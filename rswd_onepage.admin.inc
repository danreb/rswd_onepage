<?php

/**
 * @file
 * Settings for the Red Starfish Settings.
 *
 * @author: Adolfo G. Nasol http://drupal.org/user/547004
 *
 */

function rswd_onepage_settings() {
  $form = array();
 
  $form['rswd_onepage_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Onepage Website Configuration'),
    '#collapsed' => FALSE,
    '#collapsible' => TRUE,
  );
  $form['rswd_onepage_settings']['rswd_onepage_slideshow'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Slideshow'),
    '#default_value' => variable_get('rswd_onepage_slideshow', 1),
    '#description' => t('Show website slideshow.'),
  );
  $form['rswd_onepage_settings']['rswd_onepage_slideshow_caption'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Slideshow Caption'),
    '#default_value' => variable_get('rswd_onepage_slideshow_caption', 1),
    '#description' => t('Show caption in slideshow.'),
  );
  $form['rswd_onepage_settings']['rswd_onepage_gallery'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Gallery'),
    '#default_value' => variable_get('rswd_onepage_gallery', 1),
    '#description' => t('Show website gallery.'),
  );
  $form['rswd_onepage_settings']['rswd_onepage_copyright'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Copyright Information'),
    '#default_value' => variable_get('rswd_onepage_copyright', 1),
    '#description' => t('Show Copyright Information.'),
  );
 
 return system_settings_form($form);
}

/**
 * Function to enable/disable onepage website features
*/
function rswd_onepage($settings, $feature) { 
  // Get and check the status
  $status = variable_get('views_defaults', array());
  if (variable_get($settings) === 0) {
    $status[$feature] = TRUE; // disable
  }
  else {
    $status[$feature] = FALSE; // enable
  }
  // Set the status
  variable_set('views_defaults', $status);  
}

/**
 * Call the function here on every features
 * This works after saving the settings.
*/
rswd_onepage('rswd_onepage_slideshow', 'promotions');
rswd_onepage('rswd_onepage_gallery', 'gallery');
rswd_onepage('rswd_onepage_copyright', 'copyright');
