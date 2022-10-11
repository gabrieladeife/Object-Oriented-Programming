#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;


//function that gets the amount of digits in n by reducing n using division by 10 until it is 0 and incrementing a counter for each time that process occurs.
int getDigit(int n){
  int count;
  while (n != 0){
    n = n/10;
    count++;

  }
  return count;
}

//takes user input for an integer and uses the getDigit function and prints the amount of digits found.
int main() {
  int num;
  cout <<"Please enter an integer: ";
  
  cin >> num;

  cout << "There are " << getDigit(num) << " digits";
}