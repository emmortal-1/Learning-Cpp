#include <iostream>
#include <string>
using namespace std;

// Main class is the blueprint for the object
class Employee{
    
    // Public variables and functions can be accessed by the class and the main function
    public:
        string name;
        
        // Setter Function for the Salary
        void set_salary(double potential_salary){
            salary = potential_salary;
        }

        // Getter Function for the Salary
        double get_salary(){
            return salary;
        }
        
        // Printing the Salary
        void print(){
            cout << name << " is paid " << salary << "$ dollars a year." << endl;
        }
        
        // Printing the Bonus
        void print_bonus(){
            cout << name << "'s bonus is: " << calculate_bonus() << "$" << endl;
        }
    
    private:
        
        // Private variable that can only be accessed by the class (Hold the Employee's Salary)
        double salary;
        
        // Private function that can only be accessed by the class (Calculates the bonus)
        double calculate_bonus(){
            return salary * 0.10;
        }
};

 // Main function
int main(){
    
    // Creating an object of the class
    Employee employee1;
    employee1.name = "Dude";
    employee1.set_salary(40000);
    employee1.get_salary();
    employee1.print();
    employee1.print_bonus();
    return 0;
}