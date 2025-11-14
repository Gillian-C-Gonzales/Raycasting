#include "ofMain.h"
using namespace glm;

class Ray {
	public:
	Ray(vec3&, vec3&);

	const vec3 getOrigin();
	const vec3 getDir();
	vec3 at(double);

	private:
	vec3 origin;
	vec3 dir;


};
