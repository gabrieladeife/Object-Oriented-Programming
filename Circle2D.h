#ifndef CIRCLE2D_H
#define CIRCLE2D_H

class Circle2D{
  public:
  double x,y;
  double radius;
  static int numberOfCircles;
//user defined constructors, and a destructor.
  Circle2D(double x, double y, double radius);
  Circle2D(const Circle2D & circle);
  ~Circle2D();
//get functions
  double getX() const;
  double getY() const;
  double getRadius() const;

  static int getNumberOfCircles();
//member function to check overlap.
  bool overlaps(const Circle2D &circle) const; 

};
#endif