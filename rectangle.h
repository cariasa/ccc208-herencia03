#pragma once
#include "figure2d.h"
#include "point.h"
#include <string>
using std::string;

class Rectangle:public Figure2D{
	Point upperLeft;
	double base, height;
  protected:
  	double getBase()const;
	double getHeight()const;
	Point getUpperLeft()const;
  public:
	Rectangle(const Point&, const Point&);
	Rectangle(const Point&, double, double);
	virtual ~Rectangle();
	virtual string toString()const;
	double area()const;
	double perimeter()const;
	bool tall()const;
};
