#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <cctype>

using namespace std;


double series (int n){
  if (n == 1){
    return 1;
  }
  //divide 1.0 by n^2, then add 1.0 divided by (n-1)^2 until n = 1.
  return 1.0/(n*n) + series(n-1);
}

int main() {

  //print table of results for each values of the function up until 15.
  cout << left << setw(10) << "n" << "Result" << endl;
 int n = 15;
for(int i = 1; i <= n; i++)

  cout<< left<< "n = " << setw(6) << i <<series(i)<< endl;
}