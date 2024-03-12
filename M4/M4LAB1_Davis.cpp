/*
CSC 134
M4LAB1
Nathan Davis
3/12/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int width = 5;
    int height = 5;
    int j = 1;
    while (j <= height) {
        for (int i=0; i < width; i++) {
            cout << "* ";
        } 
        cout << endl;
        j++;
    }

    cout << string( 3 ,'\n' );
    return 0;
}
