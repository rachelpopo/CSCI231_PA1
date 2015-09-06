//
// Created by Rachel Popo on 9/6/15.
//

#include "Point.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;


// Function for calculating area of 3D triangle
double computeArea(Point &a, Point &b, Point &c)
{
    double s = (a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2.0;

    return sqrt(s * (s - a.distanceTo(b)) * (s - b.distanceTo(c)) * (s - c.distanceTo(a)));
}


int main(void) {
    Point p;
    double x_coord, y_coord, z_coord;

    cout << fixed << setprecision(2);

    cout << "Please enter the x, y and z-coordinates of the first point:" << endl;
    cin >> x_coord >> y_coord >> z_coord;

    Point first = Point (x_coord, y_coord, z_coord);

    cout << "Please enter the x, y and z-coordinates of the second point:" << endl;
    cin >> x_coord >> y_coord >> z_coord;

    Point second = Point (x_coord, y_coord, z_coord);

    cout << "Please enter the x, y and z-coordinates of the third point:" << endl;
    cin >> x_coord >> y_coord >> z_coord;

    Point third = Point (x_coord, y_coord, z_coord);

    double area = computeArea(first,second,third);

    cout << "The area is " << area << "!!" << endl;


    return 0;
}
