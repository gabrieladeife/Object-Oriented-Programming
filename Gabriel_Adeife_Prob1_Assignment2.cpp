#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctype.h>

using namespace std;
int evenCount(int value){

  if(value == 0) return 0;

  if((value % 10) % 2 == 0) return 1 + evenCount(value / 10);

  if((value % 10) == 0) return 1 + evenCount(value / 10);

  else return 0 + evenCount(value / 10);
}


int main() {
  int num = 0;
  
  std::cout << "Enter the number: ";
  std::cin >> num;
  std::cout << "The number of even digits: " << evenCount(num);
}