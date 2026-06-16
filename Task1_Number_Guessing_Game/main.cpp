#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char playAgain;

    srand(time(0));

    cout << "====================================" << endl;
    cout << "      NUMBER GUESSING GAME" << endl;
    cout << "====================================" << endl;

    do {
        int choice;
        int maxNumber;

        cout << "\nSelect Difficulty Level:" << endl;
        cout << "1. Easy   (1 - 50)" << endl;
        cout << "2. Medium (1 - 100)" << endl;
        cout << "3. Hard   (1 - 200)" << endl;

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                maxNumber = 50;
                break;
            case 2:
                maxNumber = 100;
                break;
            case 3:
                maxNumber = 200;
                break;
            default:
                cout << "Invalid Choice! Medium Mode Selected.\n";
                maxNumber = 100;
        }

        int secretNumber = rand() % maxNumber + 1;
        int guess;
        int attempts = 0;

        cout << "\nI have selected a number between 1 and "
             << maxNumber << "." << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;

            attempts++;

            if(guess > secretNumber) {
                cout << "Too High!\n";
            }
            else if(guess < secretNumber) {
                cout << "Too Low!\n";
            }
            else {
                cout << "\nCongratulations!" << endl;
                cout << "Correct Number: " << secretNumber << endl;
                cout << "Attempts Taken: " << attempts << endl;
            }

        } while(guess != secretNumber);

        cout << "\nPlay Again? (Y/N): ";
        cin >> playAgain;

    } while(playAgain == 'Y' || playAgain == 'y');

    cout << "\nThanks for Playing!" << endl;

    return 0;
}
