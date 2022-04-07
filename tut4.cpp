#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <float.h>

using std::cout;
using std::cin;
using std::string;
/*
int main()
{
    char single_quote = '\'';
    cout << "Hello\bThere\n"; // poistaa kirjaimen
    cout << "Hello\nThere\n"; // uusi rivi
    cout << "Hello\a\a\a\a\aThere\n"; // beep beep I'm a jeep
    cout << "\0\n";
    cout << "\\"; // Backlash backlash ... Backlash?
}
*/

/*
int main()
{
    bool found = true;
    //seatch algorithm -> if found, found = true;
    cout << std::boolalpha << found << std::endl;
    if(found) cout << std::boolalpha;
}
*/

/*
int main()
{
    int cents = 100;
    float a = 10.0 / 3;    // least trustworthy
    a = a * 100000000;
    double b; // 7.7E4      7.7 x 10^4      generally use double, float only for restricted memory
    long double c;

    cout << std::fixed << a << std::endl;
    cout << LDBL_DIG << std::endl;

    // 7.7 * 10000 = 77000
}
*/

/*
#define X 10 // does same as const prefix, affects whole code

int main()
{
    const int setting = 3; // read only variable, cannot be changed later. 

    enum { y = 100 }
    // 3 styles, const prefix. #define macro. enum 
}
*/
/*
int main()
{
    cout << sqrt(25) << std::endl; // requires #include <cmath>. Negative number gives NaN
    cout << pow(9,999) << std::endl; // gives out inf, negative gives -inf
    cout << fmax(10,3.25) << std::endl; // gives out floating point value *remainer*
    cout << ceil(fmin(10,3.25)) << std::endl; // fmax & fmin used for comparing 2 numbers, outputting matching one
    cout << floor(fmin(10,3.25)) << std::endl; // floor and ceil rounds down/up
    cout << trunc(-1.5) << std::endl; // trunc crops decimal value
    cout << round (1.49) << std::endl;
    cout << nearbyint (1.49) << std::endl;

}
*/
/*
int main()      // string > cstring
{
    string greeting = "Hello"; // "" is default value
   /* string complete_greeting = greeting + " there";
    complete_greeting += "!";
    cout << complete_greeting << std::endl;
    cout << complete_greeting.length() << std::endl;
    //method == member function == functions attached to objects
    char name[] = "Caleb"; // c string == arrat of characters "Caleb\0"
    //name = "t";

    complete_greeting = "Go away";

    cin >> greeting;
    cout << greeting << std::endl;
}
*/

/*
int main()
{
    string greeting;
    getline(cin, greeting);
    cout << greeting << std::endl;
    // cin.getline() // gets number
}
*/

// String Methods

/*
int main()
{
    string greeting = "what the Hell";
    greeting.pop_back();
    greeting.replace(9, 4, "****");
    //greeting += " there"; // append() does the same
    cout << greeting << std::endl;
    // cout << greeting.length() << std::endl; //size() does the same
}
*/

// String operation methods

/*
int main()
{
    string greeting = "Poop smells poop";
    greeting.replace(greeting.find("poop"), 4, "****");
    cout << greeting << std::endl;

    string greetings = "What is up";
    cout << greetings.substr(5,2) << std::endl;
    // greetings.find_first_of("aeoiu")
    if(greetings.find_first_of("!") == -1) cout << "Not found" << std::endl;
    if(greetings.compare("What is up") == 0) cout << "Suck it bill" << std::endl;
}
*/

/*
int main()
{
    //char32_t                  unicode
    //char16_t                  unicode
    auto x = 5.5L;                //requires -std=c++11 while compiling 
    cout << x;
}
*/

// Hex and Oct

/*

int main()
{
    int number = 30; //Thirty
    int number1 = 0x30; //Fourty eight
    int number2 = 030; // 24
    cout << number << std::endl;
    cout << number1 << std::endl;
    cout << number2 << std::endl;
    cout << std::oct << number << std::endl;
}

*/

/*
// expressions, operators
int main()
{
    double x = 10 + (4.0 / 3); // "=" Operator, "+" Expression
    cout << x << std::endl;

}
*/

int main()
{
    
}