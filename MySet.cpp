#include "MySet.h"
#include <iostream>

MySet::MySet(unsigned range){
  size =0;
  this->range = range;
  set = new bool[range];
  for(int i = 0; i < range; i++){
    set[i] = false;
  }
}

MySet::MySet(const MySet& mySet){
  set = new bool[mySet.range];
  range = mySet.range;
  size = mySet.size;

  for(int i = 0; i < range; i++){
    set[i] = mySet.set[i];
  }
}

MySet::~MySet(){
  delete [] set;
}

void MySet::insertElement(int k) {
  if (k > range || k <= 0) {std::cout << "Invalid insert attempt for number " << k << "!" << std::endl;}
  else {
    size++;
    set[k] = true;
  }
}

void MySet::deleteElement(int m){
  if ( m > range || m <= 0) {std::cout << "Invalid delete attempt for number" << m << "!" << std::endl;}
  else {
    size--;
    set[m] = false;
  }
}

 void MySet::printSet() const {
   if(size > 0){
   std::cout << "{ " ;
    for(int i = 0; i <= range; i++){
      if (set[i] == true){
      std::cout << i;
      if(set[i] < size)std::cout << ", ";
      }
    }
    std::cout << " }" << std::endl;
   }

    if(size == 0){
      std::cout << "{ --- }" << std::endl;
    }
   
}

bool MySet::isEqualTo(const MySet& other) const{
  return set == other.set;
}

int MySet::countPrimeNumbers() const{
  int count = 0;
  for(int i =0; i< range; i++){
    if(set[i] == true) 
      for(int j = 2; j < i / 2; j++){
          if( ! (i % j)) break;
          else count++; 
        }
      }
  return count;
  }