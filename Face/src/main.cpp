/*
 
 Ian Wagner
 April 10, 2016
 Creative Coding
 University of Denver - EDP
 
 Project 1 - draw a face
 
 draws a spooked face
 
 */

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(400,440,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
