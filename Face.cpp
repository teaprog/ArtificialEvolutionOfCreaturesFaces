#include "Face.h"

#include "ShapeDrawer.h"

Face::Face(GLfloat xPos, GLfloat yPos) {
	this->xPos = xPos;
	this->yPos = yPos;
}

void Face::setValuesFromGeneticString() {
	headWidth = decoder.getHeadWidth();
	headHeight = decoder.getHeadHeight();
	headRedColor = decoder.getHeadRedColor();
	headGreenColor = decoder.getHeadGreenColor();
	headBlueColor = decoder.getHeadBlueColor();

	eyeWidth = decoder.getEyeWidth();
	eyeHeight = decoder.getEyeHeight();
	eyeDistanceFromHeadCenter = decoder.getEyeDistanceFromHeadCenter();
	eyeDistanceBetweenEyes = decoder.getEyeDistanceBetweenEyes();
	eyeRedColor = decoder.getEyeRedColor();
	eyeGreenColor = decoder.getEyeGreenColor();
	eyeBlueColor = decoder.getEyeBlueColor();

	eyebrowWidth = decoder.getEyebrowWidth();
	eyebrowHeight = decoder.getEyebrowHeight();
	eyebrowDistanceFromEyes = decoder.getEyebrowDistanceFromEyes();
	eyebrowRedColor = decoder.getEyebrowRedColor();
	eyebrowGreenColor = decoder.getEyebrowGreenColor();
	eyebrowBlueColor = decoder.getEyebrowBlueColor();

	earWidth = decoder.getEarWidth();
	earHeight = decoder.getEarHeight();
	earDistanceFromHeadCenter = decoder.getEarDistanceFromHeadCenter();
	earDistanceBetweenEars = decoder.getEarDistanceBetweenEars();
	earRedColor = decoder.getEarRedColor();
	earGreenColor = decoder.getEarGreenColor();
	earBlueColor = decoder.getEarBlueColor();

	noseWidth = decoder.getNoseWidth();
	noseHeight = decoder.getNoseHeight();
	noseDistanceFromHeadCenter = decoder.getNoseDistanceFromHeadCenter();
	noseRedColor = decoder.getNoseRedColor();
	noseGreenColor = decoder.getNoseGreenColor();
	noseBlueColor = decoder.getNoseBlueColor();

	mouthWidth = decoder.getMouthWidth();
	mouthHeight = decoder.getMouthHeight();
	mouthDistanceFromheadCenter = decoder.getMouthDistanceFromheadCenter();
	mouthRedColor = decoder.getMouthRedColor();
	mouthGreenColor = decoder.getMouthGreenColor();
	mouthBlueColor = decoder.getMouthBlueColor();
}

void Face::drawHead() {
	glColor3f(headRedColor, headGreenColor, headBlueColor);
	ShapeDrawer::drawCircle(xPos, yPos, headWidth, headHeight);
}

void Face::drawEyes() {
	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos - eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth, eyeHeight, false);
	ShapeDrawer::drawCircle(xPos + eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth, eyeHeight, false);

	glColor3f(eyeRedColor, eyeGreenColor, eyeBlueColor);
	ShapeDrawer::drawCircle(xPos - eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth, eyeHeight);
	ShapeDrawer::drawCircle(xPos + eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth, eyeHeight);

	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos - eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth / 4.0f, eyeHeight / 4.0f);
	ShapeDrawer::drawCircle(xPos + eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter, eyeWidth / 4.0f, eyeHeight / 4.0f);
}

void Face::drawEyebrows() {
	glColor3f(eyebrowRedColor, eyebrowGreenColor, eyebrowBlueColor);
	ShapeDrawer::drawCircle(xPos - eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter - eyebrowDistanceFromEyes, eyebrowWidth, eyebrowHeight);
	ShapeDrawer::drawCircle(xPos + eyeDistanceBetweenEyes / 2.0f, yPos - eyeDistanceFromHeadCenter - eyebrowDistanceFromEyes, eyebrowWidth, eyebrowHeight);
}

void Face::drawEars() {
	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos - earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth, earHeight, false);
	ShapeDrawer::drawCircle(xPos + earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth, earHeight, false);

	glColor3f(earRedColor, earGreenColor, earBlueColor);
	ShapeDrawer::drawCircle(xPos - earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth, earHeight);
	ShapeDrawer::drawCircle(xPos + earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth, earHeight);

	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos - earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth / 4.0f, earHeight / 4.0f);
	ShapeDrawer::drawCircle(xPos + earDistanceBetweenEars / 2.0f, yPos - earDistanceFromHeadCenter, earWidth / 4.0f, earHeight / 4.0f);
}

void Face::drawNose() {
	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos, yPos - noseDistanceFromHeadCenter, noseWidth, noseHeight, false);

	glColor3f(noseRedColor, noseGreenColor, noseBlueColor);
	ShapeDrawer::drawCircle(xPos, yPos - noseDistanceFromHeadCenter, noseWidth, noseHeight);
}

void Face::drawMouth() {
	glColor3f(mouthRedColor, mouthGreenColor, mouthBlueColor);
	ShapeDrawer::drawCircle(xPos, yPos - mouthDistanceFromheadCenter, mouthWidth, mouthHeight);

	glColor3f(0.0f, 0.0f, 0.0f);
	ShapeDrawer::drawCircle(xPos, yPos - mouthDistanceFromheadCenter, mouthWidth, mouthHeight, false);
	ShapeDrawer::drawLine(xPos - mouthWidth, yPos - mouthDistanceFromheadCenter, xPos + mouthWidth, yPos - mouthDistanceFromheadCenter);
}

void Face::connectEyesAndEarsWithHead() {
	glColor3f(headRedColor, headGreenColor, headBlueColor);
	glLineWidth(4.0f);

	ShapeDrawer::drawLine(xPos, yPos, xPos - earDistanceBetweenEars / 2.0f,  yPos - earDistanceFromHeadCenter);
	ShapeDrawer::drawLine(xPos, yPos, xPos + earDistanceBetweenEars / 2.0f,  yPos - earDistanceFromHeadCenter);

	ShapeDrawer::drawLine(xPos, yPos, xPos - eyeDistanceBetweenEyes / 2.0f,  yPos - eyeDistanceFromHeadCenter);
	ShapeDrawer::drawLine(xPos, yPos, xPos + eyeDistanceBetweenEyes / 2.0f,  yPos - eyeDistanceFromHeadCenter);

	glLineWidth(1.0f);
}

void Face::drawFace() {
	setValuesFromGeneticString();

	connectEyesAndEarsWithHead();
	drawHead();
	drawEars();
	drawEyes();
	drawEyebrows();
	drawMouth();
	drawNose();
}

string Face::getGeneticString() {
	return decoder.getGeneticString();
}

void Face::reset() {
	decoder.resetGeneticString();
}

void Face::setGeneticString(string geneticString) {
	decoder.setGeneticString(geneticString);
}

GLfloat Face::getXPos() {
	return xPos;
}

GLfloat Face::getYPos() {
	return yPos;
}