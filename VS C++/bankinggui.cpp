#include <iostream>
#include <iomanip>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    
    double balance = 120.555;
    int choice = 0;
    
    do{

        cout << "*****************************" << endl;
        cout << "Welcome to the banking system" << endl;
        cout << "*****************************" << endl;
        cout << endl;
        cout << "What would you like to do today?: " << endl;
        cout << "1. Show balance" << endl;
        cout << "2. Deposite Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showbalance(balance);
                    break;
            case 2: balance += deposit();
                    showbalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showbalance(balance);
                    break;
            case 4: cout << "Thank you for using the banking system" << endl;
                    break;
            default:cout << "Invalid option" << endl;
                    break;
        }
    
    }while(choice != 4);
    
    return 0;
}

void showbalance(double balance){
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << endl;
}

double deposit(){
    
    double amount = 0;
    cout << "Enter the amount you would like to deposit: " << endl;
    cin >> amount;
    
        if (amount > 0){
            return amount;
        }else {
            cout << "Invalid amount" << endl;
            return 0;
    }   
}

double withdraw(double balance){
    
    double withdraw;

    cout << "Enter the amount you would like to withdraw: " << endl;
    cin >> withdraw;

        if (withdraw > balance){
            cout << "Insufficient funds" << endl;
            return 0;
    }

    return 0;
}
