#include <iostream>
using namespace std;

int main(){

    double temp;
    char unit;

    cout << "***********Temperature Converter***********" << endl;
    cout << "F = Fahreheit" << endl;
    cout << "C = Celsius" << endl;

    cout << "What Unit are you wanting to convert to?: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;
        cout << "The temperature in Fahrenheit is: " << (temp * 1.8) + 32 << endl;
    } 
    else if (unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;
        cout << "The temperature in Celsius is: " << (temp - 32) / 1.8 << endl;
    } 
    else {
        cout << "Invalid Unit" << endl;
        return 1;
    }

    cout << "********************************************" << endl;

    return 0;
}