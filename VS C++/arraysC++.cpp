#include <iostream>
#include <string>
using namespace std;

int main(){

    // This is an Array of 4 strings
    // Arrays are used to store multiple values in a single variable
    // To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store
    
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars[0] << endl;
    cout << cars[1] << endl;

    // Arrays can be declared without initial values
    // They can be assigned values later in the program
    // However, the size of the array must be defined

    string candy[3];

    candy[0] = "Snickers";
    candy[1] = "Twix";
    candy[2] = "Mars";

    return 0;
}