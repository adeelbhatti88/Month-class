#pragma once
#include <iostream>
#include <string>
using namespace std;

class Month
{

private:
	string name;
	int monthNumber;
public:
	Month();
	Month(string);
	Month(int);

	string getMonth()
	{
		return name;
	}

	void setMonth();
	

	int getMonthNumber()
	{
		return monthNumber;
	}

	void setMonthNumber(int n)
	{
		monthNumber = n;
	}

	Month operator++();
	Month operator--();
	friend ostream &operator<<(ostream&, const Month&);
	friend istream &operator >> (istream &, Month &);

	~Month();
};

