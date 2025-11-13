#pragma once

#include "ofMain.h"
#include "Sphere.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	int width;
	int height;

	Sphere firstSphere;
	Sphere secondSphere;
	Sphere thirdSphere;
	Sphere forthSphere;
};
