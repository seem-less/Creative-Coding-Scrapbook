#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();
	screen.allocate(w, h, OF_IMAGE_GRAYSCALE);
	

}

//--------------------------------------------------------------
void ofApp::update(){
	
	//float xrate = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0.01, 0.1);
	//float yrate = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0.01, 0.1);

	float xoff = 0.0;
	float yoff = 0.0;
	
	for (size_t x = 0; x < screen.getWidth(); x++) {

		for (size_t y = 0; y < screen.getHeight(); y++) {
			
			float bright = ofMap(ofNoise(xoff, yoff), 0, 1, 0, 255);
			ofColor shade = ofColor(bright);
			screen.setColor(x,y, shade);
			yoff += 0.02;
		}

		xoff += 0.01;
	}
	//apparently really important function here
	screen.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

	screen.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
