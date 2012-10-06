#include <SDL_opengl.h>
#include <vector>
using std::vector;

#include "Face.h"

#ifndef FACE_MAKER_H
#define FACE_MAKER_H

class FaceMaker {
	private:
		vector<Face*> faces;
	public:
		FaceMaker(int numRowFaces, int numColumnFaces, GLfloat xPos, GLfloat yPos, GLfloat deltaX, GLfloat deltaY);
		~FaceMaker();
		vector<Face*>* getFaces();
		void resetFaces();
};

#endif /* FACE_MAKER_H */