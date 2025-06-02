#include "Fraction.h"
#include <iostream>
#include <string>

mathlib::Fraction::Fraction(int num, int den)
{
	SetDenominator(1);
	SetNumerator(1);
	if (SetDenominator(den)) {
		SetNumerator(num);
	}
}

int mathlib::Fraction::GetCommonDenominator(int one, int two)
{
	if (one == two)
		return one;
	return one * two;
}

bool mathlib::Fraction::SetDenominator(int den)
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

bool mathlib::Fraction::SetDenominator(long den)
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

bool mathlib::Fraction::SetDenominator(unsigned int den)
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

void mathlib::Fraction::SetNumerator(int num)
{
	numerator = num;
}

void mathlib::Fraction::SetNumerator(long num) {
	numerator = num;
}

void mathlib::Fraction::SetNumerator(unsigned int num) {
	numerator = num;
}

int mathlib::Fraction::getGreatestCommonDivisor(int num, int den)
{
	if (den == 0)
		return num;
	return getGreatestCommonDivisor(den, num % den);
}

void mathlib::Fraction::SimplifyFraction()
{
	int greatestCommonDivis = getGreatestCommonDivisor(numerator, denominator);
	SetNumerator(numerator / greatestCommonDivis);
	SetDenominator(denominator / greatestCommonDivis);
}

double mathlib::Fraction::toDouble()
{
	return (numerator + 0.0)/(denominator*1.0);
}



mathlib::Fraction mathlib::Fraction::operator+(mathlib::Fraction& fraction)
{
	Fraction newFrac;
	int newDenominator = GetCommonDenominator(this->GetDenominator(), fraction.GetDenominator());
	int newNumerator = 0;
	if (denominator != newDenominator) {
		newNumerator += numerator * (newDenominator / denominator);
	} else {
		newNumerator += numerator;
	}

	if (fraction.GetDenominator() != newDenominator) {
		newNumerator += fraction.GetNumerator() * (newDenominator / fraction.GetDenominator());
	}
	else {
		newNumerator += fraction.GetNumerator();
	}
	newFrac.SetDenominator(newDenominator);
	newFrac.SetNumerator(newNumerator);
	newFrac.SimplifyFraction();
	return newFrac;
}

mathlib::Fraction mathlib::Fraction::operator-(Fraction& fraction)
{
	Fraction newFrac;
	int newNumerator = 0;
	int newDenominator = GetCommonDenominator(this->GetDenominator(), fraction.GetDenominator());
	if (denominator != newDenominator) {
		newNumerator += numerator * (newDenominator / denominator);
	}
	else {
		newNumerator += numerator;
	}

	if (fraction.GetDenominator() != newDenominator) {
		newNumerator -= fraction.GetNumerator() * (newDenominator / fraction.GetDenominator());
	}
	else {
		newNumerator -= fraction.GetNumerator();
	}
	newFrac.SetDenominator(newDenominator);
	newFrac.SetNumerator(newNumerator);
	newFrac.SimplifyFraction();
	return newFrac;
}

mathlib::Fraction mathlib::Fraction::operator*(Fraction& fraction)
{
	mathlib::Fraction newFrac = Fraction(numerator * fraction.GetNumerator(), denominator * fraction.GetDenominator());
	newFrac.SimplifyFraction();
	return newFrac;
}

mathlib::Fraction mathlib::Fraction::operator/(Fraction& fraction)
{
	mathlib::Fraction newFrac = Fraction(numerator * fraction.GetDenominator(), denominator * fraction.GetNumerator());
	newFrac.SimplifyFraction();
	return newFrac;
}

bool mathlib::Fraction::operator !=(Fraction& fraction)
{
	SimplifyFraction();
	fraction.SimplifyFraction();
	if (numerator != fraction.GetNumerator() || denominator != fraction.GetDenominator())
		return true;
	return false;
}

bool mathlib::Fraction::operator==(Fraction& fraction)
{
	SimplifyFraction();
	fraction.SimplifyFraction();
	if (numerator == fraction.GetNumerator() && denominator == fraction.GetDenominator())
		return true;
	return false;
}

bool mathlib::Fraction::operator<(Fraction& fraction)
{
	if (toDouble() < fraction.toDouble())
		return true;
	return false;
}

bool mathlib::Fraction::operator<=(Fraction& fraction)
{
	if (toDouble() <= fraction.toDouble())
		return true;
	return false;
}

bool mathlib::Fraction::operator>(Fraction& fraction)
{
	if (toDouble() > fraction.toDouble())
		return true;
	return false;
}

bool mathlib::Fraction::operator>=(Fraction& fraction)
{
	if (toDouble() >= fraction.toDouble())
		return true;
	return false;
}

std::ostream& mathlib::operator<<(std::ostream& ostream, mathlib::Fraction& fraction)
{
	return ostream << fraction.numerator << "/" << fraction.denominator;
}

void mathlib::operator>>(std::istream& istream, mathlib::Fraction& fraction)
{
	std::string input;
	istream >> input;
	int num = std::stoi((input.substr(0, input.find("/"))));
	int den = std::stoi((input.substr(input.find("/") + 1)));
	fraction.SetNumerator(num);
	fraction.SetDenominator(den);
}
