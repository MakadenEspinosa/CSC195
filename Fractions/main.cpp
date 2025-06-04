#include <iostream>
#include "Fraction.h"
using namespace std;
using namespace mathlib;
int main() {
	//Simplify
	mathlib::Fraction<int> fraction1 = mathlib::Fraction<int>(2, 4);
	fraction1.SimplifyFraction();
	cout << fraction1 << endl;

	//toDouble
	cout << fraction1<< " as double: " << fraction1.toDouble() << endl;

	//addition
	mathlib::Fraction<int> fraction2 = mathlib::Fraction<int>(5, 9);
	mathlib::Fraction<int> fraction3 = fraction1 + fraction2;
	
	cout <<fraction1 << " + " << fraction2 << " = " << fraction3 << endl;

	//subtracction
	fraction2 = mathlib::Fraction<int>(38, 36);
	fraction1 = fraction3-fraction2;

	cout << fraction3 << " - " << fraction2 << " = " << fraction1 << endl;

	//multiplication
	fraction1 = mathlib::Fraction<int>(2, 7);
	fraction2 = mathlib::Fraction<int>(5, 10);
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

	//Still here? Well if you wanted the test code from Canvas here it is
	Fraction<int> fraction4{15, 5};
	std::cout << fraction4 << std::endl;

	Fraction<int> fraction5{ 15, 6 };
	fraction2.SimplifyFraction();
	std::cout << fraction2 << std::endl;

	std::cout << fraction4 << " == " << fraction5 << " result: " << (fraction1 == fraction5) << std::endl;
	std::cout << fraction4 << " > " << fraction5 << " result: " << (fraction4 > fraction5) << std::endl;
	Fraction<int> fr7 = (fraction4 + fraction5);
	Fraction<int> fr8 = (fraction4 * fraction5);
	std::cout << fraction4 << " + " << fraction5 << " result: " << fr7 << std::endl;

	std::cout << fraction4 << " * " << fraction5 << " result: " << fr8 << std::endl;

	Fraction<int> fraction6;
	std::cout << "input fraction (numerator - denominator): \n";
	std::cin >> fraction6;
	std::cout << fraction6 << std::endl;
	std::cout << fraction6.toDouble() << std::endl;


	return 0;
}