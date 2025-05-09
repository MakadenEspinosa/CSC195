#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
enum difficulty {
    easy = 10,
    medium = 50, 
    hard = 100
};

bool guessingGame()
{
    cout << "Please enter the number of difficulty.\n 1.Easy (1-10) 2.Medium(1-50), 3.Hard(1-100)" << endl;
    bool userPicked = false;
    difficulty choice;
    while (!userPicked) {
        int num;
        num:: getNextLine(cin >> num);
        switch (num) {
        case 1:
            choice = easy;
            userPicked = true;
            break;
        case 2:
            choice = medium;
            userPicked = true;
            break;
        case 3:
            choice = hard;
            userPicked = true;
            break;
        case 4:
            return true;
        default:
            cout << "That is not a difficulty, please try again or press 4 to quit."<< endl;
        }
    }
    int size = choice;
    int randomNumber = rand() % size + 1;

    for (int i = 0; i < 5; i++) {
        cout << "Pick a number 1 - " << size << "\n"<< 5-i << " Guesses Left." << endl;
        int guess;
        cin >> guess;
        if (guess < randomNumber)
            cout << guess << " is less than the random number." << endl;
        else if (guess > randomNumber)
            cout << guess << " is greater than the random number." << endl;
        else {
            cout << "Congradulations you guessed the random number " << randomNumber << "! Way to go!" << endl;
            return false;
        }
    }
    cout << "Oh no you are out of guesses! The correct number was " << randomNumber << ". You'll get em next time!" << endl;
    return false;

}


int main() {
    //srand(time(0)); Seed random number generator
    cout << "Thank you for playing guessng game!" << endl;
    bool userDone = false;
    while (!userDone) {
        userDone = guessingGame();
        if (!userDone) {
            cout << "Would you like to play again? y/n" << endl;
            char choice;
            cin >> choice;
            choice = tolower(choice);
                if (choice != 'y')
                    userDone = true;
        }
    }
    
}