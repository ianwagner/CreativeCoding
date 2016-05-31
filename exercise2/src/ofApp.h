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
    
    ofLight light;
    
    float rotx, roty;
    float x, xx, xxx,
          y, yy, yyy,
          z, zz, zzz;
    float x2, xx2, xxx2,
          y2, yy2, yyy2,
          z2, zz2, zzz2;
    float x3, xx3, xxx3,
          y3, yy3, yyy3,
          z3, zz3, zzz3;
    
    bool tri1, tri2, tri3, cube; 
		
};
