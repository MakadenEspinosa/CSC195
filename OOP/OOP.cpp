#include <iostream>
#include "Food.h"
#include "Fruit.h"
#include "Candy.h"
#include <array>
#include <vector>
using namespace std;
int main()
{
	/*Food food;
	food.Consume();
	food.SetCalories(25);
	cout << food.GetCalories() << endl;


	Food* pfood = new Food(20);
	(*pfood).Consume();
	pfood->Consume();*/


	cout << "Fruit Instance" << endl;
	Fruit apple;

	apple.Consume();
	cout << apple.GetCalories() << endl;

	Candy chocolate;
	chocolate.Consume();
	cout << chocolate.GetCalories() << endl;

	array<Food, 2> foods;
	foods[0] = apple;
	foods[1] = chocolate;

	vector < Food*> food_list = { &apple, &chocolate, new Candy };
	return 0;
}