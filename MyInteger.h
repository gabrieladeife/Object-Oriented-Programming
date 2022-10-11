#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger{
  private:
  int value;
  static double averageOfIntegers;
  static int sumOfIntegers;
  static int numberOfObjects;

  public:
  //no arg constructor
    MyInteger();

  //user defined constructor
    MyInteger(int _value);

//constant getValue, isEven, equals functions, makes functions immutable.
   int getValue() const;
   bool isEven() const;
   static bool isOdd(int); 
   bool equals(int) const;
   bool equals(const MyInteger &myInt) const;

   static double getAverageOfIntegers();
};

#endif