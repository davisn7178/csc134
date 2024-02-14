/*
CSC 134
M3T2
Nathan Davis
2/14/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int length1,width1,area1;
    int length2,width2,area2;
    // Ask for width and length or first rect
    cout << "Width: ";
    cin >>  width1;
    cout << "Length: ";
    cin >> length1;
    area1 = length1 * width1;
    cout << "Area: " << area1;

    cout << "\n\n";

    cout << "Width: ";
    cin >>  width2;
    cout << "Length: ";
    cin >> length2;
    area2 = length2 * width2;
    cout << "Area: " << area2;

    cout << "\n\n";

    if (area1 > area2) {
        cout << "The first rectangle has a larger area";
    } else if (area1 == area2) {
        cout << "The two rectangles have the same area";
    } else {
        cout << "The second rectangle has a larger area";
    }


    cout << string( 3 ,'\n' );
    return 0;
}
