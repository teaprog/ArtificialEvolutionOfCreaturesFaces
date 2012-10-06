/*
* This is old code! I wrote this when programming "17.11.10 Virtual World".
*/

/* CHARACTERS: */
/* 0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ.,:+-*=/©% */
/* last character in every sentence must be & */
/* every letter must be in uppercase */

#include <SDL_OpenGL.h>

#include <string>
using std::string;

#ifndef CHARACTERS_H
#define CHARACTERS_H

class Characters {
private:
	GLuint character;
public:
	GLuint getCharacter(GLfloat xPos, GLfloat yPos, GLfloat size,GLfloat red, GLfloat green, GLfloat blue, char inputCharacter);
	void drawCharacters(GLfloat xPos, GLfloat yPos, GLfloat size,GLfloat red, GLfloat green, GLfloat blue, string sentence); //last character in sentence must be &
	void drawNumber(GLfloat xPos, GLfloat yPos, GLfloat size,GLfloat red, GLfloat green, GLfloat blue, string sentence); //The same as draw characthers but, this function
																														 //does not need & at the end. Max 20 numbers!
};

#endif /* CHARACTERS_H */