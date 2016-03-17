#include "point.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Point::Point(double x, double y){
	this->x = x;
	this->y = y;
}
string Point::toString()const{
	stringstream ss;
	ss << "[" << x << ", " << y << "]";
	return ss.str();
}
double Point::distance(Point p)const{
	return sqrt(pow(x - p.x, 2.0) + pow(y - p.y, 2.0));
}
double Point::slope(Point p){
	return (y - p.y) / (x - p.x);
}

double Point::disp(double slope){
	return y - slope * x;
}
double Point::getX()const{
	return x;
}
double Point::getY()const{
	return y;
}
