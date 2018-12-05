// Name: Justen Phillips
// Course: CIS 006 Intro to programming
// CRN: 20577
// Date: 3/10/2017
// Assignment: Specification Exception

#include "SpecificationException.h"

//circle
double getArea(short, double);

//triangle
double getArea(short, double, double, double);

//square
double getArea(short, double, double);


int main()
{
    
	//local variables
	short sides;//sides of shape
	double a, b, c, d;
	float rad;//radius
	char again;//do it again?
do
    {
try
    {
	    cout << "Enter number of sides: ";
	    cin >> sides;
	    cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    	//circle
    	if(sides == 0)
    	{
    	    cout << "enter a radius: ";
    	    cin >> a;
    	    cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	    cout << "The area is: " << getArea(sides,a) << endl;
    	}
    	else if(sides == 1)
    	{
    	    cout << "enter a radius: ";
    	    cin >> a;
    	    cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	    cout << "The area is: " << getArea(sides,a) << endl;
    	}
    
    	//triangle
    	else if(sides == 3)
    	{//10.123, 20.345, 30.345]
            cout << "enter side 1: ";
    		cin >> a;
    		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		cout << "enter side 2: ";
    		cin >> b;
    		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		cout << "enter side 3: ";
    		cin >> c;
    		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	    cout << getArea(sides,a, b, c) << endl;
    	}
    	
    	//square
    	else if(sides == 4)
    	{
    	double a, b;
    		cout << "enter side 1: ";
    		cin >> a;
    		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		cout << "enter side 2: ";
    		cin >> b;
    		cin.clear();
	        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    		cout << "The Area is: " << getArea(sides,a,b) << endl;
    	}
    	else
        	throw SpecificationException(short(sides));
    }    	
    catch (const SpecificationException & e)
    {    cout << " throwing exception " << endl;
        cout << "try again?(y/n) ";
    	cin >> again;
    	tolower(again);
    cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if(again == 'n')
            {
                return 0;
            }
            else if(again == 'y')
            {
                continue;
            }
            else
            {
                again = 'y';
                continue;
            }
    }
}while(again == 'y');    	
    

  

}

