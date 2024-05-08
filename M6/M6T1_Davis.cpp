/*
CSC 134
M6T1
Nathan Davis
5/08/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

void count() {
const char * weekday[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
int total = 0;
int average = 0;
for (int i = 0; i < 5; i++) {
    int day = rand() % 101;
    total = total + day;
    cout << weekday[i] << ": " << day << endl;
}
average = total / 5;
cout << "Total: " << total << endl;
cout << "Average: " << average << endl;
}

void countArray() {
const char * weekday[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
int day[] = {};
int total = 0;
int average = 0;
for (int i = 0; i < 5; i++) {
    day[i] = rand() % 101;
    total = total + day[i];
    cout << weekday[i] << ": " << day[i] << endl;
}
average = total / 5;
cout << "Total: " << total << endl;
cout << "Average: " << average << endl;
}

int main() {
cout << "Without Array:" << endl;
count();

cout << string( 3 ,'\n' );

cout << "With Array:" << endl;
countArray();

    cout << string( 3 ,'\n' );
    return 0;
}