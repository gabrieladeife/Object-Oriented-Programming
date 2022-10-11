#include <iostream>
#include "Rectangle2D.h"

//testing.
using namespace std;
int main() {
  Rectangle2D r1(2,2,5.5,4.9);
  Rectangle2D r2(4,5,10.5,3.2);
  Rectangle2D r3(3,5,2.3,5.4);

  cout << "0 = false, 1 = true" << endl << "Does r1 contain point 3,3: " << r1.contains(3,3) << endl << "Does r1 contain r2: " << r1.contains(r2) << endl << "Does r1 overlap r3: " << r1.overlaps(r3) << endl;

  return 0;
}