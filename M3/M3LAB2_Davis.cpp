/*
CSC 134
M3LAB2
Nathan Davis
2/26/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    int gradeNum = -1;
    string letter = "";
    cout << "Input Numerical Grade: ";    
    cin >> gradeNum;

    if (gradeNum >= 90) {
        letter = "A";
    } else if (gradeNum >= 80) {
        letter = "B";
    } else if (gradeNum >= 70) {
        letter = "C";
    } else if (gradeNum >= 60) {
        letter = "D";
    } else {
        letter = "F";
    }

    cout << "Letter Grade: " << letter;

    cout << string( 3 ,'\n' );
    return 0;
}
