#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <cctype>

using namespace std;

//swap case function
string swapCase (const string& s){
  int slength = s.length();

  //create new string with same elements as constant string s
  string s2 = s;

//loop through string elements and check ASCII values, if char is greater than or equal to capital letter, subtract to lowercase and vice versa.
for (int i = 0; i < slength; i++){
if (s.at(i) < 97)
{
 s2.at(i) = s2.at(i) + 32;
}
if (s.at(i) >= 97)
s2.at(i) =  s2.at(i) - 32;
}

return s2;
}


//have user enter string and print new string.
int main() {
  string s;

  cout << "Enter a string: ";

  cin >> s;
  
  cout << "The new string is: " << swapCase(s) << endl;
}