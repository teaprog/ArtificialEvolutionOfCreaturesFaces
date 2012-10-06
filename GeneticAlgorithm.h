#include "Face.h"

#include <vector>
using std::vector;

#include <string>
using std::string;

#ifndef GENETIC_ALGORITHM_H
#define GENETIC_ALGORITHM_H

class GeneticAlgorithm {
	private:
		double &mutationProbability;

		vector<Face*> &faces;

		string performMutation(string geneticString);
		string performCrossover(string geneticString, int thisIndex);
	public:
		GeneticAlgorithm(vector<Face*> &faces, double &mutationProbability);
		void nextGeneration();
};

#endif /* GENETIC_ALGORITHM_H */