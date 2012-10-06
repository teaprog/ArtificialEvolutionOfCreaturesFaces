#include "InfoAndOptionPanel.h"

#include <sstream>
#include "ShapeDrawer.h"

InfoAndOptionPanel::InfoAndOptionPanel(GLfloat xPos, GLfloat yPos, GLfloat width, GLfloat height,int* generation, SDL_Event* event, bool* isPlay, bool* isPause, bool* isStop, double* mutationProbability) {
	this->xPos = xPos;
	this->yPos = yPos;
	this->width = width;
	this->height = height;
	this->generation = generation;
	this->event = event;
	this->isPlay = isPlay;
	this->isPause = isPause;
	this->isStop = isStop;
	this->mutationProbability = mutationProbability;
	face = new Face(xPos + width / 2.0f, yPos + height / 1.15f);
	deltaPlayColor = 0.0f;
	deltaPauseColor = 0.0f;
	deltaStopColor = 0.0f;
	deltaSliderColor = 0.0f;
}

InfoAndOptionPanel::~InfoAndOptionPanel() {
	delete face;
}

void InfoAndOptionPanel::drawInfoAndOptionPanel() {
	drawInitialFace();
	drawGenerationNumber();
	drawStartButton();
	drawPauseButon();
	drawStopButton();
	drawMutationProbabilitySlider();
}

void InfoAndOptionPanel::drawInitialFace() {
	glColor3f(0.8f, 0.8f, 0.8f);
	ShapeDrawer::drawRectangle(face->getXPos() - 50.0f, face->getYPos() - 60.0f, 100.0f, 120.0f);
	glColor3f(0.1f, 0.1f, 0.1f);
	ShapeDrawer::drawRectangle(face->getXPos() - 45.0f, face->getYPos() - 55.0f, 90.0f, 110.0f);
	face->drawFace();

	string initialFaceText = "ANCESTOR:&";
	glLineWidth(4.0f);
	characters.drawCharacters(xPos + width / 2.0f - (initialFaceText.length() - 2.0f) * 18.0f / 2.0f, face->getYPos() - 85.0f, 18.0f, 1.0f, 1.0f, 1.0f, initialFaceText);
	glLineWidth(1.0f);
}

void InfoAndOptionPanel::drawGenerationNumber() {
	glLineWidth(4.0f);

	string generationText = "GENERATION:&";
	characters.drawCharacters(xPos + 5.0f, yPos + 15.0f, 18.0f, 1.0f, 1.0f, 1.0f, generationText);
	string value;
	std::stringstream out;
	out << *generation;
	value = out.str();
	characters.drawNumber(xPos + width / 2.0f - value.length() * 25.0f / 2.0f, yPos + 45.0f, 25.0f, 1.0f, 1.0f, 1.0f, value);

	glLineWidth(1.0f);
}

void InfoAndOptionPanel::drawStartButton() {
	GLfloat buttonXPos = xPos + width / 2.0f - 40.0f;
	GLfloat buttonYPos = yPos + height / 2.75f - 80.0f * 2;
	glColor3f(0.4f + deltaPlayColor, 0.4f + deltaPlayColor, 0.4f + deltaPlayColor);
	ShapeDrawer::drawRectangle(buttonXPos, buttonYPos, 80.0f, 80.0f);
	glColor3f(0.8f + deltaPlayColor, 0.8f + deltaPlayColor, 0.8f + deltaPlayColor);
	ShapeDrawer::drawRectangle(buttonXPos + 5.0f, buttonYPos + 5.0f, 70.0f, 70.0f);

	glColor3f(0.0f, 0.8f + deltaPlayColor, 0.0f);
	ShapeDrawer::drawTriangle(buttonXPos + 20.0f, buttonYPos + 20.0f, buttonXPos + 60.0f, buttonYPos + 40.0f, buttonXPos + 20.0f, buttonYPos + 60.0f);

	if (event->motion.x > buttonXPos && event->motion.x < buttonXPos + 80.0f && event->motion.y > buttonYPos && event->motion.y < buttonYPos + 80.0f) {
		deltaPlayColor = 0.1f;
		if (event->type == SDL_MOUSEBUTTONDOWN) {
			deltaPlayColor = -0.1f;
			*isPlay = true;
			*isPause = false;
			*isStop = false;
		}
	}
	else
		deltaPlayColor = 0.0f;
}

