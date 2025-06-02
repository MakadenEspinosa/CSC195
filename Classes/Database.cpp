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

void Database::GainBones()
{
	for (int i = 0; i < objects.size(); i++) {
		if (objects[i]->getKingdom() == Organism::kingdom::ANIMALIA)
			dynamic_cast<Dog*>(objects[i])->GainBone();
	}
}

void Database::GainLeaves()
{
	for (int i = 0; i < objects.size(); i++) {
		if (objects[i]->getKingdom() == Organism::kingdom::PLANTAE)
			dynamic_cast<Tree*>(objects[i])->GrowLeaves();
	}
}
