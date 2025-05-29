#include "Tree.h"

void Tree::GainEnergy()
{
	energy += 20;
	std::cout << "Photosynthesis! The tree now has " << energy << " energy!\n";
}

void Tree::GrowLeaves()
{
	leaves += 5;
	std::cout << "Tree grew 5 leaves!" << std::endl;
}
