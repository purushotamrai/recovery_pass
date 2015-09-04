<?php
/**
 * @file
 * Contains configuration form for Recovery Password.
 */

/**
 * Callback to admin/config/people/recovery-pass.
 */
function recovery_pass_config_form($form, &$form_state) {
  $form = array();
  $form['recovery_pass_help_text'] = array(
    '#markup' => t('Edit the e-mail messages sent to users who request a new password. The list of available tokens that can be used in e-mails is provided below. For displaying new password please use <strong>[user_new_password]</strong> placeholder.'),
  );

  $form['recovery_pass_email_subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#required' => TRUE,
    '#default_value' => _recovery_pass_mail_text('email_subject'),
  );

  $form['recovery_pass_email_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Email Body'),
    '#required' => TRUE,
    '#default_value' => _recovery_pass_mail_text('email_text'),
  );

  if (module_exists("htmlmail")) {
    // Adding description incase HTMLMAIL module exists.
    $form['recovery_pass_email_text']['#description'] = t('Supports HTML Mail. Remember to add < br /> tag for new line.') ;
  }

  if (module_exists("token")) {
    $form['token_help'] = array(
      '#type' => 'markup',
      '#token_types' => array('user'),
      '#theme' => 'token_tree_link',
    );
  }

  return system_settings_form($form);
}
