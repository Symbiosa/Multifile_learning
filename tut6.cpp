#include <iostream>
#include <cmath>
#include <string>

using std::cout;
using std::cin;
using std::string;


// Arrays and Vectors
/*  int guess1
    int guess2 // not scalable 
   
    array       size        index tells you where in array it is located. 0 clue about its size
    int guesses[7]          // size-1, statically sized. Cannot be increased later
    vector                  // lists, array lists. Dynamically sized (Recommended). Knows it's size

    templatized array


*/

//Arrays

int main()
{
    int guesses[20];             // If you know data ahead, int guesses[] = {data, data1, data2, data3, data4}
    guesses[0] = 10;
    cin >> guesses[0];
    cout << guesses[0] << std::endl;                   // read: guesses of 3
    return 0;
}