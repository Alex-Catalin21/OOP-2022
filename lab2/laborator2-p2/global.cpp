#include "global.h"

int compareName(Student s1, Student s2)
{
	if (s1.getName() > s2.getName() )
		return 1;
	else if (s1.getName() == s2.getName())
		return 0;
	else return -1;
}

int compMath(Student s1, Student s2)
{
	if (s1.getMathematics() > s2.getMathematics())
		return 1;
	else if (s1.getMathematics() == s2.getMathematics() )
		return 0;
	else return -1;
}

int compEng(Student s1, Student s2)
{	
	if (s1.getEnglish() > s2.getEnglish())
		return 1;
	else if (s1.getEnglish() == s2.getEnglish() )
		return 0;
	else return -1;
}

int compHist(Student s1, Student s2)
{	
	if (s1.getHistory() > s2.getHistory() )
		return 1;
	else if (s1.getHistory() == s2.getHistory() )
		return 0;
	else return -1;
}

int compAverage(Student s1, Student s2)
{
	if (s1.average() > s2.average())
		return 1;
	else if (s1.average() == s2.average() )
		return 0;
	else return -1;
}
