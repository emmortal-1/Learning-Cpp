#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // Creating a string
    string test1 = "Hello";
    // Printing the string and its length
    cout << "Size: " << test1.size() << endl;
    // Printing the first character of the string
    cout << "test1[1]: " << test1[1] << endl;
    // Printing the second character of the string
    cout << "test1[2]: " << test1[2] << endl;
    
    test1[2] = 'L';
    cout << test1 << endl;
    cout << "Length: " << test1.length() << endl;
    //cout << "Is Empty: " << test1.empty() << endl;

    test1 = test1 + "Dude";
    string test2 = "123";
    string test3;
    test3 = test1 + test2;
    cout << test3 << endl;
    
    if (test3.empty()) cout << "test3 is empty" << endl;
    else cout << "test3 is not empty" << endl;
    string test4 = to_string(-10.5);
    cout << test4 << endl;

    double number = stod(test4);
    cout << "number: " << number << endl;
    string test5 = "Hello";
    string sub = test5.substr(1,2);
    cout << sub << endl;
    
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    return 0;
}