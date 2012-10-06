#include <SDL.h>
#include <SDL_opengl.h>

#include "Face.h"
#include "Characters.h"

#ifndef INFO_AND_OPTION_PANEL
#define INFO_AND_OPTION_PANEL

class InfoAndOptionPanel {
	private:
		GLfloat xPos;
		GLfloat yPos;
		GLfloat width;
		GLfloat height;
		int* generation;
		SDL_Event* event;
		bool* isPlay;
		bool* isPause;
		bool* isStop;
		double* mutationProbability;
		GLfloat deltaPlayColor;
		GLfloat deltaPauseColor;
		GLfloat deltaStopColor;
		GLfloat deltaSliderColor;

		Characters characters;

		Face *face;
		void drawInitialFace();
		void drawGenerationNumber();
		void drawStartButton();
		void drawPauseButon();
		void drawStopButton();
		void drawMutationProbabilitySlider();
	public:
		InfoAndOptionPanel(GLfloat xPos, GLfloat yPos, GLfloat width, GLfloat height, int* generation, SDL_Event* event, bool* isPlay, bool* isPause, bool* isStop, double* mutationProbability);
		~InfoAndOptionPanel();
		void drawInfoAndOptionPanel();
};

#endif /* INFO_AND_OPTION_PANEL */