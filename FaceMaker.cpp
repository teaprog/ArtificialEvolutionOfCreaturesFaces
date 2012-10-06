#include "FaceMaker.h"

FaceMaker::FaceMaker(int numRowFaces, int numColumnFaces, GLfloat xPos, GLfloat yPos, GLfloat deltaX, GLfloat deltaY) {
	for (int i = 0; i < numRowFaces; i++) {
		for (int j = 0; j < numColumnFaces; j++) {
			faces.push_back(new Face(xPos + i * deltaX, yPos + j * deltaY));
		}
	}
}

FaceMaker::~FaceMaker() {
	for (vector<Face*>::iterator i = faces.begin(); i != faces.end(); i++)
		delete *i;
}

vector<Face*>* FaceMaker::getFaces() {
	return &faces;
}

void FaceMaker::resetFaces() {
	for (size_t i = 0; i < faces.size(); i++) {
		faces.at(i)->reset();
	}
}