#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string name;
    
    cout << "Enter your name: ";
    cin >> name;

    // if statement with length() method
    if (name.length() > 12){
        cout << "Your name is too long" << endl;
    } 
    else {
        cout << "Your name is: " << name << endl;
    }

    // if statement with empty() method
    if (name.empty()){
        cout << "You did not enter a name" << endl;
    } 
    else {
        cout << "Your name is: " << name << endl;
    }

    // if statement with append() method
    name.append("@gmail.com")
    cout << "Your email is: " << name << endl;

    /*
    // insert() method
    name.insert(0, "Mr. ");
    */

    /*
    // name() method
    name.find(' ');
    */
    
    /*
    // erase() method
    name.erase(0, 4);
    */

    return 0;
}