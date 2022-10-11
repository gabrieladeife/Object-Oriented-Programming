#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GeometricObject.h"
#include <string>

class Triangle : public GeometricObject{

private:
double side1, side2, side3;

public:

Triangle();

Triangle(double, double, double, std::string, bool);

double getPerimeter() const;
double getArea() const;
void display() const;

bool lessThan(const Triangle &tri2) const;
bool greaterEq(const Triangle &tri2) const;
bool notEqual(const Triangle &tri2) const;


bool operator < (const Triangle &tri2) const;
bool operator >= (const Triangle &tri2) const;
bool operator != (const Triangle &tri2) const;


};

#endif