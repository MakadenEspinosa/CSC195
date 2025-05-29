#include "Database.h"
#include "Tree.h"
#include "Dog.h"

void Database::DisplayAll()
{
	for (int i = 0; i < objects.size(); i++)
		objects[i]->Write(std::cout);
}

void Database::Display(Organism::kingdom type)
{
	for (int i = 0; i < objects.size(); i++) {
		if (objects[i]->getKingdom() == type)
			objects[i]->Write(std::cout);
	}
}

void Database::GainAllEnergy()
{
	for (int i = 0; i < objects.size(); i++) {
		objects[i]->GainEnergy();
	}
}
