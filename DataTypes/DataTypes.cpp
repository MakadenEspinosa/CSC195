// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Data Types Project" << std::endl;

		int i = 0; 
		long l = 0;
		bool b;

		std::cout << i << std::endl;
		std::cout << &i << std::endl; 
		std::cout << sizeof(i) << std::endl;
		std::cout << sizeof(l) << std::endl;
		std::cout << sizeof(b) << std::endl;

		// Data Type Conversion
		// implicit conversion
		// target data type has the cpacity (memory) to store the orignal value
		short numShrt = 5;
		int numInt = numShrt;

		//complicit conversion
		double numDbl = 654.321;
		int numIntDbl = numDbl; //traditional c++ way

		numIntDbl = static_cast<int>(numDbl); // modern c++ way

		std::cout << numIntDbl << std::endl;


}

