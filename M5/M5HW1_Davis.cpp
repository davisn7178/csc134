/*
CSC 134
M#T#
Nathan Davis
4/21/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    //Question 1
    string mn1,mn2,mn3;
    int m1,m2,m3,mavg;
    cout << "Average Rainfall Calculator\n";
    cout << "Enter First Month: ";
    cin >> mn1;
    cout << "Rainfall for " << mn1 << ": ";
    cin >> m1;
    cout << "Enter Second Month: ";
    cin >> mn2;
    cout << "Rainfall for " << mn2 << ": ";
    cin >> m2;
    cout << "Enter Third Month: ";
    cin >> mn3;
    cout << "Rainfall for " << mn3 << ": ";
    cin >> m3;
    mavg = (m1+m2+m3)/3;
    cout << string (2,'\n') << "The average rainfall for " << mn1 << ", " << mn2 << ", and " << mn3 << " is " << mavg;

    cout << string( 3 ,'\n' );

    //Question 2
    double width,length,height,volume;
    cout << "Hyperrectangle Volume Calculator\n";
    cout << "Width: ";
    cin >> width;
    cout << "Length: ";
    cin >> length;
    cout << "Height: ";
    cin >> height;
    if (width <= 0 || length <= 0 || height <= 0) {cout << "Error, input invalid...";}
    else {volume = (length*width*height); cout << "Volume: " << volume;}

    cout << string(3,'\n');

    //Question 3
    int num;
    string rome[] = {"I","II","III","IV","V","VI","VII","VIII","IX","X"};
    cout << "Roman Numeral Converter:\n";
    cout << "Enter a number (1-10): ";
    cin >> num;
    if(num < 1 || num > 10) {cout << "Error, Input invalid..."; return 0;}
    cout << "The Roman Numeral Version of " << num << " is " << rome[num-1];

    cout << string(3,'\n');
    return 0;
}
