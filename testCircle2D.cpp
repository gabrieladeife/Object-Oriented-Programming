#include <iostream>
#include "Circle2D.h"

using namespace std; 
int main() {
  
  Circle2D *pCir1 = new Circle2D(2,2,5.5);
  
  Circle2D cir2(-6,-3,1.5);

  cout << "Number of objects is " << cir2.getNumberOfCircles() << endl;

  Circle2D cir3(cir2);

  cout << "Number of objects is " << cir2.getNumberOfCircles() << endl << "pCir1 overlaps cir2 = " << pCir1->overlaps(cir2) << endl <<
  "cir3 overlaps cir2 = " << cir3.overlaps(cir2) << endl;
  
 pCir1->~Circle2D();

 cout << "Number of objects is " << cir2.getNumberOfCircles() << endl;
}