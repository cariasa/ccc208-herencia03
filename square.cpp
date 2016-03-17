#include "square.h"
#include "rectangle.h"
#include "point.h"
#include <string>
#include <sstream>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

Square::Square(const Point& upperLeft, double side): Rectangle(upperLeft, side, side){
	
}
Square::~Square(){
	cout << "Destructor de Square" << endl;
}
string Square::toString()const{
	stringstream ss;
	ss << "Square upperLeft Corner " << getUpperLeft().toString() 
	   << " side: " << getBase() ;
	return ss.str();
}
