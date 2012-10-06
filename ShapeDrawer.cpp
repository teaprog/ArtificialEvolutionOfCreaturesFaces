#include "ShapeDrawer.h"

#include <SDL_opengl.h>
#include <cmath>

const double PI = 3.14159265;

void ShapeDrawer::drawCircle(float xPos, float yPos, float width, float height, bool filled) {
	GLenum beginMode = filled ? GL_POLYGON : GL_LINE_LOOP;

	glBegin(beginMode);
	for (int i = 0; i < 360; i += 20) {
		glVertex2f(xPos + width * (GLfloat)cos(i / 180.0 * PI), yPos + height * (GLfloat)sin(i / 180.0 * PI));
	}
	glEnd();
}

void ShapeDrawer::drawLine(float x1, float y1, float x2, float y2) {
	glBegin(GL_LINES);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}

void ShapeDrawer::drawRectangle(float xPos, float yPos, float width, float height, bool filled) {
	GLenum beginMode = filled ? GL_POLYGON : GL_LINE_LOOP;

	glBegin(beginMode);
	glVertex2f(xPos, yPos);
	glVertex2f(xPos + width, yPos);
	glVertex2f(xPos + width, yPos + height);
	glVertex2f(xPos, yPos + height);
	glEnd();
}

void ShapeDrawer::drawTriangle(float x1, float y1, float x2, float y2, float x3, float y3, bool filled) {
	GLenum beginMode = filled ? GL_TRIANGLES : GL_LINE_LOOP;

	glBegin(beginMode);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glVertex2f(x3, y3);
	glEnd();
}