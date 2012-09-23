rswd_onepage
============

Custom Drupal modules that I used for Onepage Demo Website in http://onepage.cavhost.com

Pre Installation Checklist
==========================

Before you can use this module, you should define two content types
  1. gallery
  2. promotions

gallery - is used to show My Photo Gallery block in sidebar
promotions - is used to show slideshow of images and or product promotions

Each content types should have image field and its define like this
gallery content type, you should have an image field with a machine name of
   
   field_photo
   
In promotions content type, you should have an image field with a machine name of
   
   field_image
   
Each content types consists of default title and body field.



Doing it fast
=============

  Don't want the hassle of configuring each content types, install bundle_copy module and import the content types definition that is included in this module. You can find it inside the folder content_types in this this module sub directory.
  
  
Insruction for importing content types through bundle copy
===========================================================

  - Install and activate bundle_copy module
  - Navigate to Structure > Content types
  - In the Content types, click the import 
  - Copy the content in the files found inside content_types folder (e.g promotions.txt)
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
   effects:
    Scale and crop - width(100x100 pixels)

2. gallery-page
    effects
    Scale - width (300 pixels)
    Crop - width (300x200 pixels)

3. promotions
    effects
    Scale - width (930 pixels)
    Crop - width (930x320 pixels)
  
  
To create the "copyright" in the footer, just create a basic page with a title of copyright and put your copyright information there. Please note, you need to use the basic page content types for this.

Enjoy!
======

