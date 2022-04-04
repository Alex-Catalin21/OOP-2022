#include<iostream>

using namespace std;

float operator"" _Kelvin(unsigned long long x) {
    return x + 273.15;
}

float operator"" _Fahrenheit(unsigned long long x) {
    return x * 1.8 + 32;
}

int main() {

    float a = 300_Kelvin;

    float b = 120_Fahrenheit;

    cout << "Grade Kelvin: " << a << endl << "Grade Fahrenheit: " << b;

    return 0;

}