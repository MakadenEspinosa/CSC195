#include <iostream>
using namespace std;

void set(int& i) {// despite i being passed in as an int, the & gives the method a reference instead.
	i = 123;
}

void swap(int& a, int &b) {
	int temp = a;
	a = b;
	b = temp;

}

void swaper(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int i1 = 10;
	int i2 = 20;

	int& r = i1; //Datatype& gets passed the reference instead of creating a new spot in memory. 
	// r is now i1 but as a different name
	//REFERNCE* once declared needs to be assigned to a varible 

	//r = 30;

	//set(i1);

	int* p = nullptr; // pointer can be declared and point to nothing
	p = &i1;

	swaper(&i1, &i2);
	cout << "i1: " << i1 << endl;
	cout << "address i2: " << &i2 << endl; //& in front of the variable returns the address. 
	cout << "Value p: " << p << endl;
	cout << "dereference p: " << *p << endl; //* at the front dereferences
	cout << "dereference p: " << &p << endl; 

}