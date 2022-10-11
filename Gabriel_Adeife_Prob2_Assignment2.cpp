#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    srand(time(0));
  int a, b;
  int rollsum, rollsum2;
bool win = false;
bool lose = false;

while(win != true && lose == false){
  a = rand() % 5 + 1;
  b = rand() % 5 + 1;
  rollsum = a + b;
  if (rollsum == 11 || rollsum == 7) {
    cout << "You rolled " << a << " + " << b << " = " << rollsum << endl << "You win";
    win = true;
    break;
  }

  if (rollsum == 2 || rollsum == 3 || rollsum == 12){
    cout << "You rolled " << a << " + " << b << " = " << rollsum << endl << "You lose" << endl;
    lose = true;
    break;
  }

  else {
    cout << "You rolled " << a << " + " << b << " = " << rollsum << endl << "Point is " << rollsum << endl;
  do {
  
    a = rand() % 5 + 1;
    b = rand() % 5 + 1;
    rollsum2 = a + b;

    if (rollsum2 == 7){ cout << "You rolled " << a << " + " << b << " = " << rollsum2 << endl << "You lose";
    lose = true;
    }

    if (rollsum2 == rollsum) {cout << "You rolled " << a << " + " << b << " = " << rollsum2 << endl << "You win";
    win = true;
    }

  }
  while(win != true && lose == false);
  }
}
}