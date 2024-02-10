#include <iostream>
#include <string>
using namespace std;

int main(){

    // This is an Array of 4 strings
    string students[4] = {"John", "Jane", "Joe", "Dave"};

    // Iterating through the array
    for(int i = 0; i < sizeof(students)/sizeof(string); i++){
        cout << students[i] << endl;
    }

    // This is an Array of 5 characters
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // Iterating through the array
    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        cout << grades[i] << endl;
    }

    return 0;
}