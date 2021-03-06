#pragma once

#include "ofMain.h"
#include "../mover.h"

//the mover cpp doesn't need to be called, only the mover.h

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

		float repulsionForce(float location);

		vector<mover> moves;
		int numBalloons = 10;

		vec2 gravity, upwardF, wind, pushf;
		float t1,t2;
		float windVal;
		
};