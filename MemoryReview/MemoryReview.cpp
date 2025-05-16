#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& number) {
	number = number * number;

}

void Double(int* p) {
	*p = *p * 2;
}

int main()
{
	// ** REFERENCE **
	//  
	// declare an int variable and set the value to some number (less than 1
	int example = 1;
	// declare a int reference and set it to the int variable above
	int& ex2 = example;

	// output the int variable
	cout << ex2 << endl;

	// set the int reference to some number
	ex2 = 5;
	// output the int variable
	cout << example << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	/*
	* The int reference is another "example" int so when the reference is changed all values that are derived from that reference are changed
	* ex2 will always = example as long as they have the same reference.
	*/

	// output the address of the int variable
	cout << &example << endl;
	// output the address of the int reference
	cout << &ex2 << endl;
	// are the addresses the same or different? (insert answer)
	/*
	* They have the same addresses since they are they share the same reference to memory.
	*/

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	Square(example);
	// output the int variable to the console
	cout << example << endl;
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section
	int* point = nullptr;
	point = &example;
	// output the value of the pointer
	cout << point << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	/*
	* The pointer is pointing to the same address as the int variable, and the int reference.
	*/
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *point << endl;
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(point);

	// output the dereference pointer
	cout << *point << endl;
	// output the int variable created in the REFERENCE section
	cout << example << endl;
	// did the int variable's value change when using the pointer?
	/*
	* Yes the int variable's value changed when using the pointer.
	* Similar to passing by reference, a pointer can change the original int value since they will share the same address.
	*/

}