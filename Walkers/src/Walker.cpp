#include "Walker.h"

//the constructor (the starting location)
Walker::Walker(vec2 loc)
{	
	
	this->loc = loc;

	loc.x = ofGetWidth() / 2;
	loc.y = ofGetHeight() / 2;

	/*this->step();
	this->display();*/
	
}

void Walker::display()
{
	line.addVertex(loc.x, loc.y);
	line.draw();
}

void Walker::step() {
	//random movement
	/*int choice = (int) ofRandom(4);

	if (choice == 0)
		x+= 10;
	else if (choice == 1)
		x-= 10;
	else if (choice == 2)
		y+= 10;
	else
		y-= 10;*/


	//moving down and to the right
		/*float choice = ofRandom(1);

		if (choice <= 0.4)
			x+= 10;
		else if (choice > 0.8 && choice <= 0.9)
			x-= 10;
		else if (choice <= 0.8 && choice > 0.4)
			y+= 10;
		else
			y-= 10;*/

	//moving towards the mouse direction with a 50% chance
	/*float r = ofRandom(1);
	if (r = 0.5) {
		int xdir = (ofGetMouseX() - x);
		int ydir = (ofGetMouseY() - y);
		if (xdir != 0) {
			xdir /= abs(xdir);
		}
		if (ydir != 0){
			ydir /= abs(ydir);
		}
		x += xdir;
		y += ydir;
	}
	else {
		int xdir = (int)ofRandom(-2, 2);
		int ydir = (int)ofRandom(-2, 2);
		x += xdir;
		y += ydir;
	}
	x = ofClamp(x, 0, ofGetWidth() - 1);
	y = ofClamp(y, 0, ofGetHeight() - 1);*/

	//perlin noise walker
	//values of tx and ty are arbritary, but must be different so that the eventual value is also different
	/*x = ofMap(ofNoise(tx), 0, 1, 0, ofGetWidth());
	y = ofMap(ofNoise(ty), 0, 1, 0, ofGetHeight());

	tx += 0.01;
	ty += 0.01;*/

	//perlin value mapped to walker step size
	float xdir = ofMap(ofNoise(tx), 0, 1, 0, 30);
	float ydir = ofMap(ofNoise(ty), 0, 1, 0, 30);

	int choice = (int)ofRandom(4);

	if (choice == 0)
		loc.x += xdir;
	else if (choice == 1)
		loc.x -= xdir;
	else if (choice == 2)
		loc.y += ydir;
	else
		loc.y -= ydir;

	

}

void Walker::individual() {
	this->step();
	this->display();
	
}

