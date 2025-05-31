#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Write(const string& text, ostream& ostream) {
	ostream << text;
}

int main() {
	string text = "Hello World\n";
	cout << text;

	//cin >> text; listens until whitespace

	getline(cin, text); //gets whole line
	//cout << text;
	/*
	time_t start = time(NULL);

	for (int i = 0; i < 1'000'000; i++) 
	{
		Write(text, cout);
	}

	time_t end = time(NULL);

	cout << "Total time for pass-by-value method call: " << end - start << endl;
	*/

	//output a file
	ofstream output("data.txt");
	//output << text;
	Write(text, output);
	output.close();

	text = "";
	string text2 = "";
	//input from file
	ifstream input("data.txt");
	//input >> text;
	getline(input, text);
	input.close();

	cout << "Read from file: " << text << endl;
	cout << "Read from file: " << text2 << endl;
	return 0;
}