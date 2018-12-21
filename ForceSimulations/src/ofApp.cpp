#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();
	ofSetBackgroundColor(ofColor::black);
	

	gravity = vec2(0, -1);
	//upwardF = vec2(0, -1.5);
}

float ofApp::repulsionForce(float location) {
	float repulsion = ofMap(location, 0, ofGetHeight(), 1.4, 0);
	return repulsion;
}

//--------------------------------------------------------------
void ofApp::update(){
		
	for (int i = 0; i < numBalloons; i++) {
		mover unit(ofGetWidth()/2, ofGetHeight()/2, ofRandom(0,5));
		moves.push_back(unit);

		float repulse = repulsionForce(moves[i].location.y);
		pushf = vec2(0, repulse);

		t1 += 0.05;
		t2 += 0.005;

		windVal = ofMap(ofNoise(t1, t2), 0, 1, 0, 0.001);
		wind = vec2(-windVal, 0);
		
		moves[i].applyForce(gravity);
		moves[i].applyForce(pushf);
		moves[i].applyForce(wind);
		
		moves[i].update();
		moves[i].checkEdges();
	}

		
		
	
		

		
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < numBalloons; i++) {
		moves[i].display();
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
