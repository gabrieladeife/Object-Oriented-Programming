#include <iostream>
#include "Complex.h"

using namespace std;
//adds two declared complex numbers.
Complex additionTwo(Complex &comp1,Complex &comp2)
{

  double newReal = comp1.getReal() + comp2.getReal();

  double newImg = comp1.getImg() +
  comp2.getImg();

return Complex(newReal, newImg);
}

//adds the values within the array of Complex objects.
Complex additionArray (Complex complexArray[], int size)
{
Complex temp;
for(int i = 0; i < size; i++)
{
 temp = temp.addition(complexArray[i]);
}

return temp;

}
int main() {
  Complex comp1;
  comp1.setReal(2.4);
  comp1.setImg(4.1);

  Complex comp2(3.2, -3.6);
//temporary complex object to hold value of adding comp1 and comp2.
Complex temp = (comp1.addition(comp2));

temp.printComplex();

temp = additionTwo(comp1, comp2);

temp.printComplex();

Complex arrComp[4] = {Complex(1.0, 3.0), Complex(1.5, 2.5), Complex(6.5, -9.5), Complex(3.4, 4.0)};

//temporary complex object to hold value of adding array of complex objects.
Complex temp2 = additionArray(arrComp, 4);

temp2.printComplex();


}