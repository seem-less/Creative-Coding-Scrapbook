#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(ofColor::black);
	ofSetColor(ofColor::white);

	
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; randoms.size() < 5; i++) {
		vec2 Pos = vec2(ofRandom(0, ofGetWidth()), ofRandom(0, ofGetHeight()));
		
		Walker one(Pos);

		randoms.push_back(one);
		
	}
	

}

//--------------------------------------------------------------
void ofApp::draw() {
	 for (int i = 0; i < randoms.size(); i++) {
			randoms[i].step();
			randoms[i].display();
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
	/*Walker two(x,y);
	randoms.push_back(two);*/

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
