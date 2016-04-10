/* 
 
 Ian Wagner 
 April 10, 2016
 Creative Coding
 University of Denver - EDP 
 
 Project 2 - interaction and animation 
 
 animates three triangles and a cube
 utilizing the mouse position to rotate in 3D space
 
 */

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(500,500,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}