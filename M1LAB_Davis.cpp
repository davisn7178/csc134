/*
CSC 134
M1LAb- Apple Sales
Nathan Davis
1/24/2024
*/

#include <iostream>
using namespace std;

int main() {
    cout << "M1LAB - Apple Sales\n";
    // Simulate seling apples
    // Set up variables (nouns)
    string name = "Nathan";    
    int num_apples = 20;
    double price_per_apple = 0.25;

    // Do the calculations
    double total_price = 0;
    // NOTE: math operations are + = * /
    total_price = num_apples * price_per_apple;

    // Print the output
    cout << "Welcome to the " << name << " Apple Orchard.\n";
    cout << "We have " << num_apples << " apples for sale.\n";
    cout << "At a cost of $" << price_per_apple << " each.\n";
    cout << "For a total cost of $" << total_price;

    cout << "\n\n";
    return 0;
}
