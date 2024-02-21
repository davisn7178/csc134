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
    
    cout << string( 3 ,'\n' );
    return 0;
}

void roll() {
    srand((unsigned int)time(NULL));
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
                line2 = line2 + "│   ●   │  ";
                line3 = line3 + "│       │  ";
                line4 = line4 + "│   ●   │  ";
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