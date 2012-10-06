#include <vector>
using std::vector;

#include "InfoAndOptionPanel.h"
#include "Face.h"

#ifndef RENDERER_H
#define RENDERER_H

class Renderer {
	private:
		int width;
		int height;

		InfoAndOptionPanel &infoAndOptionPanel;

		vector<Face*> &facesOne;
		vector<Face*> &facesTwo;
		vector<Face*> &facesThree;
		vector<Face*> &facesFour;

		void drawPopulationBorder();
	public:
		Renderer(InfoAndOptionPanel &infoAndOptionPanel, vector<Face*> &facesOne, vector<Face*> &facesTwo, vector<Face*> &facesThree, vector<Face*> &facesFour, int width, int height);

		void display();
};

#endif /* RENDERER_H */