#include <iostream>

using namespace std;

struct Employee {
	const float TAX = 0.1f;

	string name;
	char initial;
	short age;
	bool isAdult;
	unsigned int zipcode;
	float wage;
	short daysWorked;
	float hoursWorkedPerDay[7];
};

int main()
{
	Employee e;
	
	cout << "Enter first name: ";
	cin >> e.name;

	cout << "Enter initial of last name: ";
	cin >> e.initial;

	cout << "Enter age: ";
	cin >> e.age;
	e.isAdult = (e.age >= 18);  // Determine adulthood status

	cout << "Enter zipcode: ";
	cin >> e.zipcode;

	cout << "Enter hourly wage: ";
	cin >> e.wage;

	cout << "Enter number of days worked (max 7): ";
	cin >> e.daysWorked;
   

	float totalHours = 0; // Initialize total hours to 0

	for (int i = 0; i < e.daysWorked; i++) {
		cout << "Enter hours worked for day " << (i + 1) << ": ";
		cin >> e.hoursWorkedPerDay[i];

		totalHours += e.hoursWorkedPerDay[i];  // Accumulate total hours
	}

	float grossIncome = totalHours * e.wage;
	float taxAmount = grossIncome * e.TAX;
	float netIncome = grossIncome - taxAmount;


	cout << "\nEmployee Payroll Summary\n";
	cout << "-------------------------\n";
	cout << "Name: " << e.name << " " << e.initial << ".\n";
	cout << "Age: " << e.age << " (Adult: " << (e.isAdult ? "Yes" : "No") << ")\n";
	cout << "Zipcode: " << e.zipcode << "\n";
	cout << "Hourly Wage: $" << e.wage << " per hour\n";
	cout << "Total Hours Worked: " << totalHours << " hours\n";
	cout << "Gross Income: $" << grossIncome << "\n";
	cout << "Tax Amount: $" << taxAmount << "\n";
	cout << "Net Income: $" << netIncome << "\n";
}