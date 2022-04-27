#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <ctime>
#include <vector>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::vector;

// Functions and Constructors

/*
All 4 OOP

1) Function
2) Method *attached to object*
3) Static Method *attached to class*
4) Constructors - ctor *creates an object*

User user,
user.do_something()
do_something

strong tacos = "yum";
tacos.length();

class ---> object

user.speak()
User.count()

User ---> user1
     ---> user2
*/

// Refactoring IO to Function Call and Testing
// Function call over logic
// Refactored tut9,5.cpp (guessing game)


// Multidimensional arrays

int main()
{
     vector<vector<int>> grades = {
          {1,2,3},
          {4,5,6},
          {7,8,9}};              // Requires second size *Multidimensional array
                                                                 // Can have higher size
     for(int r = 0; r < 3; r++)
     {
          for(int c = 0; c <3; c++)
          {
               cout << grades[r][c] << "\t";
          }
          cout << "\n";
     }

     return 0;
}