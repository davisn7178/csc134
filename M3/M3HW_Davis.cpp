/*
CSC 134
M3HW
Nathan Davis
3/3/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

    // Question 1
    cout << "Question 1 -\n\n";

    string color = "";
    cout << "Hello, I'm a C++ chat bot." << endl;
    cout << "Let's try to learn more about each other!\nWhat's your favorite color?" << endl;
    cin >> color;
    cout << "Really? " << color << "? Actually lets not try to get to know each other..." << endl;

    cout << string( 20 ,'-' );
    // Question 2
    cout << "\nQuestion 2 -\n\n";

    cout << "Thank you for dining with us\n";
    cout << string( 10, '-') << endl;
    // set up variables
    string meal = "Value Meal";
    // al in $, except percent
    double meal_price = 0;
    double tax_percent = 0.00;
    double tax_amount = 0.00;
    double total = 0;
    int stayGo = 0;

    cout << "Enter the meal price: ";
    cin >> meal_price;

    cout << endl << "Please enter 1 to dine here or 2 to go: ";
    cin >> stayGo;

    
    // do calculations
    
    if (stayGo == 1) {
        tax_percent = 0.15;
        tax_amount = meal_price * tax_percent;
    }
    
    total = meal_price + tax_amount;
    // print the receipt
    // print this once to set the decimals to 2
    cout << fixed << setprecision(2);
    cout << meal << "\t$" << meal_price << endl;
    cout << "Tip" << "\t\t$" << tax_amount << endl;
    cout << string( 10, '-') << endl;
    cout << "Total" << "\t\t$" << total << endl;

    cout << string( 20 ,'-' );
    // Question 3
    cout << "\nQuestion 3 -\n\n";

    string pass = "";
    cout << "You come across two doors, a red door and a blue one.";
    cout << "Which colored door do you want to pass through: ";
    cin >> pass;

    if (pass == "red" || pass == "Red") {
        cout << endl << "You open the red door and a burst of red hot flames consume you.\n";
        cout << "You Died.\n";
    } else {
        cout << endl << "You open the blue door and a rush of blue cold water sweeps past you\n";
        cout << "After a moment it steadies at waist height and you trudge forward and find two staircases, one ascending and the other descending\n";
        cout << "Do you want to go up or down: ";
        cin >> pass;

        if (pass == "up" || pass == "Up") {
            cout << endl << "You ascend out of the water and towards your freedom. Good job!\n";
        } else {
            cout << endl << "You descend into the water and drown... What did you expect was going to happen?\n";
        }
    }

    cout << string( 20 ,'-' );
    // Question 4
    cout << "\nQuestion 4 -\n\n";

    srand(time(NULL));
    int num1 = rand() % 50 + 1;
    int num2 = rand() % 50 + 1;
    int answer = 0;
    cout << "What is " << num1 << " + " << num2 << "?" << endl;

    cin >> answer;

    if (answer == num1 + num2) {
        cout << "Correct";
    } else {
        cout << "Incorrect";
    }

    cout << string( 3 ,'\n' );
    return 0;
}