void InfoAndOptionPanel::drawPauseButon() {
	GLfloat buttonXPos = xPos + width / 2.0f - 40.0f;
	GLfloat buttonYPos = yPos + height / 2.75f - 50.0f;
	glColor3f(0.4f + deltaPauseColor, 0.4f + deltaPauseColor, 0.4f + deltaPauseColor);
	ShapeDrawer::drawRectangle(buttonXPos, buttonYPos, 80.0f, 80.0f);
	glColor3f(0.8f + deltaPauseColor, 0.8f + deltaPauseColor, 0.8f + deltaPauseColor);
	ShapeDrawer::drawRectangle(buttonXPos + 5.0f, buttonYPos + 5.0f, 70.0f, 70.0f);

	glColor3f(0.5f + deltaPauseColor, 0.5f + deltaPauseColor, 0.0f);
	ShapeDrawer::drawRectangle(buttonXPos + 20.0f, buttonYPos + 20.0f, 10.0f, 40.0f);
	ShapeDrawer::drawRectangle(buttonXPos + 50.0f, buttonYPos + 20.0f, 10.0f, 40.0f);

	if (event->motion.x > buttonXPos && event->motion.x < buttonXPos + 80.0f && event->motion.y > buttonYPos && event->motion.y < buttonYPos + 80.0f) {
		deltaPauseColor = 0.1f;
		if (event->type == SDL_MOUSEBUTTONDOWN) {
			deltaPauseColor = -0.1f;
			*isPlay = false;
			*isPause = true;
			*isStop = false;
		}
	}
	else
		deltaPauseColor = 0.0f;
}

void InfoAndOptionPanel::drawStopButton() {
	GLfloat buttonXPos = xPos + width / 2.0f - 40.0f;
	GLfloat buttonYPos = yPos + height / 2.75f + 60.0f;
	glColor3f(0.4f + deltaStopColor, 0.4f + deltaStopColor, 0.4f + deltaStopColor);
	ShapeDrawer::drawRectangle(buttonXPos, buttonYPos, 80.0f, 80.0f);
	glColor3f(0.8f + deltaStopColor, 0.8f + deltaStopColor, 0.8f + deltaStopColor);
	ShapeDrawer::drawRectangle(buttonXPos + 5.0f, buttonYPos + 5.0f, 70.0f, 70.0f);

	glColor3f(0.8f + deltaStopColor, 0.0f, 0.0f);
	ShapeDrawer::drawRectangle(buttonXPos + 20.0f, buttonYPos + 20.0f, 40.0f, 40.0f);

	if (event->motion.x > buttonXPos && event->motion.x < buttonXPos + 80.0f && event->motion.y > buttonYPos && event->motion.y < buttonYPos + 80.0f) {
		deltaStopColor = 0.1f;
		if (event->type == SDL_MOUSEBUTTONDOWN) {
			deltaStopColor = -0.1f;
			*isPlay = false;
			*isPause = false;
			*isStop = true;
		}
	}
	else
		deltaStopColor = 0.0f;
}

void InfoAndOptionPanel::drawMutationProbabilitySlider() {
	GLfloat sliderXPos = xPos + 20.0f;
	GLfloat sliderYPos = yPos + height / 1.5f;
	GLfloat sliderWidth = width - 40.0f;
	GLfloat sliderHeight = 20.0f;
	GLfloat sliderValue = *mutationProbability / 0.001 * sliderWidth;
	static bool isButtonDown = false;

	glLineWidth(2.0f);

	string generationText = "MUTATION PROBABILITY:&";
	characters.drawCharacters(xPos + 5.0f, sliderYPos - 35.0f, 9.0f, 1.0f, 1.0f, 1.0f, generationText);

	glColor3f(1.0f, 1.0f, 1.0f);
	ShapeDrawer::drawLine(sliderXPos, sliderYPos, sliderXPos + sliderWidth, sliderYPos);
	ShapeDrawer::drawLine(sliderXPos, sliderYPos - sliderHeight / 2.0f, sliderXPos, sliderYPos + sliderHeight / 2.0f);
	ShapeDrawer::drawLine(sliderXPos + sliderWidth, sliderYPos - sliderHeight / 2.0f, sliderXPos + sliderWidth, sliderYPos + sliderHeight / 2.0f);
	ShapeDrawer::drawLine(sliderXPos + 0.1 * sliderWidth, sliderYPos - sliderHeight / 2.0f + 3.0f, sliderXPos + 0.1 * sliderWidth, sliderYPos + sliderHeight / 2.0f - 3.0f);

	glColor3f(0.9f + deltaSliderColor, 0.9f + deltaSliderColor, 0.9f + deltaSliderColor);
	ShapeDrawer::drawCircle(sliderXPos + sliderValue, sliderYPos, 3.0f, 10.0f);

	glLineWidth(1.0f);

	bool isMouseOnSlider = event->motion.x > sliderXPos && event->motion.x < sliderXPos + sliderWidth && event->motion.y > sliderYPos - sliderHeight / 2.0f && event->motion.y < sliderYPos + sliderHeight / 2.0f;
	if (isButtonDown) {
		sliderValue = event->motion.x - sliderXPos;
		if (sliderValue < 0.0)
			sliderValue = 0.0;
		else if (sliderValue >  sliderWidth)
			sliderValue = sliderWidth;

		*mutationProbability = (double)(sliderValue / sliderWidth) * 0.001;

		if (event->type == SDL_MOUSEBUTTONUP || !isMouseOnSlider)
			isButtonDown = false;
	}
	else if (isMouseOnSlider) {
		deltaSliderColor = 0.1f;
		if (event->type == SDL_MOUSEBUTTONDOWN) {
			deltaSliderColor = -0.1f;
			isButtonDown = true;
		}
	}
	else
		deltaSliderColor = 0.0f;
}