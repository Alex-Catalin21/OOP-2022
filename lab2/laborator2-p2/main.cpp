#include <iostream>
#include "student.h"
#include "global.h"

using namespace std;

int main()
{
    Student stud1;
    Student stud2;
    stud1.setName("eu");
    stud2.setName("iel");

    stud1.setMathematics(1.5);
    stud1.setEnglish(1.8);
    stud1.setHistory(1.2);

    stud2.setMathematics(2.1);
    stud2.setEnglish(2.2);
    stud2.setHistory(2.3);

    cout << "Numele primului student: "<< stud1.getName() << endl;
    cout << "Numele studentului doi: " << stud2.getName() << endl;
    cout << "Student 1, nota la mate: " << stud1.getMathematics() << endl;
    cout << "Student 2, nota la mate: " << stud2.getMathematics() << endl;
    cout << "Student 1, nota la engleza: " << stud1.getEnglish() << endl;
    cout << "Student 2, nota la engleza: " << stud2.getEnglish() << endl;
    cout << "Student 1, nota la istorie: " << stud1.getHistory() << endl;
    cout << "Student 2, nota la istorie: " << stud2.getHistory() << endl;

    cout<<"Compararea numelor: "<<compareName(stud1, stud2)<<endl;
    cout<<"Comparare mate: "<<compMath(stud1, stud2)<<endl;
    cout<<"Comparare engleza: "<<compEng(stud1, stud2)<<endl;
    cout<<"Comparare istorie: "<<compHist(stud1, stud2)<<endl;
    cout << "Comparare medie: " << compAverage(stud1, stud2) << endl;
}