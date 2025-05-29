#include "Dog.h"

void Dog::GainEnergy()
{
	energy += 5;
	std::cout << "The dog munches on a bone and now has " << energy << "energy!\n";
}
