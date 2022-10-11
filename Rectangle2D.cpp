#include "Rectangle2D.h"
#include <string>
#include <iostream>
using namespace std;

//No arg constructor
Rectangle2D::Rectangle2D(){
  x = 0;
  y = 0;

  width = 1;
  height = 1;
}

//Constructor w/ args.
Rectangle2D::Rectangle2D(double _x, double _y, double _width, double _height){
  x = _x;
  y = _y;

  width = _width;
  height = _height;
}

//mutator and accessor functions.
double Rectangle2D::getX() const{
  return x;
}
double Rectangle2D::getY() const{
  return y;
}

double Rectangle2D::getWidth() const{
  return width;
}
double Rectangle2D::getHeight() const{
  return height;
}

void Rectangle2D::setX(double _x){
  x = _x;
}
void Rectangle2D::setY(double _y){
  y = _y;
}

void Rectangle2D::setWidth(double _width){
  width = _width;
}
void Rectangle2D::setHeight(double _height){
  height = _height;
}

//Checks if the point is less than or equal to the width/height of the rectangle, and if the point is greater than or equal to the point minus the width/height, as that is the negative component of the rectangle, not width * -1.
bool Rectangle2D::contains(double _x, double _y)const{
  if(
  (_x <= width && _x >= (x - width) 
  && 
  (_y <= height && _y >= (y - height)))) 
  return true;
  else return false;
}

//Checks if the center point is in the rectangle initially, then if the width and height of the specifcied rectangle is less than the original rectangle. The width of the specified rectangle cant be greater than the width of the original rectangle, otherwise it wont be contained within it.
bool Rectangle2D::contains(const Rectangle2D &r) const{
  if(
  (contains(r.getX(), r.getY())) 
  && 
  (r.getWidth() < width)
  &&
  (r.getHeight() < height)
  &&
  (contains(r.getWidth(), r.getHeight())))
  return true;
  else return false;
}


//Uses the center of rectangle to identify four corners of the rectangle by adding/subtracting half of the height/width to the center. If one of the corners is a point inside of the other rectangle, the rectangles overlap.
bool Rectangle2D::overlaps(const Rectangle2D &r) const{
  if(
    (contains(r.getX() - (r.getWidth() / 2), r.getY() - (r.getHeight() / 2)))
  )
  return true;

  else if(
   (contains(r.getX() + (r.getWidth() / 2), r.getY() + (r.getHeight() / 2)))
  )
  return true;

  else if(
   (contains(r.getX() - (r.getWidth() / 2), r.getY() + (r.getHeight() / 2)))
  )
  return true;

  else if(
    (contains(r.getX() + (r.getWidth() / 2), r.getY() - (r.getHeight() / 2)))
  )
  return true;

  else if(
    r.contains(x + (width / 2), y + (height / 2))
  ) return true;

  else if(
    r.contains(x - (width / 2), y - (height / 2))
  ) return true;

  else if(
    r.contains(x + (width / 2), y - (height / 2))
  ) return true;

  else if(
    r.contains(x - (width / 2), y + (height / 2))
  ) return true;
  else return false;

}
