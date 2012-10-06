#include <SDL_opengl.h>
#include <string>
using std::string;

#ifndef DECODER_H
#define DECODER_H

class Decoder {
	private:
		string sHeadWidth;
		string sHeadHeight;
		string sHeadRedColor;
		string sHeadGreenColor;
		string sHeadBlueColor;
		string sEyeWidth;
		string sEyeHeight;
		string sEyeDistanceFromHeadCenter;
		string sEyeDistanceBetweenEyes;
		string sEyeRedColor;
		string sEyeGreenColor;
		string sEyeBlueColor;
		string sEyebrowWidth;
		string sEyebrowHeight;
		string sEyebrowDistanceFromEyes;
		string sEyebrowRedColor;
		string sEyebrowGreenColor;
		string sEyebrowBlueColor;
		string sEarWidth;
		string sEarHeight;
		string sEarDistanceFromHeadCenter;
		string sEarDistanceBetweenEars;
		string sEarRedColor;
		string sEarGreenColor;
		string sEarBlueColor;
		string sNoseWidth;
		string sNoseHeight;
		string sNoseDistanceFromHeadCenter;
		string sNoseRedColor;
		string sNoseGreenColor;
		string sNoseBlueColor;
		string sMouthWidth;
		string sMouthHeight;
		string sMouthDistanceFromheadCenter;
		string sMouthRedColor;
		string sMouthGreenColor;
		string sMouthBlueColor;

		string geneticString;
		void createInitialGeneticString();
		int decodeGeneticCode(string geneticCode);
	public:
		Decoder();
		string getGeneticString();
		void setGeneticString(string _geneticString);
		void resetGeneticString();

		GLfloat getHeadWidth();
		GLfloat getHeadHeight();
		GLfloat getHeadRedColor();
		GLfloat getHeadGreenColor();
		GLfloat getHeadBlueColor();
		GLfloat getEyeWidth();
		GLfloat getEyeHeight();
		GLfloat getEyeDistanceFromHeadCenter();
		GLfloat getEyeDistanceBetweenEyes();
		GLfloat getEyeRedColor();
		GLfloat getEyeGreenColor();
		GLfloat getEyeBlueColor();
		GLfloat getEyebrowWidth();
		GLfloat getEyebrowHeight();
		GLfloat getEyebrowDistanceFromEyes();
		GLfloat getEyebrowRedColor();
		GLfloat getEyebrowGreenColor();
		GLfloat getEyebrowBlueColor();
		GLfloat getEarWidth();
		GLfloat getEarHeight();
		GLfloat getEarDistanceFromHeadCenter();
		GLfloat getEarDistanceBetweenEars();
		GLfloat getEarRedColor();
		GLfloat getEarGreenColor();
		GLfloat getEarBlueColor();
		GLfloat getNoseWidth();
		GLfloat getNoseHeight();
		GLfloat getNoseDistanceFromHeadCenter();
		GLfloat getNoseRedColor();
		GLfloat getNoseGreenColor();
		GLfloat getNoseBlueColor();
		GLfloat getMouthWidth();
		GLfloat getMouthHeight();
		GLfloat getMouthDistanceFromheadCenter();
		GLfloat getMouthRedColor();
		GLfloat getMouthGreenColor();
		GLfloat getMouthBlueColor();
};

#endif /* DECODER_H */