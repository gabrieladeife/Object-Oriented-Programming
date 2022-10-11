#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
//initialize variables m and mToFt
  int m = 1;
  double mToFt = m * 3.280;

//print with a left alignment, at width 10, with precision having 3 digits after the decimal point.
  cout << left << setw(10) << fixed <<
   setprecision(3) << "Meters" << "Feet" << endl;

//loop to create the table values using the conversion and prints.
  for (int i = 0; i < 15; i++){
    cout << setw(10) << m << mToFt << endl;
    m++;
    mToFt = m * 3.280;
  }
}