#include "mover.h"

mover::mover()
{
	location = vec2(ofGetWidth()/2,ofGetHeight()/2);
	velocity = vec2(0, 0);
	
}

void mover::update() {
	
	/*float accelMag = ofMap(ofGetMouseX(), 0, ofGetWidth(), -10, 2);
	acceleration = acceleration * accelMag;*/


	//float noise1 = ofMap(ofNoise(t1), 0, 1, -1, 1); //EX 1.6
	//float noise2 = ofMap(ofNoise(t2), 0, 1, -1, 1); //EX 1.6
	//acceleration = vec2(noise1,noise2);
	mouseLoc = vec2(ofGetMouseX(), ofGetMouseY());
	dir = mouseLoc - location;
	dir = glm::normalize(dir);
	dir = dir * ofRandom(0,5);


	//ofLogNotice() << acceleration.x << endl;
	acceleration = dir;


	
	velocity = velocity + acceleration;
	velocity = glm::clamp(velocity, (float) -10, (float)10);
	location = location + velocity;
	//t1 += 0.001; 
};
void mover::display() {
	ofSetColor(ofColor::white);
	ofFill();
	ofDrawCircle(location.x, location.y, 20, 20);
	ofSetColor(ofColor::black);
	ofNoFill();
	ofDrawCircle(location.x, location.y, 20, 20);
};
void mover::checkEdges() {
	if (location.x > ofGetWidth())
		location.x = 0;
	else if (location.x < 0)
		location.x = ofGetWidth();

	if (location.y > ofGetHeight())
		location.y = 0;
	else if (location.y < 0)
		location.y = ofGetHeight();
};


