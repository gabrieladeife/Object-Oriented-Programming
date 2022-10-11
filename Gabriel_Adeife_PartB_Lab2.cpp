#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <iomanip>


using namespace std;

int main() {
//declares palindrome string object
string palindrome;
 
//prompts user to enter a five letter string.
std::cout << "Please enter a string with five lowercase letters: ";

//takes user string input
cin >> palindrome;

//checks for if user enters more than 5 letters and gives error
if (palindrome.length() > 5) cout << "Longer than five characters!" << endl;

//checks for if the string is a palindrome using logic operators and prints result.
if((palindrome.at(0) == palindrome.at(palindrome.length() - 1)) && (palindrome.at(1) == palindrome.at(palindrome.length() -2)))
  cout << "It is a palindrome!" << endl;
else cout << "It is not a palindrome!" << endl;

return 0;
}