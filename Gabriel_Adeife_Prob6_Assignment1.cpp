#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
 int num;
 cout << "Enter a number between 0 and 1000: ";

 cin >> num;

int numLastDig = num % 10;
int numSumHalf = num / 10;
int numSum = (numSumHalf / 10) + (numSumHalf % 10) + numLastDig;
 cout << "The sum of the digits is  " << numSum << endl;
}