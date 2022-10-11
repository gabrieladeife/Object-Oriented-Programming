#include "Circle2D.h"
#include <cmath>
#include <iostream>

using namespace std;
//initializes number of circles objects at 0.
int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double x, double y, double radius){
  this->x = x;
  this->y = y;
  this->radius = radius;
  numberOfCircles++;
}

Circle2D::Circle2D(const Circle2D& circle){
  x = circle.x;
  y = circle.y;
  radius = circle.radius;
  numberOfCircles++;
}

Circle2D::~Circle2D(){
  numberOfCircles--;
}

double Circle2D::getX() const{
  return x;
}
double Circle2D::getY() const{
  return y;
}
double Circle2D::getRadius() const{
  return radius;
}

int Circle2D::getNumberOfCircles() {
  return numberOfCircles;
}

//checks if the added radius' are less than the distance between two points. if it is, then the circles do not overlap and it returns false.
bool Circle2D::overlaps(const Circle2D& circle) const {
  int distance = sqrt(pow(x-circle.x,2) + pow(y - circle.y,2));
  if(radius + circle.getRadius() < distance) return false;
  else return true;
}
