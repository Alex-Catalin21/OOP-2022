#include "Number.h"
#include <stdio.h>

Number::Number(const char* value, int base)
{
	this->value = value;
	this->base = base;
}

Number::~Number()
{
}

Number::Number(const Number& n)
{
	value = n.value;
	base = n.base;
}

void Number::SwitchBase(int newBase)
{
}

void Number::Print()
{
	printf(value, GetBase());
}

int Number::GetDigitsCount()
{
	int cnt = 0;
	int nr = value;
	while (nr != 0)
	{
		cnt++;
		nr /= 10;
	}
	return cnt;
}

int Number::GetBase()
{
	return base;
}

int Number::operator+(const Number& n)
{
	if (base > n.base)
	{
		n.base = GetBase();
		n.value = SwitchBase(base);
		return value + n.value;
	}
	else
		if (base < n.base)
		{
			base = n.GetBase();
			value = n.SwitchBase(base);
			return value + n.value;
		}
	else return value + n.value;
}

int Number::operator-(const Number& n)
{
	return 0;
}

int Number::operator[](const Number& n)
{
	return 0;
}

bool Number::operator>(const Number& n)
{
	SwitchBase(10);
	n.SwitchBase(10);
	if (value > n.value)
		return true;
	return false;
}

bool Number::operator<(const Number& n)
{
	SwitchBase(10);
	n.SwitchBase(10);
	if (value < n.value)
		return true;
	return false;
}

bool Number::operator>=(const Number& n)
{
	SwitchBase(10);
	n.SwitchBase(10);
	if (value >= n.value)
		return true;
	return false;
}

bool Number::operator<=(const Number& n)
{
	SwitchBase(10);
	n.SwitchBase(10);
	if (value <= n.value)
		return true;
	return false;
}

bool Number::operator==(const Number& n)
{
	SwitchBase(10);
	int tmp = n.GetBase();
	n.SwitchBase(10);
	if (value == n.value)
		return true;
	return false;
}

int Number::operator--()
{
	return 0;
}
