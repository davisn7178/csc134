/*
CSC 134
M2T1 - Receipt
Nathan Davis
1/29/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    cout << "M2T1\n";
    cout << "Thank you for dining with us\n";
    cout << string( 20, '-') << endl;
    // set up variables
    string meal = "Value Meal";
    // al in $, except percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;
    
    // do calculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;
    // print the receipt
    // print this once to set the decimals to 2
    cout << fixed << setprecision(2);
    cout << meal << "\t$" << meal_price << endl;
    cout << "Tax" << "\t\t$" << tax_amount << endl;
    cout << string( 20, '-') << endl;
    cout << "Total" << "\t\t$" << total << endl;
    // exit
    cout << string( 5, '\n' );
    return 0;
}
