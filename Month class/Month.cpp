#include "Month.h"



Month::Month()
{
	monthNumber = 1;
	name = "January";
}

Month::Month(string n)
{
	name = n;
	monthNumber = 1;
}

Month::Month(int n)
{
	monthNumber = n;
	name = "January";
}

void Month::setMonth()
{
	if (monthNumber == 1)
	{
		name = "january";
	}
	if (monthNumber == 2)
	{
		name = "feb";
	}
	if (monthNumber == 3)
	{
		name = "march";
	}
	if (monthNumber == 4)
	{
		name = "April";
	}
	if (monthNumber == 5)
	{
		name = "May";
	}
	if (monthNumber == 6)
	{
		name = "June";
	}
	if (monthNumber == 7)
	{
		name = "july";
	}
	if (monthNumber == 8)
	{
		name = "august";
	}
	if (monthNumber == 9)
	{
		name = "september";
	}
	if (monthNumber == 10)
	{
		name = "october";
	}
	if (monthNumber == 11)
	{
		name = "november";
	}
	if (monthNumber == 12)
	{
		name = "December";
	}
}

Month Month::operator++()
{
	if (monthNumber == 12)
	{
		monthNumber = 1;
		name = "January";
		return*this;
	}
	monthNumber++;
	setMonth();
	return*this;
	
}

Month Month::operator--()
{
	if (monthNumber == 1)
	{
		monthNumber = 12;
		name = "December";
	}
	monthNumber--;
	setMonth();
	return*this;
}

ostream &operator << (ostream &strm, const Month &obj)
{
	strm << obj.name << ":  Month Name  " << obj.monthNumber << ":  Month Number  ";
	return strm;
}

istream &operator >> (istream &strm, Month &obj)
{
	cout << "Please enter the Month: ";
	strm >> obj.monthNumber;
	obj.setMonth();

	return strm;
}

Month::~Month()
{
}
