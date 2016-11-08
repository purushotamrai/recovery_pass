<?php

function _recovery_pass_request_new_password() {
  print_r('testing');
  watchdog('info', 'testing jsihsd');
  return db_query("SELECT COUNT(uid) FROM {users}")->fetchField();
}
