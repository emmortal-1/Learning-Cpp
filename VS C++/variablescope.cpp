#include <iostream>
using namespace std;

int myNum = 10; // Global variable

void printNum();

int main(){

    int myNum = 15; // Local variable

    cout << myNum << endl; // Will use the local variable
    cout << ::myNum << endl; // Will use the global variable, :: is the scope resolution operator

    return 1;
}

void printNum(){
    int myNum = 5; // Local variables
    cout << x << endl;
}