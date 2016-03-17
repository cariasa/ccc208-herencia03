#pragma once

#include "rectangle.h"
#include "point.h"

#include <string>
using std::string;

class Square : public Rectangle{
  public:
	Square(const Point&, double);
	virtual ~Square();
	virtual string toString()const;
};
