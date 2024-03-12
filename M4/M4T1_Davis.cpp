/*
CSC 134
M4T1
Nathan Davis
3/12/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int i = 0;
    while (i <= 5) {
        cout << "Hello\n";
        i++;
    }
    cout << endl;

    const int minNum = 1;
    const int maxNum = 10;

    int num = minNum;

    cout << "Number Number Squared\n";
    cout << string( 25 ,'-' ) << endl;
    while (num <= maxNum) {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }


    cout << string( 3 ,'\n' );
    return 0;
}
