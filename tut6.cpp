#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <ctime>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::vector;


// Arrays and Vectors
/*  int guess1
    int guess2 // not scalable 
   
    array       size        index tells you where in array it is located. 0 clue about its size
    int guesses[7]          // size-1, statically sized. Cannot be increased later
    vector                  // lists, array lists. Dynamically sized (Recommended). Knows it's size

    templatized array


*/

//Arrays

/*
int main()
{
    int guesses[20];             // If you know data ahead, int guesses[] = {data, data1, data2, data3, data4}
    int num_elements = 5;
    guesses[0] = 10;
    cin >> guesses[0];
    cout << guesses[0] << std::endl;                   // read: guesses of 3
    return 0;
}
*/
/*
int main()
{
    int guesses[10] = {5, 12, 43, 55, 22};

    int num_elements = 5;
    int size = sizeof(guesses) / sizeof(guesses[0]); // sizeof outputs size in bytes. To find size of array use sizeof(array) / sizeof(array[0])

    cout << size << std::endl;

    for(int i = 0; i < num_elements; i++)
    {
        cout << guesses[i] << std::endl;
    }

    return 0;
}
*/

// Passing arrays to functions and sizeof operator
/*
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << std::endl;
}

int main()
{
    int yarray[] = {12, 43, 13, 42, 32};
    int size = sizeof(yarray) / sizeof(int);    //when you pass array to function it loses its sense of size
    print_array(yarray, 5);

    
    return 0;
}
*/

/*
void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << std::endl;
}

int main()
{
    const int SIZE = 100;
    int yarray[SIZE];
    // print_array(yarray, SIZE);
    int count = 0;

    for(int i = 0; i < SIZE; i++)
    {
        if(cin >> yarray[i])
        {
            count++;
            //input worked
        }
        else
        {
            //invalid character
            break;
        }
    }
    print_array(yarray, count);
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsixe>::max(), '\n'); // Removes max character limit

    string test;
    cin >> test;
    cout << test << std::endl;
    return 0;
}
*/

// Using and Array to keep track of guessing
// Simple guessing game


void print_vector(vector<int> vector)                   // adds +1 to vector everytime  play game is ran
{
    for(int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    vector<int> guesses;     

    int random = rand() % 251;  //random number from 0-250
    cout << random << std::endl;
    cout << "Toss a number: ";
    while(true)                 //while loop for guesses
    {
        int guessi;                                  // couldnt get vector input work, but worked around it. Not the most elegant, but does the job. 
        std::cin >> guessi;                         // takes user input for random number guess.   
        guesses.push_back(guessi);                  // Pushes the guess to vector guessess for tracking
        // guess_count++;
        if(guessi == random)                        // if guess equals to random number, we got a winner.
        {
            cout << "You lucky mofo, +1 \n";
            break;
        } else if (guessi < random)                 // if guessed number is smaller than random 
        {
            cout << "Haha too frikkin low, git gud! \n";
        } else                                      // else ( if number is bigger than random number)
        {
            cout << "Whooaaa, we trying to compensate something? Try going lower! \n";
        }
    }
    print_vector(guesses);
}

int main()              //Menu for starting / quitting the game
{
    srand(time(NULL));  //uses internal clock to control random number seed
    int choice;         // int for choosing to play or not to play
    do
    {
       cout << "0. QUIT" << std::endl << "1. PLAY GAME\n"; 
       std::cin >> choice;

       switch(choice)
       {
            case 0:                                 // Run if 0 chosen
                cout << "Thanks for nothing\n";
                return 0;
            case 1:                                 // Run if 1 chosen
                cout << "WE GO AGAIN!\n";
                play_game();                        // Calls the function game
                break;
       }
    } while (choice != 0);
    
}


// Vectoooooooor stuff
// Array is static, while vector goes brrrrr. std::vector< int > items = {12, 13}.      items.push-back(100)
// items[2]             items.size()        items[items.size()-1] grabs the last item.
// can use string / custom types, no need to stick with ints. Inting sucks
// remembers the size, not big dummy. Very wow

//Creating vector

/*
int main()
{
    std::vector<int> data = {1, 2, 3};
    data.push_back(12);
    cout << data[data.size() - 1] << std::endl;
    data.pop_back();
    cout << data.size() << std::endl;
}
*/

/*
void print_vector(vector<int> &data)
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << "\t";
    }
}

int main()
{
    vector<int> data = {1, 2, 3};
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
    print_vector(data);
}                           // Started to require -static while compling? Not sure, what causes
*/

