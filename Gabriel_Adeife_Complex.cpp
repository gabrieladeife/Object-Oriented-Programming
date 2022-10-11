#include "Complex.h"
#include <iostream>
#include <string>

using namespace std;
//no arg constructor
Complex::Complex()
{
  real = 0;
  img = 0;
}
//accessor functions
double Complex::getReal()
{
return real;
}

double Complex::getImg()
{
  return img;
}
//mutator functions
void Complex::setReal(double _real){
  real = _real;
}

void Complex::setImg(double _img)
{
  img = _img;
}
//constructor
Complex::Complex(double _real, double _img)
{
  real = _real;
  img = _img; 
}
//prints complex number and checks sign of i for subtraction/addition
void Complex::printComplex()
{
  if (img >= 0) cout << real << " + " << img << "i" << endl;
  else cout << real << " - " << img * -1 << "i" << endl;
}

//adds complex numbers.
Complex Complex::addition(Complex &comp){
  double newReal = real + comp.real;

  double newImg = img + comp.img;

  return Complex(newReal, newImg);
}
