/*
 
 Ian Wagner
 April 10, 2016
 Creative Coding
 University of Denver - EDP
 
 Project 3 - addons
 
 utilizes ofxFaceTracker to censor the viewers eyes
 
 */


#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(520,400,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
