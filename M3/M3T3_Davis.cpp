/*
CSC 134
M3T3
Nathan Davis
2/21/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
void roll();
void draw();
int dice1,dice2,diceTotal = 0;


int main() {

    roll();
    diceTotal = dice1 + dice2;
    draw();
    cout << "\n";

    cout << "You rolled a " << dice1 << " and a " << dice2 << endl;

    if (diceTotal == 2 || diceTotal == 3 || diceTotal == 12) {
        cout << "Craps!";
    } else if (diceTotal == 4 || diceTotal == 10) {
        cout << "Points: " << diceTotal << "\nOdds: 2/1";
    } else if (diceTotal == 5 || diceTotal == 9) {
        cout << "Points: " << diceTotal << "\nOdds: 3/2";
    } else if (diceTotal == 6 || diceTotal == 8) {
        cout << "Points: " << diceTotal << "\nOdds: 6/5";
    } else if (diceTotal == 7 || diceTotal == 11) {
        cout << "You Win!";
    } else {
        cout << "error";
        return 0;
    }

    cout << string( 3 ,'\n' );
    return 0;
}

void roll() {
    srand(time(NULL));
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
}

void draw() {  
    int input = dice1;
    string line1,line2,line3,line4,line5,line6 = "";
    line1 = "┌───────┐  ┌───────┐\n";
    line5 = "└───────┘  └───────┘\n";
    for (int i = 0; i<2; i++) {
        switch (input) {
            case 1:
                line2 = line2 + "│       │  ";
                line3 = line3 + "│   ●   │  ";
                line4 = line4 + "│       │  ";
                break;
            case 2:
                line2 = line2 + "│       │  ";
                line3 = line3 + "│ ●   ● │  ";
                line4 = line4 + "│       │  ";
                break;
            case 3:
                line2 = line2 + "│ ●     │  ";
                line3 = line3 + "│   ●   │  ";
                line4 = line4 + "│     ● │  ";
                break;
            case 4:
                line2 = line2 + "│ ●   ● │  ";
                line3 = line3 + "│       │  ";
                line4 = line4 + "│ ●   ● │  ";
                break;
            case 5:
                line2 = line2 + "│ ●   ● │  ";
                line3 = line3 + "│   ●   │  ";
                line4 = line4 + "│ ●   ● │  ";
                break;
            case 6:
                line2 = line2 + "│ ●   ● │  ";
                line3 = line3 + "│ ●   ● │  ";
                line4 = line4 + "│ ●   ● │  ";
                break;
        }
        input = dice2;
    }
    


    line2 = line2 + "\n";
    line3 = line3 + "\n";
    line4 = line4 + "\n";
    
    cout << line1 << line2 << line3 << line4 << line5;
}