#include <SDL_opengl.h>
#include <string>
using std::string;

#include "Decoder.h"

#ifndef FACE_H
#define FACE_H

class Face {
	private:
		GLfloat xPos, yPos;
		Decoder decoder;

		GLfloat headWidth;
		GLfloat headHeight;
		GLfloat headRedColor;
		GLfloat headGreenColor;
		GLfloat headBlueColor;

		GLfloat eyeWidth;
		GLfloat eyeHeight;
		GLfloat eyeDistanceFromHeadCenter;
		GLfloat eyeDistanceBetweenEyes;
		GLfloat eyeRedColor;
		GLfloat eyeGreenColor;
		GLfloat eyeBlueColor;

		GLfloat eyebrowWidth;
		GLfloat eyebrowHeight;
		GLfloat eyebrowDistanceFromEyes;
		GLfloat eyebrowRedColor;
		GLfloat eyebrowGreenColor;
		GLfloat eyebrowBlueColor;

		GLfloat earWidth;
		GLfloat earHeight;
		GLfloat earDistanceFromHeadCenter;
		GLfloat earDistanceBetweenEars;
		GLfloat earRedColor;
		GLfloat earGreenColor;
		GLfloat earBlueColor;

		GLfloat noseWidth;
		GLfloat noseHeight;
		GLfloat noseDistanceFromHeadCenter;
		GLfloat noseRedColor;
		GLfloat noseGreenColor;
		GLfloat noseBlueColor;

		GLfloat mouthWidth;
		GLfloat mouthHeight;
		GLfloat mouthDistanceFromheadCenter;
		GLfloat mouthRedColor;
		GLfloat mouthGreenColor;
		GLfloat mouthBlueColor;

		void setValuesFromGeneticString();

		void drawHead();
		void drawEyes();
		void drawEyebrows();
		void drawEars();
		void drawNose();
		void drawMouth();
		void connectEyesAndEarsWithHead();
	public:
		Face(GLfloat xPos, GLfloat yPos);
		void drawFace();

		string getGeneticString();
		void setGeneticString(string geneticString);
		void reset();

		GLfloat getXPos();
		GLfloat getYPos();
};

#endif /* FACE_H */