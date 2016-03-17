#include "figure2d.h"
#include "rectangle.h"
#include "point.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Rectangle::Rectangle(const Point& upperLeft, const Point& lowerRight)
	: upperLeft(upperLeft){
	base = upperLeft.distance(Point(lowerRight.getX(),upperLeft.getY()));
	height = upperLeft.distance(Point(upperLeft.getX(), lowerRight.getY()));
}
Rectangle::Rectangle(const Point& upperLeft, double base, double height)
	: upperLeft(upperLeft), base(base), height(height){
}
Rectangle::~Rectangle(){
	cout << "Destructor de Rectangle" << endl;
}
double Rectangle::getBase()const{
	return base;
}
double Rectangle::getHeight()const{
	return height;
}
Point Rectangle::getUpperLeft()const{
	return upperLeft;
}
string Rectangle::toString()const{
	stringstream ss;
	ss << "Rectangle upperLeft Corner " << upperLeft.toString() 
	   << " base: " << base << " height: " << height;
	return ss.str();
}
double Rectangle::area()const{
	return base * height;
}
double Rectangle::perimeter()const{
	return 2 * base + 2 * height;
}
bool Rectangle::tall()const{
	return base < height;
}
