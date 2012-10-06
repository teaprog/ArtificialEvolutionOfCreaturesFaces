#include "GeneticAlgorithm.h"

GeneticAlgorithm::GeneticAlgorithm(vector<Face*> &faces, double &mutationProbability) : faces(faces), mutationProbability(mutationProbability) {}

void GeneticAlgorithm::nextGeneration() {
	string tempString;
	for (size_t i = 0; i < faces.size(); i++) {
		tempString = faces.at(i)->getGeneticString();
		tempString = performCrossover(tempString, i);
		tempString = performMutation(tempString);
		faces.at(i)->setGeneticString(tempString);
	}
}

string GeneticAlgorithm::performMutation(string geneticString) {
	double numMutations = mutationProbability * geneticString.length();
	double rest = numMutations - ((int)numMutations);
	rest = ((double)(rand() / (RAND_MAX + 1.0)) < rest) ? 1.0 : 0.0;
	numMutations += rest;

	for (int i = 0; i < (int)numMutations; i++) {
		int index = rand() % geneticString.length();
		geneticString[index] = (geneticString[index] == '1') ? '0' : '1';
		
	}

	return geneticString;
}

string GeneticAlgorithm::performCrossover(string geneticString, int thisIndex) {
	string returnValue = geneticString;

	int partnerIndex = rand() % faces.size();
	if (partnerIndex == thisIndex) {
		if (partnerIndex > 0)
			partnerIndex--;
		else
			partnerIndex++;
	}

	string partnerString = faces.at(partnerIndex)->getGeneticString();
	int splitIndex = rand() % partnerString.length();
	returnValue = geneticString.substr(0, splitIndex) + partnerString.substr(splitIndex, partnerString.length());

	return returnValue;
}