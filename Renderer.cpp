#include "Renderer.h"

#include <SDL.h>
#include <SDL_opengl.h>

#include "ShapeDrawer.h"

Renderer::Renderer(InfoAndOptionPanel &infoAndOptionPanel, vector<Face*> &facesOne, vector<Face*> &facesTwo, vector<Face*> &facesThree, vector<Face*> &facesFour, int width, int height)
	: infoAndOptionPanel(infoAndOptionPanel), facesOne(facesOne), facesTwo(facesTwo), facesThree(facesThree), facesFour(facesFour) {
	this->width = width;
	this->height = height;
}

void Renderer::drawPopulationBorder() {
	glColor3f(1.0f, 1.0f, 1.0f);
	glLineWidth(2.0f);
	ShapeDrawer::drawLine(0.0f, height / 2.0f, width, height / 2.0f);
	ShapeDrawer::drawLine(width / 2.0f, 0.0f, width / 2.0f, height);
	ShapeDrawer::drawLine(width, 0.0f, width, height);
	glLineWidth(1.0f);
}

void Renderer::display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	drawPopulationBorder();
	infoAndOptionPanel.drawInfoAndOptionPanel();

	for (size_t i = 0; i < facesOne.size(); i++) {
		facesOne.at(i)->drawFace();
		facesTwo.at(i)->drawFace();
		facesThree.at(i)->drawFace();
		facesFour.at(i)->drawFace();
	}

	SDL_GL_SwapBuffers();
}