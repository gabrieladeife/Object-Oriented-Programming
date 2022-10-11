#include <iostream>
#include "MyInteger.h"

using namespace std;

int main() {
  //prints average of integers.
cout << "The average of integers is " << MyInteger::getAverageOfIntegers() << endl;

cout << "isOdd(3) = " <<  MyInteger::isOdd(3) << endl;

//creates new objects.
MyInteger i1(9323);

MyInteger i2(147);

MyInteger i3(9323);

//uses member functions of objects, and prints them. also prints the average of all newly created objects.
cout << "i1.isEven() = " << i1.isEven() << endl << "i3.equals(843) = " << i3.equals(843) << endl << "i1.equals(i3) = " << i1.equals(i3) << endl;

cout << "The average of integers is " << MyInteger::getAverageOfIntegers();
}