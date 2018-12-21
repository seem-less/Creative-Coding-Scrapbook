#include "Spot.h"

// "Spot" here is the constructor that must be included
// ofImage& here is used for "Pointers" so that the class
// will point to the variable,
// Instead of reloading the image everytime.
Spot::Spot(int x, int y, ofImage& img) : img(img)
{
	this->x = x;
	this->y = y;

	x = ofClamp(x, 0, img.getWidth());
	y = ofClamp(y, 0, img.getHeight());

	col = img.getColor(x, y);
}

void Spot::draw() {
	ofSetColor(col);
	ofDrawCircle(x, y, 5);
}


void Spot::update() {

	x += 10 * ofSignedNoise(y, ofGetElapsedTimeMillis() / 100.0);
	y += 10 * ofSignedNoise(x, -(ofGetElapsedTimeMillis() / 100.0));

	x = ofClamp(x, 0, img.getWidth());
	y = ofClamp(y, 0, img.getHeight());

	col = img.getColor(x, y);
}
