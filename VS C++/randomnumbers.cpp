#include <iostream>
#include <ctime>
using namespace std;


int main(){

    // Seed to generate random numbers
    srand(time(NULL));

    // Generate random numbers
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int num3 = rand() % 100 + 1;
    
    // Print random numbers
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}