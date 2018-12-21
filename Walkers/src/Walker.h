#pragma once
#include "ofMain.h"
using namespace glm;

class Walker
{
public:
	Walker(vec2 loc);

	void display();
	void step();
	void individual();

	vec2 loc;

	float tx = 0;
	float ty = 10000;
	ofPolyline line;
};


