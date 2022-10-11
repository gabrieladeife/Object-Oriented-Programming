#include <iostream>
#include "myVector.h"

int main() {
  myVector<int>* a = new myVector<int>(8);
//dynamically created myvector.
  a->insertBeg(4);
  a->insertEnd(6);

//no arg myvector 
  myVector<int> b;

//copy constructor myvector
  myVector<int>c = *a;

  //testing functions of MyVector.h
  std::cout <<"Size of Vector A after inserting 2 elements: " << a->getSize() << std::endl << "Capacity of A after inserting 2 elements: " << a->getCapacity() << std::endl;

  a->removeEnd();

  std::cout << "Size of Vector A after removing 1 element: " << a->getSize() << std::endl << "Capacity of A after removing  1 element: " << a->getCapacity() << std::endl;

  b.insertBeg(12);
  b.insertBeg(4);
  b.insertEnd(18);

  std::cout << "Size of Vector B after inserting 3 elements : " << b.getSize() << std::endl << "Capacity of B after removing 1 element: " << b.getCapacity() << std::endl;

  b.removeEnd();
  b.removeEnd();
  b.removeBeg();

  std::cout << "Size of Vector B after removing 3 elements: " << b.getSize() << std::endl << "Capacity of B after removing 3 elements: " << b.getCapacity() << std::endl;

  c.insertBeg(7);
  c.insertEnd(5);

  std::cout << "Size of Vector C after inserting 2 elements: " << c.getSize() << std::endl << "Capacity of C after inserting 2 elements: " << c.getCapacity() << std::endl;

  a->~myVector();

  std::cout << "Deleted Vector A";
} 