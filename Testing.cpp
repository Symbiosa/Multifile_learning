#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <ctime>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

void print_vector(vector<int> vector)
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
        vector<int> guess;
        string line;
        // guess_count++;
        std::getline(std::cin, line);
        std::istringstream stream(line);
        while (stream >> number)
        numbers.push_back(number);
        if(guess == random)
        {
            cout << "You lucky mofo, +1 \n";
            break;
        } else if (guess < random)
        {
            cout << "Haha too frikkin low, git gud! \n";
        } else
        {
            cout << "Whooaaa, we trying to compensate something? Try going lower! \n";
        }
    }
    print_vector(guesses);
}

int main()
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