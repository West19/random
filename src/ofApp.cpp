#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup(){
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//X = {500, 1000, 30, 100, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel

float mean=1000.0f;
float sd=15.0f;
float meany=800.0f;
float sdy=15.0f;
random_device rd;
std::mt19937 en(rd());

std::normal_distribution<> val1(mean,sd);
std::normal_distribution<> val2(meany,sdy);
 
 
for ( int i =0 ;i<20; i++)
{
	X.push_back(val1(en));
	Y.push_back(val2(en));
}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
