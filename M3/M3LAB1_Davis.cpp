/*
CSC 134
M3LAB1
Nathan Davis
2/19/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void button1();
void button2();
void button3();
string choice = "";


int main() {

  cout << "Infront of you are three buttons" << endl;
  cout << "One grants immortality" << endl;
  cout << "Another will half your remaining lifespan" << endl;
  cout << "And the other will kill you instantly" << endl;
  cout << "Make your choice: ";
  cin >> choice;

  if ("1" == choice) {
    button1();
  } else if ("2" == choice) {
    button2();
  } else if ("3" == choice) {
    button3();
  } else {
    cout << "You decide its not worth it";
  }

  cout << string( 2 , '\n');
  return 0;

}

void button1() {
  cout << "You Press Button 1" << endl;
  cout << "You are alive, although unsure of the outcome..." << endl;
  cout << "Would you like to find out? ";
  cin >> choice;
   if (choice == "yes" || choice == "Yes" || choice == "YES") {
    cout << "...";
 } else {
    cout << "After some time you become certain of the outcome";
 }
}

void button2() {
  cout << "You Press Button 2" << endl;
  cout << "..." << endl;
}

void button3() {
 cout << "You Press Button 3" << endl;
 cout << "You are alive, although unsure of the outcome..." << endl;
 cout << "Would you like to find out? ";
 cin >> choice;
 if (choice == "yes" || choice == "Yes" || choice == "YES") {
    cout << "You are immortal";
 } else {
    cout << "After some time you become certain of the outcome";
 }
 
}