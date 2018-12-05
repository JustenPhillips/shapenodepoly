// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly

#include <iostream>
#include "Ellipse.h"
#include "Shape.h"
using namespace std;

//ellipse class constructor
Ellipse::Ellipse(double radius1, double radius2)
{
    rad1 = radius1;
    rad2 = radius2;
}    

double Ellipse::getArea() const
{
    double area;
    area = 3.14*rad1*rad2;
    return area;
}
