#pragma once
#include <iostream>
#include <string>

namespace mathlib {
	template<typename T>
	class Fraction
	{
	private:
		T numerator;
		T denominator;
		int GetCommonDenominator(T one, T two);

	protected:
		bool SetDenominator(T den) {
			if (den == 0) {
				std::cout << "Error! Division by 0, Fraction has been set to 1/1." << std::endl;
				denominator = 1;
				numerator = 1;
				return false;
			}
			denominator = den;
			return true;
		}
		void SetNumerator(T num) { numerator = num; }

	public:
		Fraction() : numerator{ 1 }, denominator{ 1 } {}
		Fraction(T num, T den);

		T const GetDenominator() { return denominator; }
		T const GetNumerator() { return numerator; }


		int getGreatestCommonDivisor(T num, T den);
		void SimplifyFraction();
		double toDouble() { return (numerator + 0.0) / (denominator * 1.0); }

		Fraction<T> operator + (Fraction& fraction) {
			Fraction newFrac;
			int newDenominator = GetCommonDenominator(this->GetDenominator(), fraction.GetDenominator());
			int newNumerator = 0;
			if (denominator != newDenominator) {
				newNumerator += numerator * (newDenominator / denominator);
			}
			else {
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

		Fraction<T> operator - (Fraction& fraction) {
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
		Fraction<T> operator * (Fraction& fraction) {
			mathlib::Fraction<T> newFrac = Fraction(numerator * fraction.GetNumerator(), denominator * fraction.GetDenominator());
			newFrac.SimplifyFraction();
			return newFrac;
		}
		Fraction<T> operator / (Fraction& fraction) {
			mathlib::Fraction<T> newFrac = Fraction(numerator * fraction.GetDenominator(), denominator * fraction.GetNumerator());
			newFrac.SimplifyFraction();
			return newFrac;
		}

		bool operator != (Fraction& fraction) {
			SimplifyFraction();
			fraction.SimplifyFraction();
			if (numerator != fraction.GetNumerator() || denominator != fraction.GetDenominator())
				return true;
			return false;
		}
		bool operator == (Fraction& fraction) {
			SimplifyFraction();
			fraction.SimplifyFraction();
			if (numerator == fraction.GetNumerator() && denominator == fraction.GetDenominator())
				return true;
			return false;
		}
		bool operator < (Fraction& fraction) {
			if (toDouble() < fraction.toDouble())
				return true;
			return false;
		}
		bool operator <= (Fraction& fraction) {
			if (toDouble() <= fraction.toDouble())
				return true;
			return false;
		}
		bool operator > (Fraction& fraction) {
			if (toDouble() > fraction.toDouble())
				return true;
			return false;
		}
		bool operator >= (Fraction& fraction) {
			if (toDouble() >= fraction.toDouble())
				return true;
			return false;
		}

		friend std::ostream& operator << (std::ostream& ostream, mathlib::Fraction<T>& fraction)
		{
			return ostream << fraction.numerator << "/" << fraction.denominator;
		}

		friend void operator >> (std::istream& istream, mathlib::Fraction<T>& fraction) {
			std::string input;
			istream >> input;
			int num = std::stoi((input.substr(0, input.find("/"))));
			int den = std::stoi((input.substr(input.find("/") + 1)));
			fraction.SetNumerator(num);
			fraction.SetDenominator(den);
		}
	};
}

