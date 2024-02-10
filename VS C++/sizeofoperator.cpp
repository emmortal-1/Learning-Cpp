#include <iostream>
using namespace std;

int main(){

    double gpa = 2.5;
    string name = "John";
    int age = 21;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    
    // The sizeof operator is used to get the size of a variable in Bytes
    cout << "Size of double: " << sizeof(double) << " Bytes" << endl;
    cout << "Size of string: " << sizeof(string) << " Bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " Bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " Bytes" << endl;
    cout << "Size of grades: " << sizeof(grades) << " Bytes" << endl;

    // To get the number of elements in an array, we can divide the size of the array by the size of the data type
    cout << sizeof(grades)/sizeof(char) << " Elements" << endl;
    
    return 0;
}