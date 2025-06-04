#include "Fraction.h"
#include <iostream>
#include <string>

mathlib::Fraction<int>::Fraction(int num, int den)
{
	SetDenominator(1);
	SetNumerator(1);
	if (SetDenominator(den)) {
		SetNumerator(num);
	}
}

mathlib::Fraction<unsigned int>::Fraction(unsigned int num, unsigned int den)
{
	SetDenominator(1);
	SetNumerator(1);
	if (SetDenominator(den)) {
		SetNumerator(num);
	}
}

mathlib::Fraction<long>::Fraction(long num, long den)
{
	SetDenominator(1);
	SetNumerator(1);
	if (SetDenominator(den)) {
		SetNumerator(num);
	}
}

int mathlib::Fraction<int>::GetCommonDenominator(int one, int two)
{
	if (one == two)
		return one;
	return one * two;
}

/*bool mathlib::Fraction<int>::SetDenominator(int den)
{
	if (den == 0) {
		std::cout << "Error! Division by 0, Fraction has been set to 1/1." << std::endl;
		denominator = 1;
		numerator = 1;
		return false;
	}
	denominator = den;
	return true;
}

bool mathlib::Fraction<long>::SetDenominator(long den)
{
	if (den == 0) {
		std::cout << "Error! Division by 0, Fraction has been set to 1/1." << std::endl;
		denominator = 1;
		numerator = 1;
		return false;
	}
	denominator = den;
	return true;
}

bool mathlib::Fraction<unsigned int>::SetDenominator(unsigned int den)
{
	if (den == 0) {
		std::cout << "Error! Division by 0, Fraction has been set to 1/1." << std::endl;
		denominator = 1;
		numerator = 1;
		return false;
	}
	denominator = den;
	return true;
}*/

int mathlib::Fraction<int>::getGreatestCommonDivisor(int num, int den)
{
	if (den == 0)
		return num;
	return getGreatestCommonDivisor(den, num % den);
}

void mathlib::Fraction<int>::SimplifyFraction()
{
	int greatestCommonDivis = getGreatestCommonDivisor(numerator, denominator);
	SetNumerator(numerator / greatestCommonDivis);
	SetDenominator(denominator / greatestCommonDivis);
}
