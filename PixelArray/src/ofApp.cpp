#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("CC0005.jpg");

	gui.setup();

	nx.set("Number of Columns", 100, 0, 500);
	ny.set("Number of Rows", 100, 0, 500);
	dia.set("Pixel Diameter", 5, 0, 100);
	cols.set("color", ofColor::black);

	gui.add(nx);
	gui.add(ny);
	gui.add(cols);
	gui.add(dia);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofSetBackgroundColor(cols);

	for (int ix = 0; ix < nx; ix++) {
		for (int iy = 0; iy < ny; iy++) {
			
			int x = ((float)ix / nx) * img.getWidth();
			int y = ((float)iy / ny) * img.getHeight();

			ofColor col = img.getColor(x, y);

			ofSetColor(col);
			ofDrawCircle(x, y, dia);

			img.getColor(x,y);
			
		}
		//dia += 15;

	}
	//How to make a line that flows through the image and magnifys the pixel?

	gui.draw();
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
