// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shape.h"
#include "Circle.h"

using namespace std;

void ShowArea(Shape& shape);


int main()
{
    // ---------- OBJECTS & CLASSES ----------
    // With object oriented programming we model real
    // world objects with code. Real objects have
    // attributes (height, weight) and capabilities
    // (run, eat)
    // In object oriented programming we store
    // attribute values in fields / variables and
    // we simulate capabilities in methods / functions
    // A class is a blueprint for modeling the above
    Shape square(10, 5);
    Circle circle(10);
    ShowArea(square);
    ShowArea(circle);
}

// This function receives Shapes but uses the
// correct Area() automatically
// This is an example of polymorphism
void ShowArea(Shape& shape) {
    cout << "Area : " << shape.Area() << "\n";
}