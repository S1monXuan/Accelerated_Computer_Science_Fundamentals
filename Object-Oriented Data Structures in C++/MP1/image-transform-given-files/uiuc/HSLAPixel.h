/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
  class HSLAPixel{
    public:
      double h; // As Hue 0 - 360 double
      double s; // As Saturation 0 - 1.0 double
      double l; // As Luminance 0 - 1.0 double 
      double a; // As alpha channel 0 - 1.0 double

      HSLAPixel();
      HSLAPixel(double h_, double s_, double l_, double a_);
      HSLAPixel(const HSLAPixel& pixel);
      ~HSLAPixel();
  };
    
  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)


}
