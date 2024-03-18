/*
CSC 134
M#T#
Nathan Davis
3/18/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int input = 0;
    bool done = false;
    
    cout << "Times Table\n\n";
    cout << "Input a number 1 - 12\n";
    
    cin >> input;
    
    while (!done) {
        if(input >= 1 && input <= 12) {
            done = true;
        } else {
            cout << "Invalid Input. Please input a number 1 - 12\n";
            cin >> input;
        }
    }
    
    cout << string( 2 ,'\n' );
    
    for(int i = 0; i < 13; i++) {
        cout << input << " * " << i << " = " << input * i << endl;
    }


    cout << string( 3 ,'\n' );

    return 0;
}
