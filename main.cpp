// OOP Review Project.cpp : This file contains code for three classes, the PointType class, the Circle Class, and the CylinderType class. 
// The PointType class is developed on a branch.
// The CircleType class is on a separate branch that is based off the PointType branch.
// The CylinderType class is on a third branch that is based off the CirclType branch. 

#include <iostream>
#include "PointType.h"

using namespace std;

int main()
{
   
    cout << "From Default constructor" << endl;
    PointType<int> p1I;
    PointType<double> p1D;
    cout << "Integer point: ";
    p1I.print();
    cout << "Double Point: ";
    p1D.print();

    cout << "Constructors with parameters" << endl;
    PointType<int> p2I(3,5);
    PointType<double> p2D(3.5, 5.5);
    cout << "Integer point: ";
    p2I.print();
    cout << "Double Point: ";
    p2D.print();


    cout << "\n(integer) Distance = ";
    double distance = p1I - p2I;
    cout << distance << endl;

    cout << "\n(double) Distance =";
    distance = p1D - p2D;
    cout << distance << endl;
}
