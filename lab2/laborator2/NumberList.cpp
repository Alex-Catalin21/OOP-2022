#include "NumberList.h"
#include<iostream>

using namespace std;

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	for (int k = 0; k < 10; k++)
		numbers[k] = x;
	this->count += x;
	if(count >= 10)
		return false;
}

void NumberList::Sort()
{
	for (int i = 0; i < 10 - 1; i++)
		for (int j = 0; j < 10 - i - 1; j++)
			if (numbers[j] > numbers[j + 1])
			{
				int aux = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = aux;
			}
}

void NumberList::Print()
{
	for (int i = 0; i < 10; i++)
		cout << numbers[i] << " ";
	cout << endl;
}
