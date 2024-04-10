#include <iostream>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
[Nathan Davis]
[4/10/24]
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_break_window();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Break in through the window" << endl;
  cout << "4. Forget it, and go home" << endl;
  cout << "5. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_break_window();
  } else if (4 == choice) {
    choice_go_home();
  }  else if (5 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Break in through the window" << endl;
  cout << "3. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_break_window();
  } else if (3 == choice) {
    choice_go_home();
  } 
}

void choice_back_door() { cout << "You go try the back door and it opens, the last thing you see is the barrel of a gun..." << endl; }

void choice_go_home() { cout << "You give up and go home..." << endl; }

void choice_break_window() { cout << "You decide to try break your way in through the window" << endl; 
  cout << "After breaking your way in you find a table with two items on it. You decide to take:" << endl;
  cout << "1. A gold necklace" << endl;
  cout << "2. A silver ring" << endl;
  int choice;
  cin >> choice;
  if (1 == choice) {
    cout << "You grab the golden necklace and escape back through the window you entered" << endl;
  } else if (2 == choice) {
    cout << "You grab the silver necklace and escape back through the window you entered" << endl;
  }
}