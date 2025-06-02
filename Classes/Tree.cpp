#include "Tree.h"

void Tree::GainEnergy()
{
	energy += 20;
	std::cout << "Photosynthesis! " << name << " now has " << energy << " energy!\n";
}

void Tree::GrowLeaves()
{
	leaves += 5;
	std::cout << name << " grew 5 leaves!" << std::endl;
}
