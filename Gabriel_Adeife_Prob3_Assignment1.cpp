#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
 int num;
cout << "Please enter an integer to see if the given number is divisible by 4: ";
cin >> num;
int quotient = num / 4;
int remainder = num % 4;

if (num < 0) cout << "The program does not accept negative numbers.";

else if (remainder == 0 && num <= 100) cout << "The given number (" << num << ") is divisible by 4" << endl << "Quotient: " << quotient << " and Remainder: " << remainder << endl;


else if (remainder != 0 && num <= 100) cout << "The given number (" << num << ") is not divisible by 4" << endl << "Quotient: " << quotient << " and Remainder: " << remainder << endl;


int numSqrt = sqrt(num);
if (num > 100) cout << "The entered number is greater than 100 and the square root of the number is " << numSqrt;
}