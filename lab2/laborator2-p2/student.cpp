#include "student.h"

string Student::getName() {
	return name;
}

void Student::setMathematics(float x)
{
	if (x >= 1 && x <= 10)
		this->mathematics = x;
}

float Student::getMathematics()
{
	return mathematics;
}

void Student::setEnglish(float x)
{
	if(x >= 1 && x <= 10)
		this->english = x;
}

float Student::getEnglish()
{
	return english;
}

void Student::setHistory(float x)
{
	if(x >= 1 && x <= 10)
		this->history = x;
}

float Student::getHistory()
{
	return history;
}

float Student::average()
{
	return (this->mathematics + this->english + this->history) / 3;
}

void Student::setName(string x)
{
	this->name = x;
}
