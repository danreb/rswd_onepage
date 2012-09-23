rswd_onepage
============

Custom Drupal modules that I used for Onepage Demo Website in http://onepage.cavhost.com

What this module does?
======================

Allow users or website owners to disable/enable specific features or components of the website without giving them permission to all administration interface. I prefer not to give ordinary website users/owner full admin privileges because this will just confuse them, so this is a sample demonstration on how to do it.


Demonstration
=============

Go to onepage demo website - http://onepage.cavhost.com and login using username/password of admin/admin . After logging in, you can now disable/enable specific portion of the website by going to Configuration > System > Manage Website Features . From here you can see several checkboxes to control specific components the website have like the Slideshow, Slideshow Caption, Galleery, and footers Copyright Information.

Feel free to play and explore the demonstration website. This website is created from Abtik Base Theme and using onepage subtheme. You can check it out in the Appearance page of the demo website.
 

Pre Installation Checklist
==========================

Before you can use this module, you should define two content types
  1. gallery
  2. promotions

<strong>gallery</strong> - is used to show My Photo Gallery block in sidebar<br />
<strong>promotions</strong> - is used to show slideshow of images and or product promotions

Each content types should have image field and its define like this
gallery content type, you should have an image field with a machine name of<br /><br />
   
   <strong>field_photo</strong>
   
In promotions content type, you should have an image field with a machine name of<br /><br />
   
   <strong>field_image</strong>
   
Each content types consists of default title and body field.



Doing it fast (Import using Bundle Copy)
========================================

  Don't want the hassle of configuring each content types, install bundle_copy module and import the content types definition that is included in this module. You can find it inside the folder content_types in this this module sub directory.
  
  
Instruction for importing content types through bundle copy
===========================================================

  - Install and activate bundle_copy module
  - Navigate to Structure > Content types
  - In the Content types, click the import 
  - Copy the content in the files found inside content_types folder (e.g content_types.txt)
  - Paste it in textarea provided in import function by bundle copy
  - Click Import
  
  You should have a new content types, note that it is safe to uninstall the bundle copy module after importing the content types definition.
  

Modules use for enhancements
============================

Although not a dependencies, it is recommended to install this module for enhancement and if you have plan to use the content types exported definitions that comes along with this module.

Drupal Contrib Modules:
  Field group - http://drupal.org/project/field_group
  FileField Sources - http://drupal.org/project/filefield_sources
  Maxlength - http://drupal.org/project/maxlength
  
Required Modules for importing content types
  Bundle copy - http://drupal.org/project/bundle_copy
  
  
Image Styles
============

Create the following image styles, this is used in the modules.

1. gallery-thumb
    required effects:
    Scale and crop - width(100x100 pixels)

2. gallery-page
    required effects
    Scale - width (300 pixels)
    Crop - width (300x200 pixels)

3. promotions
    required effects
    Scale - width (930 pixels)
    Crop - width (930x320 pixels)
  
  
To create the "copyright" in the footer, just create a basic page with a title of copyright and put your copyright information there. Please note, you need to use the basic page content types for this.


Enjoy!
======

