#include <iostream>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
 double groceryKg = 5.553;
 double minsToHrs = 9.5 / 60;
 double hrs = 2 + minsToHrs;

 double salePerHr = groceryKg / hrs;

 cout << "Average sale in kg per hour is: " <<  salePerHr << endl
<< "With Groceries in KG: " << groceryKg << endl <<  "in " << hrs << " hours" << endl;
}