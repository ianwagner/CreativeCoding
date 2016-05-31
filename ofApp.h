#pragma once

#include "ofMain.h"

#include "Butterfly.hpp"

#include "ofxOpenCv.h"
#include "ofxKinect.h"
#include "ofxOsc.h"

#define SETTINGS "settings.xml"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();
        void keyPressed(int key);
        void resetSettings();
        bool loadSettings(const string xmlFile=SETTINGS);
        bool saveSettings(const string xmlFile=SETTINGS);
    
        Butterfly butterfly;
    
        ofPoint pos;
        ofPoint trackTarget;
        ofPoint tPos;
    
        float TargetX, TargetY;
        float easing;
    
        bool guides;
        bool game;

    
// KINECT
    
    ofxKinect kinect;		// our RGB/depth camera of course
    ofxOscSender sender;	// for sending head position
    
    // search images
    ofxCvGrayscaleImage depthImage;	// grayscale depth image
    ofxCvGrayscaleImage depthDiff;	// thresholded person finder image
    
    // blob trackers
    ofxCvContourFinder 	personFinder;
    
    // positions
    ofRectangle person;		// found person centroid & size
    ofPoint highestPoint;	// highest point in the person contour
    ofPoint head;			// found head position
    ofPoint headAdj;		// adjuest head position after normalize & scale
    
    // settings
    int threshold;	// person finder depth clipping threshold (0-255)
    unsigned int nearClipping, farClipping; // kinect clipping planes in cm
    unsigned int personMinArea, personMaxArea; // min and max area for the person finder
    unsigned int highestPointThreshold;	// only consider highest points +- this & the person centroid
    float headInterpolation; // percentage to interpolate between person centroid & highest point (0-1)
    
    // normalize the head coordinates?
    bool bNormalizeX; // 0-kinect.width
    bool bNormalizeY; // 0-kinect.height
    bool bNormalizeZ; // nearClipping-farClipping
    
    // scale head coordinates?
    bool bScaleX, bScaleY, bScaleZ;
    float scaleXAmt, scaleYAmt, scaleZAmt; // how much to scale
    
    // live image to display
    enum DisplayImage {
        NONE = 0,
        THRESHOLD = 1,
        RGB = 2,
        DEPTH = 3
    } displayImage;
    
    // osc send destination
    string sendAddress;
    unsigned int sendPort;
    
    unsigned int kinectID; // which kinect to use

    
		
};
