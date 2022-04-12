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

/*
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
*/

// break & continue
/*
int main()
{
    string sentence = "Yada yada yayaya yatta";
    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == 't')
        {
            continue;
        }
        cout << sentence[i] << std::endl;
        
    }
    cout << "Done bishes!\n";
}
*/

// conditional operator

/*
int main()
{
    int answer = 11;
    cout << "Guess number you ham: ";
    int guess;
    cin >> guess;
    guess == answer ? cout << "Good job\n" : cout << "Bad job\n";
    // int points = guess == answer ? 10 : 0;
    // cout << points << std::endl;
}
*/