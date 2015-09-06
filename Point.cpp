#include "Point.h"

// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}

// Accessors
// Return the current values of private member variables

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

double Point::getZ() {
    return z;
}

//Find distance between two points
double Point::distanceTo(Point &p2)
{
    return sqrt((x - p2.x)*(x - p2.x) +
                (y - p2.y)*(y - p2.y) +
                (z - p2.z)*(z - p2.z));
}
