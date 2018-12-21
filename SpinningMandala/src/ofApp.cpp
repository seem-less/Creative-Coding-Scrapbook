#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetBackgroundColor(ofColor::white);

	float radius = 60;
	int numPoints = 30;

	ofSetColor(ofColor::black);
	for (int j = 0; j < 30; j++) {

		for (int i = 0; i < numPoints; i++) {

			if (i % 2 == 0) {
				ofNoFill();
			}
			else {
				ofFill();
			}

			float angle = i * (TWO_PI / numPoints);

			angle += ofGetElapsedTimeMillis() *0.001; 

			int x = radius * cos(angle);
			int y = radius * sin(angle);

			x += ofGetWidth()*0.5;
			y += ofGetHeight()*0.5;
			
			ofDrawCircle(x, y, 10);
		}
		radius += 15;
	}
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
