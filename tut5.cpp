#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::cin;
using std::string;

/*
int main()
{
    
    int fact;
    cout << "GIMME NUMBER YOU TWAT: ";
    cin >> fact;
    int factorial = fact;
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    cout << "factorial of " << fact << ": " << factorial << std::endl;
    return 0;
    
    
    int factorial = 7; // 5*4*3*2*1
    int i = factorial - 1;
    while(i > 1)
    {
        factorial *= i;
        i--;
    }    
    cout << "Factorial of 5 " << factorial << std::endl;
    return 0;
}
*/

int main()
{
    //atleast once
    string password = "kissakoira123";
    string guess;
    do 
    {
        cout << "Guess the password: ";
        cin >> guess;
    } while(guess != password);
}