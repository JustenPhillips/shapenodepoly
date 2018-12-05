// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly
#ifndef POLY_H
#define POLY_H
#include "Shape.h"

class Polygon : public Shape 
{
protected:
    //protected variable
    double s1,s2,s3,s4;
public:
    //constructor
    Polygon(double s1, double s2, double s3, double s4);
    //getarea method
    double getArea() const;
};

//triangle class
class Triangle : public Polygon
{
    public:
		Triangle(double s1, double s2, double s3);//constructor
		double getArea() const;//getarea method

};

#endif