#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
    Math m;
    cout << m.Add(2, 3) << " " <<
        m.Add(2, 3, 4) << " " <<
        m.Add(2.3, 2.4) << " " <<
        m.Add(2.3, 2.4, 2.5) << " " <<
        m.Mul(2, 4) << " " <<
        m.Mul(2, 4, 5) << " " <<
        m.Mul(3.1, 3.3) << " " <<
        m.Mul(4.1, 4.2, 4.3) << " ";
    cout << m.Add(3, 4, 5, 6);
    cout << m.Add("abc", "def");
}