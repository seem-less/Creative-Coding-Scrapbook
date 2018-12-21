#pragma once
#include "ofMain.h"
using namespace glm;

class mover
{
public:
	
	mover();
	void update();
	void display();
	void checkEdges();

	vec2 location, velocity, acceleration, mouseLoc, dir;
	float t1, t2;

	



};

