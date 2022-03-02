#pragma once
#include<string>

using namespace std;

class Student {
private:
	string name;
	float mathematics;
	float english;
	float history;
public:
	void setName(string x);
	string getName();

	void setMathematics(float x);
	float getMathematics();
	void setEnglish(float x);
	float getEnglish();
	void setHistory(float x);
	float getHistory();
	
	float average();
};