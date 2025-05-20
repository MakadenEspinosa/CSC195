#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
using namespace std;

void arrayExmpl() {
// Arrrays
	array<string, 7> weekdays = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	for (string day : weekdays) {
		cout << day << " ";
	}
	cout << endl << endl;
}

void vectorExmpl() {
// Vectors
	vector<int> numbers = { 1,2,3,4,5 };
	numbers.push_back(10);
	numbers.push_back(100);
	for (int num : numbers)
		cout << num << " ";
	cout << endl;
	numbers.pop_back();
	numbers.pop_back();
	for (int num : numbers)
		cout << num << " ";
	cout << endl << endl;

}

void listExmpl() {
//Lists
	list<string> fruits = { "Apple", "Bananna", "Orange" };
	fruits.push_front("Lemon");
	fruits.push_back("Pear");

	for (string fruit : fruits)
		cout << fruit << " ";
	cout << endl;

	fruits.remove("Bananna");
	for (string fruit : fruits)
		cout << fruit << " ";
	cout << endl << endl;

}

void mapExmpl() {
//Maps
	map<string, int> stock = { {"apples", 10}, {"banannas", 5}, {"oranges", 3} };
	stock.insert({ "lemons", 20 });
	stock.insert({ { "limes", 15 }, { "milk", 4 } });

	// Updating value
	stock.at("banannas") = 12;
	for (auto item = stock.begin(); item != stock.end(); ++item) {
		cout << item->first << " " << item->second << endl;
	}
}

int main()
{
	arrayExmpl();
	vectorExmpl();
	listExmpl();
	mapExmpl();
	return 0;

}
