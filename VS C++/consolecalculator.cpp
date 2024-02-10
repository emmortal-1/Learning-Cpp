#include <iostream>
using namespace std;

int main(){

    // Variables
    char op;
    double num1, num2;
    double result;

    cout << "************Console Calculator************" << endl;
    
    // User input
    cout << "Enter either (+ - * /): ";
    cin >> op;
    
    // if statement to check if user input is one of the valid operators
    if (op != '+' , '-' , '*' , '/'){
        cout << "Invalid operator";
        return 1;
    } 
    else cin >> op;
    
    // User input
    cout << "Enter first number: ";
    cin >> num1;
    
    // User input
    cout << "Enter second number: ";
    cin >> num2;

    // Switch statement
    switch(op){
        case '+':
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
            break;
    }
    
    cout << "******************************************" << endl;

    return 0;
}