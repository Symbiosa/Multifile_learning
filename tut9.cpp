#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <array>

using std::cin;
using std::cout;



void print_array(std::array<int, 251> array, int size)                   // adds +1 to array everytime  play game is ran
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    std::array<int, 251> guesses;
    int count = 0;                                   // Keeps track how many guesses 
    

    int random = rand() % 251;                       //random number from 0-250
    cout << random << std::endl;
    cout << "Toss a number: ";
    while(true)                                      //while loop for guesses
    {
        int guessi;                               
        cin >> guessi;                               // takes user input for random number guess.   
        guesses[count++] = guessi;                   // guess_count++;

        if(guessi == random)                         // if guess equals to random number, we got a winner.
        {
            cout << "You lucky mofo, +1 \n";
            break;
        } else if (guessi < random)                  // if guessed number is smaller than random 
        {
            cout << "Haha too frikkin low, git gud! \n";
        } else                                       // else ( if number is bigger than random number)
        {
            cout << "Whooaaa, we trying to compensate something? Try going lower! \n";
        }
    }
    print_array(guesses, count);
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