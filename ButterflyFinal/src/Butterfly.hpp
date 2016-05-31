//
//  Butterfly.hpp
//  ButterflyFinal
//
//  Created by eden on 5/31/16.
//
//

#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "Flowers.hpp"


class Butterfly {
    
public:
    
    Butterfly();
    
    void setup();
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    
    int targetX;
    int targetY;
    
    float easing;
    
    bool atRest;
    bool flying;
    
    float left, right;
    
    long time;
    
    bool flowering;
    
    
    // flower class
    vector<Flower*> flowers;
    
    int X, Y, X2, Y2, X3, Y3, X4, Y4;
    
    int d;
    
};