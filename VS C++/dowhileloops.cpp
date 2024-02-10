#include <iostream>
using namespace std;

int main(){

    double number;
    
    // do while loop
    do {
        cout << "Enter a number positive: ";
        cin >> number;
        cout << "Please enter a positive number" << endl;
    } while (number < 0);
    
    cout << "You entered: " << number << endl;



    return 0;
}