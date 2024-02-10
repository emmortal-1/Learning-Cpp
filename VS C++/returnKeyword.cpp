#include <iostream>
using namespace std;

// Function to concatenate two strings
string concatStrings(){
    
    // Declaring variables
    string firstName = "Hello";
    string secondName = "World";
    string fullName = firstName + ' ' + secondName;
    
    // Return keyword is used to return a value from a function
    return fullName;
}



int main(){

    // Calling the function
    cout << concatStrings() << endl;

    return 0;
}