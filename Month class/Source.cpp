#include <iostream>
#include <string>
#include "Month.h"

using namespace std;

int main()
{
	int number;

	cout << "Please enter a month number: ";
	cin >> number;

	Month month(number);
	Month month2;
	month.setMonth();

	cout << month.getMonth() << endl;

	month2 = ++month;

	cout << "after ++ overloading: " << endl;

	cout << month2.getMonth() << endl;

	cout << "overloading the << operator. " << endl;
	cout << month2 << endl;

	cout << "Overloading the >> operator. " << endl;
	cin >> month2;
	cout << month.getMonth() << endl;


}