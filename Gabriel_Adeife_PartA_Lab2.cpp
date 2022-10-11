#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <iomanip>


using namespace std;

int main() {
  //declare variable for the hexagon side
double hexSide;

//constant PI declared;
const double PI = 3.1415;

std::cout << "Please enter the length of a side: ";

//takes user input of hexagon side
cin >> hexSide;

//calculates area of hexagon based on user input and prints it.
double hexArea = (6 * pow(hexSide, 2)) / (4 * tan(PI / 6));

std::cout << fixed << setprecision(2) << "The area of the hexagon is " << hexArea << std::endl;
}