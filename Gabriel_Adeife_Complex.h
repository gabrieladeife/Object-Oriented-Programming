#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
  private:
    double real;
    double img;
  public:
  //no-arg constructor
  Complex();
  //accessor and mutator functions
  double getReal();
  double getImg();

  void setReal(double _real);
  void setImg(double _img);
  //user-defined constructor
  Complex(double, double);
  //print complex number method
  void printComplex();
  //add sum of two complex numbers method
  Complex addition(Complex &comp);

};
#endif