#ifndef POINT_H
#define POINT_H
#include <string>
using std::string;

class Point{
  private:
	double x;
	double y;
  public:
	Point(double, double);
	string toString()const;
	double distance(Point)const;
	double slope(Point);
	double disp(double);
	double getX()const;
	double getY()const;
};



#endif
