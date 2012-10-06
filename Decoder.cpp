#include "Decoder.h"

#include <cmath>

Decoder::Decoder() {
	createInitialGeneticString();
}

void Decoder::createInitialGeneticString() {
	sHeadWidth = "11111111111111100000";
	sHeadHeight = "11111111111111111111";
	sHeadRedColor = "1111111";
	sHeadGreenColor = "1111100";
	sHeadBlueColor = "1111000";
	sEyeWidth = "11111100";
	sEyeHeight = "11100000";
	sEyeDistanceFromHeadCenter = "1111111111000000000000000000000000000000000000000000000";
	sEyeDistanceBetweenEyes = "111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000";
	sEyeRedColor = "1111111";
	sEyeGreenColor = "1111111";
	sEyeBlueColor = "1111111";
	sEyebrowWidth = "1111111111000";
	sEyebrowHeight = "110000";
	sEyebrowDistanceFromEyes = "11000";
	sEyebrowRedColor = "0000000";
	sEyebrowGreenColor = "0000000";
	sEyebrowBlueColor = "0000000";
	sEarWidth = "10000000";
	sEarHeight = "111111000000";
	sEarDistanceFromHeadCenter = "111111111111111111111111111111111110000000000000000000000000000000000000000";
	sEarDistanceBetweenEars = "111111111111111111111111111111111111111100000000000000000000000000000000000";
	sEarRedColor = "1111111";
	sEarGreenColor = "1111100";
	sEarBlueColor = "1111000";
	sNoseWidth = "1110000000000";
	sNoseHeight = "1111111100000";
	sNoseDistanceFromHeadCenter = "111111100000000";
	sNoseRedColor = "1111111";
	sNoseGreenColor = "1111100";
	sNoseBlueColor = "1111000";
	sMouthWidth = "1111111111111110000000000000000";
	sMouthHeight = "0000000";
	sMouthDistanceFromheadCenter = "11111111110000000000000";
	sMouthRedColor = "1111110";
	sMouthGreenColor = "1100000";
	sMouthBlueColor = "1100000";

	geneticString = sHeadWidth +
					sHeadHeight +
					sHeadRedColor +
					sHeadGreenColor +
					sHeadBlueColor +
					sEyeWidth +
					sEyeHeight +
					sEyeDistanceFromHeadCenter +
					sEyeDistanceBetweenEyes +
					sEyeRedColor +
					sEyeGreenColor +
					sEyeBlueColor +
					sEyebrowWidth +
					sEyebrowHeight +
					sEyebrowDistanceFromEyes +
					sEyebrowRedColor +
					sEyebrowGreenColor +
					sEyebrowBlueColor +
					sEarWidth +
					sEarHeight +
					sEarDistanceFromHeadCenter +
					sEarDistanceBetweenEars +
					sEarRedColor +
					sEarGreenColor +
					sEarBlueColor +
					sNoseWidth +
					sNoseHeight +
					sNoseDistanceFromHeadCenter +
					sNoseRedColor +
					sNoseGreenColor +
					sNoseBlueColor +
					sMouthWidth +
					sMouthHeight +
					sMouthDistanceFromheadCenter +
					sMouthRedColor +
					sMouthGreenColor +
					sMouthBlueColor;
}

string Decoder::getGeneticString() {
	return geneticString;
}

