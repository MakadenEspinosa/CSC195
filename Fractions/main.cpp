#include <iostream>
#include "Fraction.h"
using namespace std;
int main() {
	//Simplify
	mathlib::Fraction fraction1 = mathlib::Fraction(2, 4);
	fraction1.SimplifyFraction();
	cout << fraction1 << endl;

	//toDouble
	cout << fraction1<< " as double: " << fraction1.toDouble() << endl;

	//addition
	mathlib::Fraction fraction2 = mathlib::Fraction(5, 9);
	mathlib::Fraction fraction3 = fraction1 + fraction2;
	
	cout <<fraction1 << " + " << fraction2 << " = " << fraction3 << endl;

	//subtracction
	fraction2 = mathlib::Fraction(38, 36);
	fraction1 = fraction3-fraction2;

	cout << fraction3 << " - " << fraction2 << " = " << fraction1 << endl;

	//multiplication
	fraction1 = mathlib::Fraction(2, 7);
	fraction2 = mathlib::Fraction(5, 10);
	fraction3 = fraction1 * fraction2;

	cout << fraction1 << " * " << fraction2 << " = " << fraction3 << endl;

	//division
	fraction3 = fraction2 / fraction1;

	cout << fraction2 << " / " << fraction1 << " = " << fraction3 << endl;

	// !=
	cout << fraction1 << " != " << fraction2 << ": " << (fraction1 != fraction2) << endl;
	// ==
	cout << fraction1 << " == " << fraction2 << ": " << (fraction1 == fraction2) << endl;
	// <
	cout << fraction1 << " < " << fraction2 << ": " << (fraction1 < fraction2) << endl;
	// <=
	cout << fraction1 << " <= " << fraction2 << ": " << (fraction1 <= fraction2) << endl;
	// >
	cout << fraction1 << " > " << fraction2 << ": " << (fraction1 > fraction2) << endl;
	// >=
	cout << fraction1 << " >= " << fraction2 << ": " << (fraction1 >= fraction2) << endl;

	//cin >> fraction
	cout << "Enter a fraction (format as \"Numerator/Denominator\"): ";
	cin >> fraction3;

	cout << fraction3;

	return 0;
}