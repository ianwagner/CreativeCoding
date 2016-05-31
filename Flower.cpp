//
//  Flower.cpp
//  butterfly 
//
//  Created by eden on 5/17/16.
//
//

#include "Flower.hpp"
#include "Butterfly.hpp"

Flower::Flower(){
    
    fPos.x = ofRandom(ofGetWidth());
    fPos.y = ofRandom(ofGetHeight());
    
    r = ofRandom(50, 200);
    g = ofRandom(50, 200);
    b = ofRandom(50, 200);
    
    size = ofRandom(20, 60);
    size2 = ofRandom(10, 25);
    shape = ofRandom(3,6);
    
    dice = ofRandom(500);
    
    time = ofGetElapsedTimeMillis();

}

void Flower::setup() {
    
}

void Flower::update() {
    

}
void Flower::draw() {
    
    // chose random flowers
    // alpha blend the flowers in
    
    if ( dice == 6) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x+10, fPos.y -20);
        ofVertex(fPos.x+30, fPos.y-30);
        ofVertex(fPos.x+20, fPos.y-10);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x+20, fPos.y+10);
        ofVertex(fPos.x+30, fPos.y+30);
        ofVertex(fPos.x+10, fPos.y+20);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-10, fPos.y+20);
        ofVertex(fPos.x-30, fPos.y+30);
        ofVertex(fPos.x-20, fPos.y+10);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-20, fPos.y-10);
        ofVertex(fPos.x-30, fPos.y-30);
        ofVertex(fPos.x-10, fPos.y-20);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
    }
    
    if ( dice == 5 ) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-16, fPos.y -25);
        ofVertex(fPos.x, fPos.y-50);
        ofVertex(fPos.x+16, fPos.y-25);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+33, fPos.y-16);
        ofVertex(fPos.x+50, fPos.y);
        ofVertex(fPos.x+33, fPos.y+16);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+16, fPos.y+25);
        ofVertex(fPos.x, fPos.y+50);
        ofVertex(fPos.x-16, fPos.y+25);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-33, fPos.y+16);
        ofVertex(fPos.x-50, fPos.y);
        ofVertex(fPos.x-33, fPos.y-16);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
    }
    if ( dice == 4 ) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-10, fPos.y -20);
        ofVertex(fPos.x, fPos.y-40);
        ofVertex(fPos.x+10, fPos.y-20);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+25, fPos.y-10);
        ofVertex(fPos.x+40, fPos.y);
        ofVertex(fPos.x+25, fPos.y+10);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+10, fPos.y+20);
        ofVertex(fPos.x, fPos.y+40);
        ofVertex(fPos.x-10, fPos.y+20);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-25, fPos.y+10);
        ofVertex(fPos.x-40, fPos.y);
        ofVertex(fPos.x-25, fPos.y-10);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
    }
    if ( dice == 3 ) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-5, fPos.y -15);
        ofVertex(fPos.x, fPos.y-30);
        ofVertex(fPos.x+5, fPos.y-15);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+20, fPos.y-5);
        ofVertex(fPos.x+30, fPos.y);
        ofVertex(fPos.x+20, fPos.y+5);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x+5, fPos.y+15);
        ofVertex(fPos.x, fPos.y+30);
        ofVertex(fPos.x-5, fPos.y+15);
        ofVertex(fPos.x, fPos.y);
        ofVertex(fPos.x-20, fPos.y+5);
        ofVertex(fPos.x-30, fPos.y);
        ofVertex(fPos.x-20, fPos.y-5);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
    }
    if ( dice == 2) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x+5, fPos.y -10);
        ofVertex(fPos.x+15, fPos.y-15);
        ofVertex(fPos.x+10, fPos.y-5);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x+10, fPos.y+5);
        ofVertex(fPos.x+15, fPos.y+15);
        ofVertex(fPos.x+5, fPos.y+10);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-5, fPos.y+10);
        ofVertex(fPos.x-15, fPos.y+15);
        ofVertex(fPos.x-10, fPos.y+5);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-10, fPos.y-5);
        ofVertex(fPos.x-15, fPos.y-15);
        ofVertex(fPos.x-5, fPos.y-10);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
        
    }
    if ( dice == 1) {
        long timeDiff = ofGetElapsedTimeMillis() - time;
        float alpha = ofNormalize(timeDiff, 0, 10000);
        ofSetColor(r, g, b, 255 * alpha);
        ofBeginShape();
        ofVertex(fPos.x, fPos.y);

        ofVertex(fPos.x+15, fPos.y -30);
        ofVertex(fPos.x+40, fPos.y-40);
        ofVertex(fPos.x+30, fPos.y-15);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x+30, fPos.y+15);
        ofVertex(fPos.x+40, fPos.y+40);
        ofVertex(fPos.x+15, fPos.y+30);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-15, fPos.y+30);
        ofVertex(fPos.x-40, fPos.y+40);
        ofVertex(fPos.x-30, fPos.y+15);
        ofVertex(fPos.x, fPos.y);
        
        ofVertex(fPos.x-30, fPos.y-15);
        ofVertex(fPos.x-40, fPos.y-40);
        ofVertex(fPos.x-15, fPos.y-30);
        ofVertex(fPos.x, fPos.y);
        ofEndShape();
            }
    
};