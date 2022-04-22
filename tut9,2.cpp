#include <iostream>
#include <vector>
#include <array>
#include <fstream>

using std::vector;
using std::cout;
using std::cin;
using std::array;

// range based for loop
/*
void test(int data[])
{
    for(int n : data)
    {
        cout << n << "\t";
    }
}



int main()
{
    array<int, 6> data = {1, 2, 3, 4, 5, 6};          // can use vector or int data[], all 3 works
    
    for(int n : data)
    {
        cout << n << "\t";
    }

    
    for(int i = 0; i < 6; i++)
    {
        cout << data[i] << "\t";
    }
    
    cout << "\n";
}
*/
// Intro to IO Stream

// Cin & Cout allows you to read and output to console
// IO Stream allows for input / output to files
// ifstream used for reading / writing to files input & output


// Writing to files

/*
int main()
{   
    std::string filename;                               // Creates string "filename"
    cin >> filename;                                    // User input for string filename

    std::ofstream file(filename, std ::ios::app);       // ofstream is object, creates file taken from user input filename

    if(file.is_open()){                                 // Check if the file is open.
        cout << "big success \n";
    }
   
   
    // file.open("hello.txt");                          // file.open() opens the file inside 
    // file.close(); closes the file, not commonly used. 
    vector<std::string> names;                          // Creates Vector names
    names.push_back("Caleb");                           // Pushes "Caleb" to the end of the vector names
    names.push_back("Amy");                             // Same but different name
    names.push_back("Susan");                           // You get the point
    for(std::string name : names)                       // For loop to write names to the "Hello.txt"
    {
        file << name << std::endl;
    }

    file.close();                                       // Closes the file, optional
    return 0;
} 
*/

// Reading from the files

/*
int main()
{
    std::ifstream file ("Hello.txt");                   // File to be opened
    
    vector<std::string> names;                          // Creates Vector where it stores the read data

    std::string input;                                  // Creates string input

    while(file >> input) //return file                  // While loop to input read data to string input
    {
        names.push_back(input);                         // Pushes data in string input to vector names
    }

    for(std::string name : names)                       // Outputs the name in console 
    {
        cout << name << std::endl;
    }
    return 0;
}
*/

/*
int main()
{
    std::ifstream file ("Hello.txt");
    
    std::string line;
    getline(file, line);                                // Gets the first line in file
    cout << line << "\n";
    return 0;
}

*/

// Saving High Scores to File

// Moving to Tut9,5.cpp for extending old guessing game