#pragma once
#include <iostream>

namespace mathlib {
	class Fraction
	{
	private:
		int numerator;
		int denominator;
		int GetCommonDenominator(int one, int two);

	protected:
		bool SetDenominator(int den);
		bool SetDenominator(long den);
		bool SetDenominator(unsigned int den);
		void SetNumerator(int num);
		void SetNumerator(long num);
		void SetNumerator(unsigned int num);

	public:
		Fraction() : numerator{ 1 }, denominator{ 1 } {};
		Fraction(int num, int den);

		int const GetDenominator() { return denominator; }
		int const GetNumerator() { return numerator; }


		int getGreatestCommonDivisor(int num, int den);
		void SimplifyFraction();
		double toDouble();

		Fraction operator + (Fraction& fraction);
		Fraction operator - (Fraction& fraction);
		Fraction operator * (Fraction& fraction);
		Fraction operator / (Fraction& fraction);

		bool operator != (Fraction& fraction);
		bool operator == (Fraction& fraction);
		bool operator < (Fraction& fraction);
		bool operator <= (Fraction& fraction);
		bool operator > (Fraction& fraction);
		bool operator >= (Fraction& fraction);



		friend std::ostream& operator << (std::ostream& osteam, mathlib::Fraction& fraction);
		friend void operator >> (std::istream& istream, mathlib::Fraction& fraction);
	};
}

