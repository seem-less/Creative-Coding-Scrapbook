#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundAuto(false);
	ofEnableAlphaBlending();
	ofBackground(255);
	timeScale = 100;
	clearAlpha = 0.5;

}

//--------------------------------------------------------------
void ofApp::update(){
	

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofColor darkColor(0, 0, 0, 255); 
	ofColor lightColor(255, 255, 255, 255);  
	float time = ofGetElapsedTimef(); 
	float percent = ofMap(cos(time / 2.0), -1, 1, 0, 1); 
	ofColor bgColor = darkColor;  
	bgColor.lerp(lightColor, percent);  
	bgColor.a = clearAlpha;  
	ofColor fgColor = lightColor; 
	fgColor.lerp(darkColor, percent);  

	ofSetColor(bgColor);
	ofSetRectMode(OF_RECTMODE_CORNER);
	ofFill();
	ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());  

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(fgColor);
	ofNoFill();
	ofPushMatrix();
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 100); 
	for (int i = 0; i < 100; i++) {
		ofScale(1.1, 1.1, 1.1);
		float time = ofGetElapsedTimef();
		
		float noise = ofSignedNoise(time * timeScale) * 20.0;
		ofRotate(noise);
		ofDrawRectangle(0, 0, 50, 50);
	}
	ofPopMatrix();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	clearAlpha = ofMap(x, 0, ofGetWidth(), 0, 255);  
	timeScale = ofMap(y, 0, ofGetHeight(), 0, 1);  
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
