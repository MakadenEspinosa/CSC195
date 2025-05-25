#pragma once
#include "Food.h"
class Fruit : public Food
{public :
	Fruit() {
		num_of_seeds = 0;
	}
	Fruit(int calories, int numSeeds) : Food(calories) {
		num_of_seeds = numSeeds;
	}
	void Consume() override; //CTR . to auto create 
protected:
	int num_of_seeds;

};

