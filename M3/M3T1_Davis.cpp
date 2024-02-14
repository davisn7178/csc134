/*
CSC 134
M3T1
Nathan Davis
2/14/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int length,width,area;
    // Ask for width and length or first rect
    cout << "Width: ";
    cin >>  width;
    cout << "Length: ";
    cin >> length;
    area = length * width;
    cout << "Area: " << area;


    cout << string( 3 ,'\n' );
    return 0;
}
