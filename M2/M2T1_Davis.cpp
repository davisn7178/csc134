/*
CSC 134
M2T1 - Receipt
Nathan Davis
1/29/2024
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "M2T1\n";
    // set up variables
    string meal = "Value Meal";
    // al in $, except percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amaount = 0;
    double total = 0;
    
    // do calculations

    // print the receipt
    cout << meal << "\t$" << meal_price << endl;
    cout << "Tax" << "\t\t$" << tax_amaount << endl;
    cout << "Total" << "\t\t$" << total << endl;
    // exit
    cout << string( 5, '\n' );
    return 0;
}
