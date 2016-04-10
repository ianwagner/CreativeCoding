#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
// maps position of the mouse to rotate evenly
    rotx = ofMap(ofGetMouseX(), 0, 500, -100, 100);
    roty = ofMap(ofGetMouseY(), 0, 500, 100, -100);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetBackgroundColor(0);
    
    ofSetColor(255);
    
// directions
    ofDrawBitmapString("press 1, 2 and 3 to generate triangles", 50, 50);
    ofDrawBitmapString("press c to activate cube", 50, 62);
    ofDrawBitmapString("rotate in 3D space by moving the mouse", 50, 74);

// enable light
    light.enable();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofRotateY(rotx);
    ofRotateX(roty);

// draw triangles
    if ( tri1 == true){ // red triangle
    ofSetColor(107, 17, 38);
    ofDrawTriangle(x, y, z, xx, yy, zz, xxx, yyy, zzz);
    }
    if ( tri2 == true){ // yellow triangle
        ofSetColor(227, 227, 0);
        ofDrawTriangle(x2, y2, z2, xx2, yy2, zz2, xxx2, yyy2, zzz2);
    }
    if ( tri3 == true){ // blue triangle
        ofSetColor(174, 199, 212);
        ofDrawTriangle(x3, y3, z3, xx3, yy3, zz3, xxx3, yyy3, zzz3);
    }
// draw cube
    if ( cube == true) {
        ofSetColor(255);
        ofDrawBox(0, 0, 0, 100, 100, 100);
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

// tri 1
    
    if (key == '1'){
        tri1 = true;
        cube = false;
        x = ofRandom(-100, 100);
        y = ofRandom(-100, 100);
        z = ofRandom(-100, 100);
        xx = ofRandom(-100, 100);
        yy = ofRandom(-100, 100);
        zz = ofRandom(-100, 100);
        xxx = ofRandom(-100, 100);
        yyy = ofRandom(-100, 100);
        zzz = ofRandom(-100, 100);
}

// tri 2
    
    if (key == '2'){
        tri2 = true;
        cube = false;
        x2 = ofRandom(-100, 100);
        y2 = ofRandom(-100, 100);
        z2 = ofRandom(-100, 100);
        xx2 = ofRandom(-100, 100);
        yy2 = ofRandom(-100, 100);
        zz2 = ofRandom(-100, 100);
        xxx2 = ofRandom(-100, 100);
        yyy2 = ofRandom(-100, 100);
        zzz2 = ofRandom(-100, 100);
    }

// tri 3
    
    if (key == '3'){
        tri3 = true;
        cube = false;
        x3 = ofRandom(-100, 100);
        y3 = ofRandom(-100, 100);
        z3 = ofRandom(-100, 100);
        xx3 = ofRandom(-100, 100);
        yy3 = ofRandom(-100, 100);
        zz3 = ofRandom(-100, 100);
        xxx3 = ofRandom(-100, 100);
        yyy3 = ofRandom(-100, 100);
        zzz3 = ofRandom(-100, 100);
    }

// tri 3
    
    if (key == 'c'){
        cube = true;
        tri1 = false;
        tri2 = false;
        tri3 = false;
    }


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
