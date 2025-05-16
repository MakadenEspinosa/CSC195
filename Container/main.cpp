#include <iostream>
#include <array>
#include <list>
using namespace std;

int main() {
	//using built-in array
	int numbers[5] = { 1, 2, 3, 4, 5 };

	cout << "Third element: " << numbers[2] << endl;

	//Undefined behavoir - returns random value from accessed memory
	cout << "Out of bound element: " << numbers[7] << endl;

	numbers[1] = 25;

	//iterating though array
	cout << "All elements: ";
	for (int i = 0; i < 5; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;

	int size = sizeof(numbers) / sizeof(int); // sizeof() -> byte size
	//numbers.size() -- limited functionality of built-in array

	cout << "Adress of First Element: " << numbers << endl;

	//fixed length at compile time
	// no built-in methods for common operations
	// fast access to elements, easy to set up

	//STL array
	cout << endl << "STL Array" << endl;

	array<string, 4> animals = { "mouse", "tiger", "snake", "penguin" };

	cout << "third element " << animals[2] << endl;

	cout << "Size of array: " << animals.size() << endl;

	//iterating through array with for each
	for (string ani: animals) {
		cout << ani << " ";
	}
	cout << endl;

	//cout << "Last element: " << animals.end() << endl;

	//fixed size with STL algorithm compatibility
	//out of bounds exception

	//STL Lists
	cout << "STL List" << endl;

	list<float> height = { 5.6f, 6.3f, 4.2f };

	cout << "Size of list: " << height.size() << endl;

	height.push_front(2.3f);
	height.push_back(7.3f);

	height.sort();

	//iterating through list
	cout << "All elements: ";
	for (float hei : height)
	{
		cout << hei << " ";
	}
	cout << endl;

	//resizeable container - helpful for frequent & efficient insertion & deletion
	//higher memory overhead (pointer for each element)
	// works well iterators and other STL compatibility

}