#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1;

    cout << "***********Guess My Number Game***********\n";

    do {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high!\n\n";
        }
        else if (guess < num) {
            cout << "Too low!\n\n";
        }
        else {
            cout << "\nCorrect! You got it in " << tries << " guesses!\n";
        }
    } while (guess != num);

    cout << "***********Thanks for playing!***********\n";

    return 0;
}