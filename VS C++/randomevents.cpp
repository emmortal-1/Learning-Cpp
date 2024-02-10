#include <iostream>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1:
            cout << "You will have a great day today!" << endl;
            break;
        case 2:
            cout << "You will have a bad day today!" << endl;
            break;
        case 3:
            cout << "You will have a good day today!" << endl;
            break;
        case 4:
            cout << "You will have a terrible day today!" << endl;
            break;
        case 5:
            cout << "You will have a wonderful day today!" << endl;
            break;
    }

    return 0;
}