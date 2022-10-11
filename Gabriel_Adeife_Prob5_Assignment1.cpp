#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
  int code;

  cout << "Enter an ASCII code: ";
  
  cin >> code;

  char codeConv = code;

  cout << "The character is " << codeConv;
}