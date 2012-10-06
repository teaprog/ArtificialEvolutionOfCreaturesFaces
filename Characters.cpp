/*
* This is old code! I wrote this when programming "17.11.10 Virtual World".
* I could have used better methods to display text, but at the moment when programming
* this project I didn't have time. So I just copied the code from an earlier project.
*/

#include "characters.h"

#include <SDL_opengl.h>
#include <cmath>

const int PI = 3.14159265;

GLuint Characters::getCharacter(GLfloat xPos, GLfloat yPos, GLfloat size, GLfloat red, GLfloat green, GLfloat blue, char inputCharacter) {

	glColor3f(red, green, blue);

	switch(inputCharacter) {

		case '0':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glEnd();

			glBegin(GL_LINES);
			glVertex3f((xPos+size/2)+cos(-60.0/180*PI)*(size/2), (yPos+size/2)+sin(-60.0/180*PI)*(size/2), 0);
			glVertex3f((xPos+size/2)+cos(-240.0/180*PI)*(size/2), (yPos+size/2)+sin(-240.0/180*PI)*(size/2), 0);
			glEnd();

			glEndList();

			break;

		case '1':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+(size/4), yPos+size/4, 0);
			glVertex3f(xPos+(size/4)*2, yPos, 0);
			glVertex3f(xPos+(size/4)*2, yPos, 0);
			glVertex3f(xPos+(size/4)*2, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case '2':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 180; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+size/2)+sin(-i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+size/2)+sin((-i-20.0)/180*PI)*(size/2), 0);
			}
			glVertex3f((xPos+size/2)+cos((0.0)/180*PI)*(size/2), (yPos+size/2)+sin((0.0)/180*PI)*(size/2), 0);
			glVertex3f(xPos, yPos+size, 0);
			glVertex3f(xPos, yPos+size, 0);
			glVertex3f(xPos+size, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case '3':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 180; i < 450; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/4)+sin(i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/4)+sin((i+20.0)/180*PI)*(size/4), 0);
			}
			for(double i = 180; i < 450; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case '4':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos+(3*size)/4, 0);
			glVertex3f(xPos+(3*size)/4, yPos, 0);
			glVertex3f(xPos+(3*size)/4, yPos, 0);
			glVertex3f(xPos+(3*size)/4, yPos+size, 0);
			glVertex3f(xPos, yPos+(3*size)/4, 0);
			glVertex3f(xPos+size, yPos+(3*size)/4, 0);
			glEnd();

			glEndList();

			break;

		case '5':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos, yPos+size/2, 0);
			glVertex3f(xPos, yPos+size/2, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			for(double i = 180; i < 450; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case '6':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 20; i < 180; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+size/4)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+size/4)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glVertex3f((xPos+size/2)+cos((180.0)/180*PI)*(size/2), (yPos+size/4)+sin((180.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos, yPos+(3*size)/4, 0);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case '7':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos, yPos+size, 0);
			glVertex3f(xPos+size/4, yPos+size/2, 0);
			glVertex3f(xPos+(3*size)/4, yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case '8':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+size/4)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+size/4)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case '9':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+size/4)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+size/4)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glVertex3f(xPos+size, (yPos+size/4)+sin((180.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos+size, yPos+(3*size)/4, 0);
			for(double i = 200; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case ' ':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glEndList();

			break;

		case 'A':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos+size, 0);
			glVertex3f(xPos+size/2, yPos, 0);
			glVertex3f(xPos+size/2, yPos, 0);
			glVertex3f(xPos+size, yPos+size, 0);
			glVertex3f(xPos+sqrt((size*size + (size*size)/4)/4 - (size*size)/4), yPos+size/2, 0);
			glVertex3f(xPos+3*sqrt((size*size + (size*size)/4)/4 - (size*size)/4), yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case 'B':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 270; i < 450; i += 20) {
				glVertex3f((xPos+size/4)+cos(i/180*PI)*(size/2), (yPos+size/4)+sin(i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/4)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/4)+sin((i+20.0)/180*PI)*(size/4), 0);
			}
			for(double i = 270; i < 450; i += 20) {
				glVertex3f((xPos+size/4)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/4)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glVertex3f(xPos+size/4, yPos, 0);
			glVertex3f(xPos+size/4, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'C':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 60; i < 300; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glEnd();

			glEndList();

			break;

		case 'D':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 270; i < 450; i += 20) {
				glVertex3f((xPos+size/4)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/4)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glVertex3f(xPos+size/4, yPos, 0);
			glVertex3f(xPos+size/4, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'E':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos+size/2, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'F':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case 'G':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 300; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glVertex3f(xPos+size, yPos+size/2, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case 'H':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'I':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/2, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'J':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/2, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			for(double i = 180; i < 270; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/4), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/4), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case 'K':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();


			glEndList();

			break;

		case 'L':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'M':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'N':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'O':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glEnd();

			glEndList();

			break;

		case 'P':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 270; i < 450; i += 20) {
				glVertex3f((xPos+size/4)+cos(i/180*PI)*(size/2), (yPos+size/4)+sin(i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/4)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/4)+sin((i+20.0)/180*PI)*(size/4), 0);
			}
			glVertex3f(xPos+size/4, yPos, 0);
			glVertex3f(xPos+size/4, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'Q':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glVertex3f((xPos+size/2)+cos((60.0)/180*PI)*(size/4), (yPos+size/2)+sin((60.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos+size, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'R':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 270; i < 450; i += 20) {
				glVertex3f((xPos+size/4)+cos(i/180*PI)*(size/2), (yPos+size/4)+sin(i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/4)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/4)+sin((i+20.0)/180*PI)*(size/4), 0);
			}
			glVertex3f(xPos+size/4, yPos, 0);
			glVertex3f(xPos+size/4, yPos+size, 0);
			glVertex3f((xPos+size/4)+cos((450.0)/180*PI)*(size/2), (yPos+size/4)+sin((450.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos+size-size/4, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'S':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 30; i < 270; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+size/4)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+size/4)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			for(double i = 210; i < 450; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case 'T':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/2, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glEnd();

			glEndList();

			break;

		case 'U':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f((xPos+size/2)+cos((-180.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-180.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos, yPos, 0);
			glVertex3f((xPos+size/2)+cos((-360.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-360.0)/180*PI)*(size/4), 0);
			glVertex3f(xPos+size, yPos, 0);
			for(double i = 180; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(-i/180*PI)*(size/2), (yPos+(size/4)*3)+sin(-i/180*PI)*(size/4), 0);
				glVertex3f((xPos+size/2)+cos((-i-20.0)/180*PI)*(size/2), (yPos+(size/4)*3)+sin((-i-20.0)/180*PI)*(size/4), 0);
			}
			glEnd();

			glEndList();

			break;

		case 'V':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			glVertex3f(xPos+size, yPos, 0);
			glEnd();

			glEndList();

			break;

		case 'W':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos + size/4, yPos+size, 0);
			glVertex3f(xPos + size/4, yPos+size, 0);
			glVertex3f(xPos + size/2, yPos+size/2, 0);
			glVertex3f(xPos + size/2, yPos+size/2, 0);
			glVertex3f(xPos + (3*size)/4, yPos+size, 0);
			glVertex3f(xPos + (3*size)/4, yPos+size, 0);
			glVertex3f(xPos + size, yPos, 0);
			glEnd();

			glEndList();

			break;

		case 'X':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos+size, yPos+size, 0);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'Y':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glVertex3f(xPos+size/2, yPos+size/2, 0);
			glVertex3f(xPos+size/2, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case 'Z':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size-size/6, yPos, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size/6, yPos+size, 0);
			glVertex3f(xPos+size-size/6, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case '.':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_POINTS);
			glVertex3f(xPos, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case ',':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/6, yPos+size-size/6, 0);
			glVertex3f(xPos, yPos+size+size/6, 0);
			glEnd();

			glEndList();

			break;

		case ':':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_POINTS);
			glVertex3f(xPos, yPos+size/2, 0);
			glEnd();

			glBegin(GL_POINTS);
			glVertex3f(xPos, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case '+':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/2, yPos+size/4, 0);
			glVertex3f(xPos+size/2, yPos+(3*size)/4, 0);
			glVertex3f(xPos+size/4, yPos+size/2, 0);
			glVertex3f(xPos+(size*3)/4, yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case '-':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/4, yPos+size/2, 0);
			glVertex3f(xPos+(size*3)/4, yPos+size/2, 0);
			glEnd();

			glEndList();

			break;

		case '*':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/4, yPos+size/4, 0);
			glVertex3f(xPos+size-size/4, yPos+size-size/4, 0);
			glVertex3f(xPos+size-size/4, yPos+size/4, 0);
			glVertex3f(xPos+size/4, yPos+size-size/4, 0);
			glEnd();

			glEndList();

			break;

		case '=':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size/4, yPos+size/3, 0);
			glVertex3f(xPos+(size*3)/4, yPos+size/3, 0);
			glVertex3f(xPos+size/4, yPos+(2*size)/3, 0);
			glVertex3f(xPos+(size*3)/4, yPos+(2*size)/3, 0);
			glEnd();

			glEndList();

			break;

		case '/':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos, yPos+size, 0);
			glEnd();

			glEndList();

			break;

		case '©':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			for(double i = 60; i < 300; i += 20) {
				glVertex3f((xPos+size/4)+cos(i/180*PI)*(size/4)+size/4, (yPos+size/4)+sin(i/180*PI)*(size/4)+size/4, 0);
				glVertex3f((xPos+size/4)+cos((i+20.0)/180*PI)*(size/4)+size/4, (yPos+size/4)+sin((i+20.0)/180*PI)*(size/4)+size/4, 0);
			}
			glEnd();

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/2)+cos(i/180*PI)*(size/2), (yPos+size/2)+sin(i/180*PI)*(size/2), 0);
				glVertex3f((xPos+size/2)+cos((i+20.0)/180*PI)*(size/2), (yPos+size/2)+sin((i+20.0)/180*PI)*(size/2), 0);
			}
			glEnd();

			glEndList();

			break;

		case '%':

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glBegin(GL_LINES);
			glVertex3f(xPos+size, yPos, 0);
			glVertex3f(xPos, yPos+size, 0);
			glEnd();

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/6)+cos(i/180*PI)*(size/6)-size/6, (yPos+size/2)+sin(i/180*PI)*(size/6)-size/3, 0);
				glVertex3f((xPos+size/6)+cos((i+20.0)/180*PI)*(size/6)-size/6, (yPos+size/2)+sin((i+20.0)/180*PI)*(size/6)-size/3, 0);
			}
			glEnd();

			glBegin(GL_LINES);
			for(double i = 0; i < 360; i += 20) {
				glVertex3f((xPos+size/6)+cos(i/180*PI)*(size/6)+size-size/6, (yPos+size/6)+sin(i/180*PI)*(size/6)+size-size/3, 0);
				glVertex3f((xPos+size/6)+cos((i+20.0)/180*PI)*(size/6)+size-size/6, (yPos+size/6)+sin((i+20.0)/180*PI)*(size/6)+size-size/3, 0);
			}
			glEnd();

			glEndList();

			break;

		default:

			character = glGenLists(1);
			glNewList(character, GL_COMPILE);

			glEndList();

	}

	return character;
}

void Characters::drawCharacters(GLfloat xPos, GLfloat yPos, GLfloat size, GLfloat red, GLfloat green, GLfloat blue, string sentence) {;

	int i = 0;

	while(sentence[i] != '&') {

		glCallList(getCharacter(xPos, yPos, size, red, green, blue, sentence[i]));
		xPos += size;

		glDeleteLists(character, 1); //Deletes the list that is created, if not slow exit.

		i++;

	}

}

void Characters::drawNumber(GLfloat xPos, GLfloat yPos, GLfloat size,GLfloat red, GLfloat green, GLfloat blue, string sentence) {
	
	int i = 0;

	while(i < sentence.length()) {

		glCallList(getCharacter(xPos, yPos, size, red, green, blue, sentence[i]));
		xPos += size;

		glDeleteLists(character, 1); //Deletes the list that is created, if not slow exit.

		i++;

	}

}