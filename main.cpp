/**
* Title: Artificial Evolution
* Description:	Artificial evolution of creatures faces.
*				All creatures start with the same genes. Then the population is divided into four groups.
*				Creatures can only interbreed with beings that are in their own group.
* Porject started: 30.07.12
* Author: teaprog
*/

#include <SDL.h>
#include <SDL_opengl.h>
#include <iostream>
using namespace std;

#include "Renderer.h"
#include "FaceMaker.h"
#include "GeneticAlgorithm.h"
#include "InfoAndOptionPanel.h"

int screenWidth = 1200;
int screenHeight = 770;
SDL_Event event;

int generationNumber = 0;
int maxGenerationsPerSecond = 60;
bool isPlay = false;
bool isPause = true;
bool isStop = false;
const double INITIAL_MUTATION_PROBABILITY = 0.0001;
double mutationProbability = INITIAL_MUTATION_PROBABILITY;

GLfloat deltaX = (screenWidth - 200) / 8.0f;
GLfloat deltaY = screenHeight / 8.0f;

FaceMaker faceMakerGroupOne(4, 4, deltaX / 2.0f, deltaY / 2.0f, deltaX, deltaY);
GeneticAlgorithm geneticAlgorithmGroupOne(*faceMakerGroupOne.getFaces(), mutationProbability);

FaceMaker faceMakerGroupTwo(4, 4, deltaX / 2.0f + deltaX * 4, deltaY / 2.0f, deltaX, deltaY);
GeneticAlgorithm geneticAlgorithmGroupTwo(*faceMakerGroupTwo.getFaces(), mutationProbability);

FaceMaker faceMakerGroupThree(4, 4, deltaX / 2.0f, deltaY / 2.0f + deltaY * 4, deltaX, deltaY);
GeneticAlgorithm geneticAlgorithmGroupThree(*faceMakerGroupThree.getFaces(), mutationProbability);

FaceMaker faceMakerGroupFour(4, 4, deltaX / 2.0f + deltaX * 4, deltaY / 2.0f + deltaY * 4, deltaX, deltaY);
GeneticAlgorithm geneticAlgorithmGroupFour(*faceMakerGroupFour.getFaces(), mutationProbability);

InfoAndOptionPanel infoAndOptionPanel(screenWidth - 200, 0.0f, 200.0f, screenHeight, &generationNumber, &event, &isPlay, &isPause, &isStop, &mutationProbability);
Renderer renderer(infoAndOptionPanel, *faceMakerGroupOne.getFaces(), *faceMakerGroupTwo.getFaces(), *faceMakerGroupThree.getFaces(), *faceMakerGroupFour.getFaces(), screenWidth - 200, screenHeight);

void init() {
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_WM_SetCaption("Artificial Evolution", 0);
	SDL_putenv("SDL_VIDEO_WINDOW_POS=center");
	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 4);
	SDL_SetVideoMode(screenWidth, screenHeight, 32, SDL_OPENGL);

	srand(SDL_GetTicks());

	glViewport(0, 0, screenWidth, screenHeight);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, screenWidth, screenHeight, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	init();

	Uint32 time;
	bool quit = false;
	while (!quit) {
		time = SDL_GetTicks();

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				quit = true;
		}

		renderer.display();
		if (isPlay) {
			geneticAlgorithmGroupOne.nextGeneration();
			geneticAlgorithmGroupTwo.nextGeneration();
			geneticAlgorithmGroupThree.nextGeneration();
			geneticAlgorithmGroupFour.nextGeneration();
			generationNumber++;
		}
		else if (isStop) {
			faceMakerGroupOne.resetFaces();
			faceMakerGroupTwo.resetFaces();
			faceMakerGroupThree.resetFaces();
			faceMakerGroupFour.resetFaces();
			generationNumber = 0;
			mutationProbability = INITIAL_MUTATION_PROBABILITY;

			isStop = false;
			isPause = true;
		}

		while (SDL_GetTicks() - time < 1000 / maxGenerationsPerSecond);
	}

	return 0;
}