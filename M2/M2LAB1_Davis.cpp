/*
M2LAB1
Crate Sales
Nathan Davis
2/5/24
*/
#include <iostream>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double area, volume, cost, charge, profit;
    const double cost_per_cubic_foot = 0.23;
    const double charge_per_cubic_foot = 0.5;
    cout << "Enter Dimensions\n";
    cout << "Length:\t";
    cin >> length;
    cout << "Width:\t";
    cin >> width;
    cout << "Height:\t";
    cin >> height;
    // Do Calcs
    area = length * width;
    volume = area * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;
    // print the answer

    cout << string ( 15, '-' ) << endl;
    cout << "Volume:\t" << volume << " Cubic Feet" << endl;
    cout << "Cost:\t$" << cost << endl;
    cout << "Charge:\t$" << charge << endl;
    cout << "Profit:\t$" << profit << endl;

    cout << string( 5 ,'\n' );
    return 0;
}
