#include <iostream>
using namespace std;

class Rectangle{

private:

  double length;
  double width;

  double area(){
    return length * width;
  }
  
public:
  
  void set_dimensions(double l, double w = 5){
    length = l;
    width = w;
  }
  
  double perimeter();
  
  void print_area(){
    cout << "Area: " << area() << endl;
  }
  
};

double Rectangle::perimeter(){
  return 2 * (length + width);
}

int main(){
  
  Rectangle rectangle1;

  rectangle1.set_dimensions(10, 20);

  cout << "Perimeter: " << rectangle1.perimeter() << endl;
  rectangle1.print_area();
  
  Rectangle rectangle2;
  
  rectangle2.set_dimensions(5);
  
  cout << "Perimeter: " << rectangle2.perimeter() << endl;
  rectangle2.print_area();
  
  return 0;
}