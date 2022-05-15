/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {

    HSLAPixel::HSLAPixel():HSLAPixel(0, 0, 0, 0){

    }

    HSLAPixel::HSLAPixel(const HSLAPixel & pixel){
        h = pixel.h;
        s = pixel.s;
        l = pixel.l;
        a = pixel.a;
    }

    HSLAPixel::HSLAPixel(double h_, double s_, double l_, double a_){
        //for hue 
        if(h_ < 0){
            h = 0;
        } else if( h_ < 360 ){
            h = h_;
        } else {
            h = 360;
        }

        //for saturation
        if(s_ < 0){
            s = 0;
        } else if(s_ < 1.0){
            s = s_;
        } else {
            s = 1.0;
        }

        //for luminance
        if(l_ < 0){
            l = 0;
        } else if(l_ < 1.0){
            l = l_;
        } else {
            l = 1.0;
        }

        //for alpha channel
        if(a_ < 0){
            a = 0;
        } else if(a_ < 1.0){
            a = a_;
        } else {
            a = 1.0;
        }
    }

    HSLAPixel::~HSLAPixel(){
        
    }
}
