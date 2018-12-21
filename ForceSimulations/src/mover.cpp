#include "mover.h"

mover::mover(float x, float y, float m)
{
	location = vec2(x,y);
	velocity = vec2(0, 0);
	acceleration = vec2(0, 0);
	mass = m;
	 
	
}

void mover::update() {

	velocity = velocity + acceleration;
	location = location + velocity;
	acceleration = acceleration * 0;
};
void mover::display() {
	ofSetColor(ofColor::white);
	ofFill();
	circleRad = ofMap(mass, 0, 5, 10, 50);
	ofDrawCircle(location.x, location.y, circleRad);

	ofSetColor(ofColor::black);
	ofNoFill();
	ofDrawCircle(location.x, location.y, circleRad);
	
}; 

void mover::checkEdges() {
	if (location.x > ofGetWidth()) {
		location.x = 0;
	}
	else if (location.x < 0) {
		location.x = ofGetWidth();
	}
		
	if (location.y < 0) {
		velocity.y *= -1;
		location.y = 0;
	}
};

void mover::applyForce(vec2 force) {
	vec2 a = force / mass;
	acceleration += a;
}


