#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream inFile;

    inFile.open("ifstreamtest.txt");
    
    if (inFile.fail()){
        cout << "Error opening file." << endl;
        return 1;
    }

    /*
    int number = 0;
    
    inFile >> number;
    
    // If the programs trys to store multiple values in a single variable, it will print this Error.
    inFile >> number;
    if (inFile.fail()){
        cout << "Error file format Incorrect." << endl;
        return 1;
    }

    cout << number << endl;
    */
   
   
   /*
    
    double x1 = 0, x2 = 0, x3 = 0;
    
    while (true){
        inFile >> x1 >> x2 >> x3;
        if (inFile.eof()) break;
        cout << x1 << " " << x2 << " " << x3 << endl;
    }
    */

    /*
    double a[3][3];
    int i = 0;
    while (inFile >> a[i][0] >> a[i][1] >> a[i][2])
        i++;

    cout << endl;
    for (int j = 0; j < 3; j++)
    {
        cout << a[j][0] << " ";
        cout << a[j][1] << " ";
        cout << a[j][2] << endl;
    }
    */
    
   /*
    string line;
    
    // inFile >> line;
    getline(inFile, line);
    cout << line << endl;
    */

    inFile.close();

    return 0;
}