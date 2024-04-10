// M5LAB2
// Nathan Davis
// 4/10/2024

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
double displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength() { double length; cout << "Length: "; cin >> length; return length; }
double getWidth() { double width; cout << "Width: "; cin >> width; return width; }
double getArea(double length, double width) { double area = length * width; return area; }
double displayData(double length, double width, double area) { cout << endl << "Length: " << length << endl << "Width: " << width << endl << "Area: " << area << endl; }