#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main(){

    // Calling the function
    bakePizza("Pepperroni", "Cheese");

    return 0;
}
    
    // Function overloading, same function, different parameters
    void bakePizza(){
        cout << "Here is your Pizza." << endl;
    }
    void bakePizza(string topping1){
        cout << "Here is your " << topping1 << " Pizza." << endl;
    }
    void bakePizza(string topping1, string topping2){
        cout << "Here is your " << topping1 << " and " << topping2 << " Pizza." << endl;
    }