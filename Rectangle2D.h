#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class Rectangle2D{
  public:
  double x,y;
  double width, height;

//No arg constructor.
  Rectangle2D();
//User defined constructor
  Rectangle2D(double _x, double _y,double _width, double _height);

//Accessor and mutator functions.
  double getX() const;
  double getY() const;

  double getWidth() const;
  double getHeight() const;

  void setX(double _x);
  void setY(double _y);

  void setWidth(double _width);
  void setHeight(double _height);

//Class member functions.
  bool contains(double _x, double _y) const;
  bool contains(const Rectangle2D &r) const;

  bool overlaps(const Rectangle2D &r) const;

};

#endif