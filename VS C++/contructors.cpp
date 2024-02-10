#include <iostream>
using namespace std;
    
class Cat{
    
    private:
        
        string name;
        string color;
        string favorite_toy;

    public:

    void print_cat(){
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Favorite Toy: " << favorite_toy << endl;
    }
    
    Cat(){
        name = "unknown";
        color = "unknown";
        favorite_toy = "unknown";
    };

    Cat(string n){
    name = n;
    color = "unknown";
    favorite_toy = "unknown";
    };

    Cat(string n, string c, string ft){
        name = n;
        color = c;
        favorite_toy = ft;
    };

};

int main(){
    
    Cat cat1;
    cout << "Cat 1..." << endl;
    cat1.print_cat();
    cout << endl;

    Cat cat2("Fluffy");
    cout << "Cat 2..." << endl;
    cat2.print_cat();
    cout << endl;

    Cat cat3("Fluffy", "White", "Ball");
    cout << "Cat 3..." << endl;
    cat3.print_cat();
    cout << endl;

    return 0;
}