//
//  Flowers.hpp
//  ButterflyFinal
//
//  Created by eden on 5/31/16.
//
//

#pragma once

#include <stdio.h>
#include "ofMain.h"

class Flower {
    
public:
    
    Flower();
    
    void setup();
    void update();
    void draw();
    
    ofPoint fPos;
    
    int r, g, b;
    
    float size, size2;
    
    int shape;
    
    int dice;
    
    long time;
    
};