#pragma once
#include <iostream>
using namespace std;
class Food
{
public: 
	// Constructor
	// allocating memory for data members
	//initializing data members w/ a difualt value
	//If we don't create one manually, one is created for us
	/*Food() {
		SetCalories(0);
	}*/

	Food() : m_calories(0) {}

	//Constructor w/ parameters
	Food(int calories) {
		SetCalories(calories);
	}

	~Food() {
		//delete m_p;
	}
	virtual void Consume() = 0;
	int GetCalories() { return m_calories; }
	void SetCalories(int calories) { m_calories = calories; }
protected :
	int m_calories;
};

