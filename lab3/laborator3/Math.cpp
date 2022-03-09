#include "Math.h"
#include<cstdio>
#include<cstdarg>
#include<cstring>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b +c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int i;
	int val = 0;
	va_list v1;
	va_start(v1, count);
	for (i = 0; i < count; i++)
	{
		val += va_arg(v1, int);
	}
	va_end(v1);
	return val;
}

char* Math::Add(const char* a, const char* b)
{
	char* s = new char[strlen(a) + strlen(b) + 1];
	strcpy_s(s, sizeof(a), a);
	strcat_s(s, sizeof(a), b);
	return s;
}