void Decoder::setGeneticString(string _geneticString) {
	geneticString = _geneticString;

	int carretPos = 0;

	sHeadWidth = geneticString.substr(carretPos, sHeadWidth.length());
	carretPos += sHeadWidth.length();

	sHeadHeight = geneticString.substr(carretPos, sHeadHeight.length());
	carretPos += sHeadHeight.length();

	sHeadRedColor = geneticString.substr(carretPos, sHeadRedColor.length());
	carretPos += sHeadRedColor.length();

	sHeadGreenColor = geneticString.substr(carretPos, sHeadGreenColor.length());
	carretPos += sHeadGreenColor.length();

	sHeadBlueColor = geneticString.substr(carretPos, sHeadBlueColor.length());
	carretPos += sHeadBlueColor.length();

	sEyeWidth = geneticString.substr(carretPos, sEyeWidth.length());
	carretPos += sEyeWidth.length();

	sEyeHeight = geneticString.substr(carretPos, sEyeHeight.length());
	carretPos += sEyeHeight.length();

	sEyeDistanceFromHeadCenter = geneticString.substr(carretPos, sEyeDistanceFromHeadCenter.length());
	carretPos += sEyeDistanceFromHeadCenter.length();

	sEyeDistanceBetweenEyes = geneticString.substr(carretPos, sEyeDistanceBetweenEyes.length());
	carretPos += sEyeDistanceBetweenEyes.length();

	sEyeRedColor = geneticString.substr(carretPos, sEyeRedColor.length());
	carretPos += sEyeRedColor.length();

	sEyeGreenColor = geneticString.substr(carretPos, sEyeGreenColor.length());
	carretPos += sEyeGreenColor.length();

	sEyeBlueColor = geneticString.substr(carretPos, sEyeBlueColor.length());
	carretPos += sEyeBlueColor.length();

	sEyebrowWidth = geneticString.substr(carretPos, sEyebrowWidth.length());
	carretPos += sEyebrowWidth.length();

	sEyebrowHeight = geneticString.substr(carretPos, sEyebrowHeight.length());
	carretPos += sEyebrowHeight.length();

	sEyebrowDistanceFromEyes = geneticString.substr(carretPos, sEyebrowDistanceFromEyes.length());
	carretPos += sEyebrowDistanceFromEyes.length();

	sEyebrowRedColor = geneticString.substr(carretPos, sEyebrowRedColor.length());
	carretPos += sEyebrowRedColor.length();

	sEyebrowGreenColor = geneticString.substr(carretPos, sEyebrowGreenColor.length());
	carretPos += sEyebrowGreenColor.length();

	sEyebrowBlueColor = geneticString.substr(carretPos, sEyebrowBlueColor.length());
	carretPos += sEyebrowBlueColor.length();

	sEarWidth = geneticString.substr(carretPos, sEarWidth.length());
	carretPos += sEarWidth.length();

	sEarHeight = geneticString.substr(carretPos, sEarHeight.length());
	carretPos += sEarHeight.length();

	sEarDistanceFromHeadCenter = geneticString.substr(carretPos, sEarDistanceFromHeadCenter.length());
	carretPos += sEarDistanceFromHeadCenter.length();

	sEarDistanceBetweenEars = geneticString.substr(carretPos, sEarDistanceBetweenEars.length());
	carretPos += sEarDistanceBetweenEars.length();

	sEarRedColor = geneticString.substr(carretPos, sEarRedColor.length());
	carretPos += sEarRedColor.length();

	sEarGreenColor = geneticString.substr(carretPos, sEarGreenColor.length());
	carretPos += sEarGreenColor.length();

	sEarBlueColor = geneticString.substr(carretPos, sEarBlueColor.length());
	carretPos += sEarBlueColor.length();

	sNoseWidth = geneticString.substr(carretPos, sNoseWidth.length());
	carretPos += sNoseWidth.length();

	sNoseHeight = geneticString.substr(carretPos, sNoseHeight.length());
	carretPos += sNoseHeight.length();

	sNoseDistanceFromHeadCenter = geneticString.substr(carretPos, sNoseDistanceFromHeadCenter.length());
	carretPos += sNoseDistanceFromHeadCenter.length();

	sNoseRedColor = geneticString.substr(carretPos, sNoseRedColor.length());
	carretPos += sNoseRedColor.length();

	sNoseGreenColor = geneticString.substr(carretPos, sNoseGreenColor.length());
	carretPos += sNoseGreenColor.length();

	sNoseBlueColor = geneticString.substr(carretPos, sNoseBlueColor.length());
	carretPos += sNoseBlueColor.length();

	sMouthWidth = geneticString.substr(carretPos, sMouthWidth.length());
	carretPos += sMouthWidth.length();

	sMouthHeight = geneticString.substr(carretPos, sMouthHeight.length());
	carretPos += sMouthHeight.length();

	sMouthDistanceFromheadCenter = geneticString.substr(carretPos, sMouthDistanceFromheadCenter.length());
	carretPos += sMouthDistanceFromheadCenter.length();

	sMouthRedColor = geneticString.substr(carretPos, sMouthRedColor.length());
	carretPos += sMouthRedColor.length();

	sMouthGreenColor = geneticString.substr(carretPos, sMouthGreenColor.length());
	carretPos += sMouthGreenColor.length();

	sMouthBlueColor = geneticString.substr(carretPos, sMouthBlueColor.length());
	carretPos += sMouthBlueColor.length();
}

void Decoder::resetGeneticString() {
	createInitialGeneticString();
}

int Decoder::decodeGeneticCode(string geneticCode) {
	int value = 0;

	for (size_t i = 0; i < geneticCode.length(); i++) {
		if (geneticCode.at(i) == '1')
			value++;
	}

	return value;
}

GLfloat Decoder::getHeadWidth() {
	return 20.0f + decodeGeneticCode(sHeadWidth);
}

GLfloat Decoder::getHeadHeight() {
	return 20.0f + decodeGeneticCode(sHeadHeight);
}

GLfloat Decoder::getHeadRedColor() {
	return 0.3f + decodeGeneticCode(sHeadRedColor) / 10.0f;
}

GLfloat Decoder::getHeadGreenColor() {
	return 0.3f + decodeGeneticCode(sHeadGreenColor) / 10.0f;
}

