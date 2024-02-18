/*
CSC 134
M2HW1
Nathan Davis
2/18/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Question 1
    cout << "Question 1 -\n\n";
    string name = "";
    double deposit,withdrawal,bal;
    cout << "Welcome to the bank. Please enter the following information:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Deposit Amount: $";
    cin >> deposit;
    cout << "Withdrawal Amount: $";
    cin >> withdrawal;
    bal = deposit - withdrawal;
    cout << endl;
    cout << name << "\t" << "78293018744\n";
    cout << "Balance: $" << bal << endl;

    cout << string( 20 ,'-' );

    // Question 2
    cout << "\nQuestion 2 -\n\n";

    double length, width, height;
    double area, volume, cost, charge, profit;
    const double cost_per_cubic_foot = 0.3;
    const double charge_per_cubic_foot = 0.52;
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

    cout << "\n\n";
    cout << "Volume:\t" << volume << " Cubic Feet" << endl;
    cout << "Cost:\t$" << cost << endl;
    cout << "Charge:\t$" << charge << endl;
    cout << "Profit:\t$" << profit << endl;

    cout << string( 20 ,'-' );
    // Question 3
    cout << "\nQuestion 3 -\n\n";
    int pizzaAmount,slices,people,remainder;    
    cout << "Pizza Calculator\n";
    cout << "How many pizzas were ordered: ";
    cin >> pizzaAmount;
    cout << "How many slices per pizza: ";
    cin >> slices;
    cout << "How many people are eating: ";
    cin >> people;
    remainder = (pizzaAmount*slices) % (3*people);
    cout << "The amount of pizza slices left over are: " << remainder << endl;
    cout << string( 20 ,'-' );

    // Question 4

    cout << "\nQuestion 4 -\n\n";
    string school,team,letsGo,cheerOne,cheerTwo;
    school = "FTC!";
    team = "Trojans!";
    letsGo = "Let's go ";
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    for (int i = 0; i < 3; i++) {
        cout << cheerOne << endl;
    }
    cout << cheerTwo;
    cout << string( 3 ,'\n' );
    return 0;
}
