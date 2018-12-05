// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly
#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape
{
    protected:
        double rad1, rad2;
    public:
        Ellipse(double rad1, double rad2); //constructor
        //getarea method
        double getArea() const;
};

class Circle : public Ellipse 
{
    public:
        Circle(double rad1) : Ellipse(rad1, rad1) {}
};

#endif