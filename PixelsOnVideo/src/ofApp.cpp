#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	vid.setDeviceID(0);
	vid.setDesiredFrameRate(60);
	vid.initGrabber(1280, 720);

	pixels.allocate(vid.getWidth(), vid.getHeight(), OF_PIXELS_RGBA);
	ofLogToConsole();
}

//--------------------------------------------------------------
void ofApp::update() {
	vid.update();

	if (vid.isFrameNew()) {
		pixels = vid.getPixels();

		redLines.clear();
		greenLines.clear();
		blueLines.clear();

		//size_t is an unsigned integer type, used for arrays
		//that are used in loops.
		for (size_t y = 0; y < pixels.getHeight(); y += gap) {

			ofPolyline redRow;

			for (size_t x = 0; x < pixels.getWidth(); x++) {
				ofColor redColor = pixels.getColor(x, y);
				//float offset = pixels.getColor(x, y).getBrightness();

				float offsetRed = ofMap(redColor.r, 0, 255, -offsetDepth, offsetDepth);


				redRow.addVertex(x, y + offsetRed);

				/*ofColor col = pixels.getColor(x, y);
				ofSetColor(col);
				ofDrawRectangle(x, y, 1, 1);*/

			}
			redLines.push_back(redRow);
		}


		for (size_t y = 1; y < pixels.getHeight(); y += gap) {

			ofPolyline greenRow;

			for (size_t x = 0; x < pixels.getWidth(); x++) {
				ofColor greenColor = pixels.getColor(x, y);
				//float offset = pixels.getColor(x, y).getBrightness();

				float offsetGreen = ofMap(greenColor.g, 0, 255, -offsetDepth, offsetDepth);


				greenRow.addVertex(x, y + offsetGreen);

				/*ofColor col = pixels.getColor(x, y);
				ofSetColor(col);
				ofDrawRectangle(x, y, 1, 1);*/

			}
			greenLines.push_back(greenRow);
		}

		for (size_t y = 2; y < pixels.getHeight(); y += gap) {

			ofPolyline blueRow;

			for (size_t x = 0; x < pixels.getWidth(); x++) {
				ofColor blueColor = pixels.getColor(x, y);
				//float offset = pixels.getColor(x, y).getBrightness();

				float offsetBlue = ofMap(blueColor.b, 0, 255, -offsetDepth, offsetDepth);


				blueRow.addVertex(x, y + offsetBlue);

				/*ofColor col = pixels.getColor(x, y);
				ofSetColor(col);
				ofDrawRectangle(x, y, 1, 1);*/

			}
			blueLines.push_back(blueRow);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundColor(ofColor::white);
	ofSetLineWidth(1.0);

	for (auto& redLine : redLines) {
		ofSetColor(ofColor::red);
		redLine.draw();
	}
	
	for (auto& greenLine : greenLines) {
		ofSetColor(ofColor::green);
		greenLine.draw();
	}
	for (auto& blueLine : blueLines) {
		ofSetColor(ofColor::blue);
		blueLine.draw();
	}

	/*ofSetColor(ofColor::fromHsb(ofRandom(255), 255, 255));
	ofSetLineWidth(4.0);
	line.draw();*/

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'c') {
		redLine.clear();
		greenLine.clear();
		blueLine.clear();
	}

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	redLine.addVertex(x, y);
	greenLine.addVertex(x, y);
	blueLine.addVertex(x, y);

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
