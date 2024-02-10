#include <iostream>

// Including this allows us to write to a file.
#include <fstream>

using namespace std;


int main(){

    // Creates an object of ofstream.
    ofstream outFile;

    // Open's the file, can add ofstream::app to reapeat the content in the file.
    outFile.open("test.txt");

    // Incase the file being opended fails.
    if(outFile.fail()){
        cout << "Error opening file" << endl;
        return 1;
    }

    // Writes to the file.
    outFile << "Hello World!" << endl;
    
    // More Variables written to the file.
    int y = 123;
    double x = 123.456;
    string z = "Howdy";
    
    // Writes the variables to the file.
    outFile << y << endl;
    outFile << x << endl;
    outFile << z << endl;

    // Closes the file.
    outFile.close();

    return 0;
}