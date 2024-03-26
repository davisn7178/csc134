/*
CSC 134
M5T2
Nathan Davis
3/26/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int square(int num) {
    return pow(num, 2);
}

void printAnswer(int num, int squared) {
    cout << num << "^2 = " << squared << endl;
}

int main() {
    int max = 10;
    for(int i = 1; i <= max; i++) {
        int squared = square(i);
        printAnswer(i, squared);
    }

    cout << string( 3 ,'\n' );
    return 0;
}
