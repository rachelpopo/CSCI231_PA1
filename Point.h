//
// Created by Rachel Popo on 9/6/15.
//
// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

#include <cmath>

class Point {

private:
    double x;
    double y;
    double z;

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX();
    double getY();
    double getZ();

    // Find distance between 2 points
    double distanceTo(Point &p2);
};

#endif // __point_h
