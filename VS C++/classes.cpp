#include <iostream>
#include <string>
using namespace std;

int main(){

// Main class is the blueprint for the object
class BankAccount{
public:
    string name;
    int balanace;

    // Class that takes away money from the account
    void withdraw(int amount){
        balanace -= amount;
    }
    // Class that adds money to the account
    void deposit(int amount){
        balanace += amount;
    }
    // Class that prints the balance
    void print(){
        cout << name << " has " << balanace << " dollars." << endl;
    }
    
} ;

    BankAccount account1;
    account1.name = "Dude";
    account1.balanace = 4000;
    account1.print();
    account1.withdraw(2000);
    account1.print();
    account1.deposit(5000);
    account1.print();
    return 0;
}