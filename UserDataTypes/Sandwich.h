#pragma once
#include <iostream>
enum Meat
{
	Chicken = 5, // The '=' changes the starting value of order in the enum
	Prawns,
	Pastrami
};

struct Sandwich
{
public:
	std::string bread;
	bool isDelicious;
	Meat meat;

private:
	float price;

public:
	void setPrice(float value);

		void PrintPrice();
};
