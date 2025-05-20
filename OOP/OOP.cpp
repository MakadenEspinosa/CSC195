#include <iostream>
#include "Food.h"
using namespace std;
int main()
{
	Food food;
	food.Consume();
	food.SetCalories(25);
	cout << food.GetCalories() << endl;


	Food* pfood = new Food(20);
	(*pfood).Consume();
	pfood->Consume();
	
	return 0;
}