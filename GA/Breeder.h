#pragma once
#include <vector>
#include <algorithm>
#include <limits>
#include "GA_Random.h"

template <class Creature>
class Breeder
{
public:
	static std::vector<Creature> generateNextGeneration(std::vector<Creature>& currentPopulation);
private:
	static void normalizePopulationFittnesses(std::vector<Creature>& currentPopulation);
	static std::discrete_distribution<int> createSelectionRoulette(std::vector<Creature>& currentPopulation);

};
