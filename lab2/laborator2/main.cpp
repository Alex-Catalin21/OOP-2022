#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList obj;
    obj.Init();
    obj.Add(5);
    obj.Sort();
    obj.Print();
    std::cout << "Hello World!\n";
}