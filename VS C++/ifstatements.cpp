#include <iostream>

using namespace std;

int main(){
  int price = 40;
  // If Statement
  if (price <= 90){
    cout << "price <= 90" << endl;
    cout << "Good deal!" << endl;
  }
  
  // Else Statement
  else if (price <= 50)
    cout << "Amazing deal!" << endl;
  
  // We can have as many else if branches and conditions as we like...
  else if (price >= 200){
    cout << "Very bad price!" << endl;
  }
  
  else cout << "Not a good deal!" << endl;

  cout << "If Statement Done!" << endl;

  return 0;
}