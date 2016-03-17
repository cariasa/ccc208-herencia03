#include "figure2d.h"
#include "ellipse.h"
#include "rectangle.h"
#include "square.h"
#include "triangle.h"

#include <iostream>
using std::cout;
using std::endl;

void otrafuncion(const Figure2D&);

int main(int argc, char* argv[]){
	Rectangle rect(Point(10,10), 5, 20);
	Square squa(Point(10, 3), 12);
	cout << rect.toString() << endl;
	cout << squa.toString() << endl;

	cout << "Rectangle data: " << rect.area() << endl << rect.perimeter() << endl;
	cout << "Square data   : " << squa.area() << endl << squa.perimeter() << endl;

	return 0;
}

