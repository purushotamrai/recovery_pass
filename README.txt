CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Module Details
 * Recommended modules
 * Configuration
 * Troubleshooting
 * FAQ
 * Maintainers


INTRODUCTION
------------
Recovery Password Module alters default Drupal password reset process and makes it possible to send the new password in recovery mail itself. In this case, when user clicks on forgot password providing valid username or email address, new password is generated randomly and is sent to the user email address.


MODULE DETAILS
--------------
Drupal by default sends Password Reset URL by mail to user's email id in password recovery mail, but Recovery Password modules makes it possible for Drupal to send any random password by email instead of URL to the user.

Recovery Password Module alters default Drupal password reset process and makes it possible to send the new password in recovery mail itself. In this case, when user clicks on forgot password providing valid username or email address, new password is generated randomly and is sent to the user email address.

The password recovery mail body and subject to be sent to user is configurable and corresponding configuration settings are available at admin/config/people/recovery-pass.For displaying new password please use [user_new_password] placeholder in the mail body.

Important: As of now Recovery Password Module overrides default Drupal behaviour for password recovery and hence the previous settings will not work once the module is enabled till it is disabled again. User tokens are available in this case also.

Warning !!! Once forgot password is clicked for a user, the password gets changed for that user immediately.

Added Functionality: After Password Reset, next time the user enters with old password, a warning message saying that the password has been reset is shown to the user. While in case user enters any password other than the old one, that warning message will no more appear for that user.


RECOMMENDED MODULES
-------------------
* STMP (https://www.drupal.org/project/smtp)
  When enabled smtp module allows Drupal to bypass the PHP mail() function and send email directly to an SMTP server.

* HTMLMAIL (https://www.drupal.org/project/htmlmail)
  When enabled Recovery Password module, it supports HTML Mail. You can use html in recovery mail's body to be sent to the user at module configuration settings.

* TOKEN (https://www.drupal.org/project/token)
  When enabled user tokens would be available in configuration settings for email body.


CONFIGURATION
-------------
The password recovery mail body and subject to be sent to user is configurable and corresponding configuration settings are available at admin/config/people/recovery-pass.For displaying new password please use [user_new_password] placeholder in the mail body.
If HTMLMAIL module exists then write mail in HTML format else email body will be sent as plain text considering new line.


TROUBLESHOOTING
---------------
As of now, Recovery Module alters user_pass form and hence the it works at only Request new password form at url: /user/password .


FAQ
---

Q: Will existing default Drupal [user:one-time-login-url] as provided by Password Recovery Settings at admin/config/people/accounts work at configuration settings?

A: No, Recovery Password Module overrides Drupal default behaviour.



Q: If htmlmail module exists can we send simple plain text mail at configuration settings?

A: Yes, but in that case <br /> tag would be needed for new line.



Q: Once Reset, will user be able to login using old password?

A: No



Q: How to include new password in mail at configuration settings?

A: Use [user_new_password] placeholder.



Q: If htmlmail module is not installed, then will new line be considered at configuration settings?

A: Yes, new line will automatically be considered if htmlmail module is not installed.



MAINTAINERS
-----------
Current maintainers:

 * Purushotam Rai (https://drupal.org/user/3193859)


This project has been sponsored by:
 * QED42
  QED42 is a web development agency focussed on helping organisations and individuals reach their potential, most of our work is in the space of publishing, e-commerce, social and enterprise.
