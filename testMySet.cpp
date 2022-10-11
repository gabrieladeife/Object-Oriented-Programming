#include <iostream>
#include "MySet.h"
int main() {
  std::cout << "Hello World!\n";

  MySet a(20);

  a.insertElement(7);
  a.insertElement(13);
  a.insertElement(20);
  a.insertElement(21);
  a.printSet();
  a.deleteElement(22);
  a.deleteElement(13);
  a.printSet();
  MySet b(100);
  
  MySet c(a);
  std::cout << "Number of prime numbers is " << a.countPrimeNumbers() << std::endl; 
  b.printSet();

  std::cout << c.isEqualTo(a);
} 