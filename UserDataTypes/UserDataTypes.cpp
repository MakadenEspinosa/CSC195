// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sandwich.h"

int main()
{
	// typedef float salary; -- Traditional C++ way
	using salary = float;
	//typedef float salary;
	salary wage_butcher = 12.4f;
	salary wage_cleaner = 9.5f;
	salary wage_chef = 15.8f;

	Sandwich bbq;

	bbq.bread = "Honey Rye";
	//bbq.price = 25.0f; -- price is private now
	bbq.setPrice(30.0f);
	bbq.isDelicious = true;
	bbq.meat = Meat::Chicken;

	//PrintPrice(bbq); --Procedual Programming = member functions separate from 
	bbq.PrintPrice(); // OOP 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
