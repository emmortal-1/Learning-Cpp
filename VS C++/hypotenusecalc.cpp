#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // Variables.
    double a;
    double b;
    double c;

    // User Input for the Length of Side A.
    cout << "Enter Side A: " << endl;
    cin >> a;
    
    // User Input for the Length of Side B.
    cout << "Enter Side B: " << endl;
    cin >> a;
    
    // Calculates the Length of Side C.
    c = sqrt(pow(a , 2) + pow(b , 2));

    // Prints the Length of Side C.
    cout << "Side C is Equal to: " << c;


    return 0;
}