#pragma once
#include "Food.h"
class Candy : public Food
{
public :
	void Consume() override;
protected :
	bool hasNuts = false;
};

