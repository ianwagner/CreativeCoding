#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    eye1 = ofMap(mouseX, 0, 400, 150, 170);
    eyeY = ofMap(mouseY, 0, 400, 180, 200);
    eye2 = ofMap(mouseX, 0, 400, 230, 250);


}

//--------------------------------------------------------------
void ofApp::draw(){
 
    ofBackground(255);
    
    // head
    ofSetColor(255, 144, 33);
    ofEllipse(200, 220, 150, 180);
    
    // mouth
    ofSetColor(148, 30, 30);
    ofEllipse(200, 260, 40, 70);
    
    // tounge
    ofSetColor(222, 138, 166);
    ofEllipse(200, 275, 30, 20);
    
    // nose
    ofSetColor(179, 96, 14);
    ofTriangle(190, 210, 210, 210, 200, 217);
    
    // eyebrows
    ofSetColor(0);
    ofTriangle(170, 155, 175, 165, 130, 175);
    ofTriangle(230, 155, 225, 165, 270, 175);
    
    // bags under eyes
    ofSetColor(158, 102, 38);
    ofCircle(160, 195, 20);
    ofCircle(240, 195, 20);
    
    // dark
    ofSetColor(0, backColor);
    ofRect(0, 0, ofGetWidth(), ofGetHeight());
    
    ofSetColor(255);
    ofDrawBitmapString("press the mouse to turn on the light", 58, 50);
    
    // eyes
    ofSetColor(255);
    ofCircle(160, 190, 20);
    ofCircle(240, 190, 20);
    
    // pupils
    ofSetColor(0);
    ofCircle(eye1, eyeY, 5);
    ofCircle(eye2, eyeY, 5);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
    // when the mouse is pressed, make the "light" turn on by making the dark rectangle transparent
 backColor = 0;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    // when the mouse is released turn the "light" off.
    backColor = 255;
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
