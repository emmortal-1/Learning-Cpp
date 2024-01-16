#include <iostream>
using namespace std;

int main(){
    
    int x;
    cout << "Enter an Integer: ";
    if (cin >> x){
        cout << "You Entered: " << x << endl;
    }
    else {
        cin.clear();
        cout << "Invalid Input" << endl;
    }

    cin.ignore(1000 , '\n');

    double height = 0;
    double width = 0;
    double area = 0;
    
    cout << "Enter the Width and Height (Seperated by a Space): ";

    cin >> width >> height;
    area = height * width;
    cout << width << " x " << height << " = " << area << endl;
    

   string name;

    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    
    return 0;
}