// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 4/20/2017
// Assignment: ShapeNodePoly

#include <iostream>

#include "Shape.h"
#include "Point.h"
#include "Polygon.h"
#include "Ellipse.h"
using namespace std;

int main()
{
	//local variables
	int sides;//sides of shape
	double a, b, c;
	float p1x,p1y,p2x,p2y,p3x,p3y,p4x,p4y;//Cartesian coordinate
	float pox,poy;
	float r1,r2;//radius
	char again;//do it again?
do{
	cout << "Enter number of sides: ";
	cin >> sides;
	
	//circle
	if(sides == 0 || sides == 1)
	{
	cout << "enter a radius: ";
	cin >> a;
	//shape object instance that points to circle class
	Shape * s = new Circle(a);
    //pointer to get area method
	cout << "The area is: " << s->getArea() << endl;
	cout << "Enter a Point of Origin x: ";
	cin >> pox;
	cout << "Enter a Point of Origin y: ";
	cin >> poy;
		//cartesian point instance 
	Point p1(pox,poy);
     p1.print(cout << "points mapped out: ");
     cout << endl;

	}
	//Ellipse
	else if(sides == 2)
	{
	    cout << "Enter major radius: ";
	    cin >> r1;
	    cout << "Enter minor radius: ";
	    cin >> r2;
	    
	    Shape * s = new Ellipse(a,b);
	    cout << "The area is: " << s->getArea() << endl;
	cout << "Enter a Point of Origin x: ";
	cin >> pox;
	cout << "Enter a Point of Origin y: ";
	cin >> poy;
		//cartesian point instance 
	Point p1(pox,poy);
	p1.print(cout << "points mapped out: ");
	cout << endl;

	    
	}
	//triangle
	else if(sides == 3)
	{//10.123, 20.345, 30.345]
        cout << "enter side 1: ";
		cin >> a;
		cout << "enter side 2: ";
		cin >> b;
		cout << "enter side 3: ";
		cin >> c;
		Shape * s = new Triangle(a,b,c);
	    cout << "The area is: " << s->getArea() << endl;
	    cout << "Points plotted: " << endl;
	    Point p1(-1,-1);
	    Point p2(0,0);
	    Point p3(1,1);
        p1.print(cout << "point 1: ");
        p2.print(cout << "\npoint 2: ");
        p3.print(cout << "\npoint 3: ");
        cout << endl;
	}
	
	//polygon
	else if(sides == 4)
	{
	double a, b, c, d;
		cout << "enter side 1: ";
		cin >> a;
		cout << "enter side 2: ";
		cin >> b;
		cout << "enter side 3: ";
		cin >> c;
		cout << "enter side 4: ";
		cin >> d;
		
		Shape * s = new Polygon(a,b,c,d);
		cout << "The Area is: " << s->getArea() << endl;
	    cout << "Points plotted: " << endl;
	    Point p1(0,1);
	    Point p2(0,0);
	    Point p3(1,0);
	    Point p4(1,1);
	    p1.print(cout << "point 1: ");
        p2.print(cout << "\npoint 2: ");
        p3.print(cout << "\npoint 3: ");
        p4.print(cout << "\npoint 4: ");
        cout << endl;
	}
	else
	cout << "bad input" << endl;
	cout << "try again?(y/n) ";
	cin >> again;
	}
	while(again == 'y' || again == 'Y');

return 0;
}
