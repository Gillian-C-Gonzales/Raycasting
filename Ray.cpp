#include "Ray.h"

Ray::Ray(vec3& origin, vec3& dir)
	:origin(origin)
	, dir(dir) {
}


const vec3 Ray::getOrigin() {
	return origin;
}

const vec3 Ray::getDir() {
	return dir;
}

vec3 Ray::at(double t) {
	return origin + t * dir;
}