GLfloat Decoder::getHeadBlueColor() {
	return 0.3f + decodeGeneticCode(sHeadBlueColor) / 10.0f;
}

GLfloat Decoder::getEyeWidth() {
	return 4.0f + decodeGeneticCode(sEyeWidth);
}

GLfloat Decoder::getEyeHeight() {
	return 4.0f + decodeGeneticCode(sEyeHeight);
}

GLfloat Decoder::getEyeDistanceFromHeadCenter() {
	return 0.0f + decodeGeneticCode(sEyeDistanceFromHeadCenter);
}

GLfloat Decoder::getEyeDistanceBetweenEyes() {
	return 0.0f + decodeGeneticCode(sEyeDistanceBetweenEyes);
}

GLfloat Decoder::getEyeRedColor() {
	return 0.3f + decodeGeneticCode(sEyeRedColor) / 10.0f;
}

GLfloat Decoder::getEyeGreenColor() {
	return 0.3f + decodeGeneticCode(sEyeGreenColor) / 10.0f;
}

GLfloat Decoder::getEyeBlueColor() {
	return 0.3f + decodeGeneticCode(sEyeBlueColor) / 10.0f;
}

GLfloat Decoder::getEyebrowWidth() {
	return 0.0f + decodeGeneticCode(sEyebrowWidth);
}

GLfloat Decoder::getEyebrowHeight() {
	return 0.0f + decodeGeneticCode(sEyebrowHeight);
}

GLfloat Decoder::getEyebrowDistanceFromEyes() {
	return 5.0f + decodeGeneticCode(sEyebrowDistanceFromEyes);
}

GLfloat Decoder::getEyebrowRedColor() {
	return 0.3f + decodeGeneticCode(sEyebrowRedColor) / 10.0f;
}

GLfloat Decoder::getEyebrowGreenColor() {
	return 0.3f + decodeGeneticCode(sEyebrowGreenColor) / 10.0f;
}

GLfloat Decoder::getEyebrowBlueColor() {
	return 0.3f + decodeGeneticCode(sEyebrowBlueColor) / 10.0f;
}

GLfloat Decoder::getEarWidth() {
	return 4.0f + decodeGeneticCode(sEarWidth);
}

GLfloat Decoder::getEarHeight() {
	return 4.0f + decodeGeneticCode(sEarHeight);
}

GLfloat Decoder::getEarDistanceFromHeadCenter() {
	return -20.0f + decodeGeneticCode(sEarDistanceFromHeadCenter);
}

GLfloat Decoder::getEarDistanceBetweenEars() {
	return 30.0f + decodeGeneticCode(sEarDistanceBetweenEars);
}

GLfloat Decoder::getEarRedColor() {
	return 0.3f + decodeGeneticCode(sEarRedColor) / 10.0f;
}

GLfloat Decoder::getEarGreenColor() {
	return 0.3f + decodeGeneticCode(sEarGreenColor) / 10.0f;
}

GLfloat Decoder::getEarBlueColor() {
	return 0.3f + decodeGeneticCode(sEarBlueColor) / 10.0f;
}

GLfloat Decoder::getNoseWidth() {
	return 2.0f + decodeGeneticCode(sNoseWidth);
}

GLfloat Decoder::getNoseHeight() {
	return 2.0f + decodeGeneticCode(sNoseHeight);
}

GLfloat Decoder::getNoseDistanceFromHeadCenter() {
	return -7.0f + decodeGeneticCode(sNoseDistanceFromHeadCenter);
}

GLfloat Decoder::getNoseRedColor() {
	return 0.3f + decodeGeneticCode(sNoseRedColor) / 10.0f;
}

GLfloat Decoder::getNoseGreenColor() {
	return 0.3f + decodeGeneticCode(sNoseGreenColor) / 10.0f;
}

GLfloat Decoder::getNoseBlueColor() {
	return 0.3f + decodeGeneticCode(sNoseBlueColor) / 10.0f;
}

GLfloat Decoder::getMouthWidth() {
	return 3.0f + decodeGeneticCode(sMouthWidth);
}

GLfloat Decoder::getMouthHeight() {
	return 3.0f + decodeGeneticCode(sMouthHeight);
}

GLfloat Decoder::getMouthDistanceFromheadCenter() {
	return -30.0f + decodeGeneticCode(sMouthDistanceFromheadCenter);
}

GLfloat Decoder::getMouthRedColor() {
	return 0.3f + decodeGeneticCode(sMouthRedColor) / 10.0f;
}

GLfloat Decoder::getMouthGreenColor() {
	return 0.3f + decodeGeneticCode(sMouthGreenColor) / 10.0f;
}

GLfloat Decoder::getMouthBlueColor() {
	return 0.3f + decodeGeneticCode(sMouthBlueColor) / 10.0f;
}