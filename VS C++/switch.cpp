#include <iostream>
using namespace std;

int main(){

    // Switch is an Alternate to using else if statements

    int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch(month){
        case 1:
            cout << "It's January";
            break;
        case 2:
            cout << "It's Febuary";
            break;
        case 3:
            cout << "It's March";
            break;
        case 4:
            cout << "It's April";
            break;
        case 5:
            cout << "It's May";
            break;
        case 6:
            cout << "It's June";
            break;
        case 7:
            cout << "It's July";
            break;
        case 8:
            cout << "It's August";
            break;
        case 9:
            cout << "It's September";
            break;
        case 10:
            cout << "It's October";
            break;
        case 11:
            cout << "It's November";
            break;
        case 12:
            cout << "It's December";
            break;

    }
    
    return 0;
}