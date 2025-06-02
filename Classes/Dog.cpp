#include "Dog.h"

void Dog::GainBone()
{
	dogBones += 1;
	std::cout << name << " Gains one bone!" << std:: endl;
}

void Dog::GainEnergy()
{
	energy += 5;
	std::cout << name << " munches on a bone and now has " << energy << " energy!\n";
}
