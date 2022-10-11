#include "MyInteger.h"

//initialize values of the variables.
int MyInteger::numberOfObjects = 0;
int MyInteger::sumOfIntegers = 0;
double MyInteger::averageOfIntegers = 0;
//constructors.
MyInteger::MyInteger(){
  value = 0;
  numberOfObjects++;
}

MyInteger::MyInteger(int _value){
  value = _value;

  numberOfObjects++;

  sumOfIntegers += value;
//gets average of the values of all objects.
  averageOfIntegers = (double)sumOfIntegers / numberOfObjects;
}

//member functions
int MyInteger::getValue() const{
  return value;
}
//checks even and returns true or false.
bool MyInteger::isEven() const{
  if(value % 2 == 0) return true;
  else return false;
}
//checks odd and returns true or false.
bool MyInteger::isOdd(int num) {
  if(num % 2 == 1) return true;
  else return false;
}
//checks if object value is equal to input value.
bool MyInteger::equals(int num) const{
 if(value == num) return true;
 else return false; 
}
//checks if object1 value is equal to object2 value.
bool MyInteger::equals(const MyInteger &myInt) const{
  if(value == myInt.getValue()) return true;
  else return false;
}
//returns value 
double MyInteger::getAverageOfIntegers(){
  return averageOfIntegers;
}