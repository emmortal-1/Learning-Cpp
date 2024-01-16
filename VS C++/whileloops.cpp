#include <iostream>
using namespace std;

int main(){
    /*
    int i = 1;

    while (i <= 5){
        cout << i << endl;
        i = i + 1;
        
        if (i == 2){
            i = i + 2;
            continue;
        }

    }
    cout << "while loop done";
    */
    
    int sum = 0;
    int number = 0;

    while(number != -1){
        cout << "Enter Positive Integer (or -1 to Quit): ";
        cin >> number;
        if (number <= 0 && number != -1){
            cout << "Number must be a positive Integer" << endl;
            break;
        }
        if (number != -1) sum = sum + number;

    }
    
    cout << "sum: " << sum << endl;
    
    
    
    return 0;
}