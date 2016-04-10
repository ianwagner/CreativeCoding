#include "ofApp.h"

using namespace ofxCv;
using namespace cv;

//--------------------------------------------------------------
void ofApp::setup(){
    
// setup the camera
    
    cam.initGrabber(520, 400);
    
// set up wire frame tracker
    
    tracker.setup();
    
}


//--------------------------------------------------------------
void ofApp::update(){
    
// update the camera and set the wire frame to it
    
    cam.update();
    if(cam.isFrameNew()) {
        tracker.update(toCv(cam));
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
// ofSetBackgroundColor(0);
    
// draw camera
    cam.draw(0, 0);
    
    ofSetColor(255);
    
// adds the wire frame
    
    // ofSetLineWidth(2);
   // tracker.getImageMesh().drawWireframe();
   // tracker.draw(true);
    
// draws two white ellipses over the viewers eyes
    
    ofDrawEllipse(tracker.getImagePoint(36).x, tracker.getImagePoint(39).y, 40, 20);
    ofDrawEllipse(tracker.getImagePoint(45).x, tracker.getImagePoint(42).y, 40, 20);

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
