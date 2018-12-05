// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    private:
    double area;
    public:
        virtual double getArea(void) const = 0;
        
};//base class shape

#endif


