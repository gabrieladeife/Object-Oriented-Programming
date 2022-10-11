#include "Triangle.h"
#include <math.h>

Triangle::Triangle()
{
  side1 = 1.0;
  side2 = 2.0;
  side3 = 3.0;

  filled = false;
  color = "white";
}

Triangle::Triangle(double side1, double side2, double side3, std::string color, bool filled){
  this->side1 = side1;
  this->side2 = side2;
  this->side3 = side3;

  this->color = color;
  this->filled = filled;
}

double Triangle::getPerimeter() const{
return side1 + side2 + side3;
}

double Triangle::getArea() const{
  double sPer = getPerimeter() / 2;

  return sqrt(sPer*(sPer - side1)*(sPer - side2)*(sPer - side3));
}

void Triangle::display() const {
  std::cout << std::left << std::setw(15) <<"Area: " << std::left << getArea() << std::endl
            << std::setw(15) << "Perimeter: " << getPerimeter() << std::endl
            << std::setw(15) << "Color: " << getColor() << std::endl
            << std::setw(15) << "Filled: " << std::setw(10) << isFilled() << std::endl;
  std::cout <<"--------------------------" << std::endl;
}

bool Triangle::lessThan(const Triangle &tri2) const {
  if(filled == 1 && tri2.filled == 0) return 0;
  else if(filled == 0 && tri2.filled == 1) return 1;
  else if((filled == 0 && tri2.filled == 0) ||(filled == 1 && tri2.filled == 1)) return getPerimeter() < tri2.getPerimeter();
  else return 0; 
}

bool Triangle::greaterEq(const Triangle &tri2) const {
  if((filled == 0 && tri2.filled == 0) || (filled == 1 && tri2.filled == 1)) return getPerimeter() >= tri2.getPerimeter(); 
  else return filled >= tri2.filled;
}

bool Triangle::notEqual(const Triangle &tri2) const {
  if((filled == 0 && tri2.filled == 0) || (filled == 1 && tri2.filled == 1)) return getPerimeter() != tri2.getPerimeter();

  else return filled != tri2.filled;
}

bool Triangle::operator < (const Triangle &tri2) const{
  return lessThan(tri2);
}

bool Triangle::operator >= (const Triangle &tri2) const{
  return greaterEq(tri2);
}

bool Triangle::operator != (const Triangle &tri2) const{
  return notEqual(tri2);
}
