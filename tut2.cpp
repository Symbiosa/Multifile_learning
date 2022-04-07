#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

// double power(double, int); //declaration

double power(double base, int exponent) //defination
{
    double result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent) // Does something without printing 
{
    double myPower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << myPower << std::endl;  
}

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent? ";
    cin >> exponent;
    print_pow(base, exponent);
    print_pow(10,3);
    print_pow(4,2);
}

