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



void save_score(int count)                              // Function to keep track of best score
{
    std::ifstream input("best_score.txt");              // Opens file "best_score.txt"
    if(!input.is_open())                                // Check if you couldnt open the file
    {
        cout << "Unable to read file \n";
        return;
    }

    int best_score;
    input >> best_score;                                // Inputs best score

    std::ofstream output("best_score.txt");
    if(!output.is_open())
    {
        cout << "Unable to read file \n";
        return;
    }
    if(count < best_score)                              
    {
        output << count;
    }
    else
    {
        output << best_score;
    }

}

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
    int count = 0;
    int random = rand() % 251;  //random number from 0-250
    cout << random << std::endl;
    cout << "Toss a number: ";
    while(true)                 //while loop for guesses
    {
        int guessi;                                  // couldnt get vector input work, but worked around it. Not the most elegant, but does the job. 
        std::cin >> guessi;                         // takes user input for random number guess.   
        count++;

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

    save_score(count);
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
