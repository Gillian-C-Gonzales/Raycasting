#include "ofApp.h"

ofImage myimage;

//--------------------------------------------------------------
void ofApp::setup(){
    width = 1024;
    height = 768; // or whatever, currently set to default window size
    ofColor color;
    myimage.allocate(width, height, OF_IMAGE_COLOR);
    
    for (int i = 0; i < width; i++) 
    {
        for (int j = 0; j < height; j++)
        {
            color.r = ofMap(j, 0, height, 60, 255); // Yellow gradient
			color.g = ofMap(j, 0, height, 93, 255); 
            color.b = ofMap(j, 0, height, 187, 255); // Blue gradient in opposite direction
            myimage.setColor(i,j, color);
        }
    }
    
    myimage.update(); // confirm the changes to the image contents before displaying

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    myimage.draw(0, 0); // draw starting in upper left corner
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {

		}
	}
    

}
