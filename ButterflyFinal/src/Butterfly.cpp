//
//  Butterfly.cpp
//  ButterflyFinal
//
//  Created by eden on 5/31/16.
//
//

#include "Butterfly.hpp"

#include "Butterfly.hpp"

Butterfly::Butterfly(){
    
    time = ofGetElapsedTimeMillis();
    
    flying = false;
    atRest = true;
    pos.x = ofGetWidth()/2;
    pos.y = ofGetHeight()/2;
    
    vel.x;
    vel.y;
    
    targetX;
    targetY;
    
    easing = .04;
    
    left = -20;
    right = 20;
    
    flowering = false;
    
    
}

void Butterfly::setup() {
    
}

void Butterfly::update() {
    
    // set the parameter for flowers
    // gets bigger over time
    
    X = pos.x + ofRandom(-100, 100);
    Y = pos.y + ofRandom(-100, 100);
    
    X2 = pos.x + ofRandom(-200, 200);
    Y2 = pos.y + ofRandom(-200, 200);
    
    X3 = pos.x + ofRandom(-300, 300);
    Y3 = pos.y + ofRandom(-300, 300);
    
    X4 = pos.x + ofRandom(-400, 400);
    Y4 = pos.y + ofRandom(-400, 400);
    
    // when at rest pick a new positon for the target
    if (atRest == true){
        targetX = ofRandom(ofGetWidth());
        targetY = ofRandom(ofGetHeight());
        
        // make sure the target stays well within the space
        if ( targetX >ofRandom(ofGetWidth()-100 )){
            targetX = targetX - 200;
        }
        if ( targetX < 0 + 100 ){
            targetX = targetX + 200;
        }
        if ( targetY >ofRandom(ofGetHeight()-100 )){
            targetY = targetY - 200;
        }
        if ( targetY < 0 + 100 ){
            targetY = targetY + 200;
        }
        
        // if the butterfly has been at rest for 5 seconds star building flowers
        if (ofGetElapsedTimeMillis() > 5000) {
            flowering = true;
        }
        
        left = -25;
        right = 25;
        
        
    }
    
    if (flying == true){
        
        // reset counter when the butterfly flies
        ofResetElapsedTimeCounter();
        
        // stop "flowering"
        flowering = false;
        
        // go towards new target
        vel.x = targetX;
        vel.y = targetY;
        pos.x = pos.x + (vel.x - pos.x) * easing;
        pos.y = pos.y + (vel.y - pos.y) * easing;
        
        // simulate wings
        if( left == -25){
            left= left + 15;
        }
        else if (left == -10){
            left = left -15;
        }
        if( right == 25){
            right = right - 15;
        }
        else if( right == 10){
            right = right + 15;
        }
    }
    
    
    // never go off the screen
    if (pos.x > ofGetWidth() || pos.y > ofGetHeight()) {
        vel.x = -vel.x;
        vel.y = -vel.y;
    }
    
    if (pos.x < 0 || pos.y < 0) {
        vel.x = -vel.x;
        vel.y = -vel.y;
    }
    
}

void Butterfly::draw() {
    
    // flower iterator
    // remove flowers when butterfly flies
    for(vector<Flower*>::iterator i = flowers.begin(); i != flowers.end();) {
        Flower *f = (*i);
        f->update();
        if(flying == true) {
            flowers.erase(i);
            delete f;
        }
        else {
            f->draw();
            i++;
        }
    }
    
    if (flowering == true) {
        // give the flowers a larger space to grow over time
        Flower *flower = new Flower();
        if ( ofGetElapsedTimeMillis() < 20000){
            flower->fPos.x = X;
            flower->fPos.y = Y; }
        else if ( ofGetElapsedTimeMillis() < 50000){
            flower->fPos.x = X2;
            flower->fPos.y = Y2; }
        else if ( ofGetElapsedTimeMillis() < 90000){
            flower->fPos.x = X3;
            flower->fPos.y = Y3; }
        else if ( ofGetElapsedTimeMillis() < 150000){
            flower->fPos.x = X4;
            flower->fPos.y = Y4; }
        else if ( ofGetElapsedTimeMillis() < 220000){
            flower->fPos.x = ofRandom(ofGetWidth());
            flower->fPos.y = ofRandom(ofGetHeight()); }
        flowers.push_back(flower);
        
    }
    
    // butterfly
    ofSetColor(255);
    ofDrawTriangle(pos.x + left, pos.y - 20, pos.x, pos.y, pos.x + left, pos.y + 20);
    ofDrawTriangle(pos.x + right, pos.y - 20, pos.x, pos.y, pos.x + right, pos.y + 20);
    
    
    
    
};