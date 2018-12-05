// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly

#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Polygon.h"

using namespace std;

Polygon::Polygon(double a, double b, double c, double d)
{
    s1=a;
    s2=b;
    s3=c;
    s4=d;
}

double Polygon::getArea() const
{
    double length, width, area;
    
    if(s1 == s2)
    {
        length = s1;
        width = s3;
    }
    else if(s1 == s3)
    {
        length = s1;
        width = s3;
    }
    area = length * width;
    return area;
}

//Triangle class constructor
Triangle::Triangle(double s1, double s2, double s3) : Polygon(s1,s2,s3, 0.0) {}
 
double Triangle::getArea() const
{
    double s, area;
    //herions formula
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s1-s)*(s2-s)*(s3-s));
    return area;
}

