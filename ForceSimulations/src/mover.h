#pragma once
#include "ofMain.h"
using namespace glm;

class mover
{
public:
	mover(float x, float y, float m);
	void update();
	void display();
	void checkEdges();
	void applyForce(vec2 force);

	vec2 location, velocity, acceleration, ceilingF;
	
	float mass;
	int circleRad;
	
};

