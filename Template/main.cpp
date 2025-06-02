#include<iostream>
#include"TempClass.h"
using namespace std;

namespace awe
{
	template<typename T, typename D>
	T max(T i1, D i2) {
		return (i1 > i2) ? i1 : i2;
	}
}


int main() {
	cout << awe::max(2.3f, 5.6f) << endl;

	TempClass<> t1(2, 3);
	TempClass<> t2(2.1f, 3.7f);

	TempArray<string, 5> strArr;
	strArr[2] = "Hi";
	return 0;
}