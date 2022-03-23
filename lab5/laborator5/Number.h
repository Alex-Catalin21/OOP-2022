#pragma once

class Number
{
	//add data members
private:
	const char* value;
	int base;
public:
	Number(const char* value, int base);//where base is between 2 and 16
	~Number();

	//add operators and copy/move constructor
	Number(const Number& n);

	void SwitchBase(int newBase);
	void Print();
	int GetDigitsCount();//returns the number of digits for the current number
	int GetBase(); //returns the current base

	int operator+(const Number& n);
	int operator-(const Number& n);
	int operator[](const Number& n);
	bool operator>(const Number& n);
	bool operator<(const Number& n);
	bool operator>=(const Number& n);
	bool operator<=(const Number& n);
	bool operator==(const Number& n);
	int operator--();
	int operator--(const Number& n);
};
