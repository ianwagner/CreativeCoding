/* 
 
 Ian Wagner 
 Project one - Face 
 
 Watch as the pupils follow the mouse position! 
 Pressing the mouse turns on a light, exposing the entire face. 
 
 */
#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    float eye1;
    float eyeY;
    float eye2;
    int backColor = 255;
    
		
};
