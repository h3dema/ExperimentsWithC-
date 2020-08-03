#define _USE_MATH_DEFINES

#include "Shape.h"
#include "Circle.h"
#include <cmath>


Circle::Circle(double width) : Shape(width)
{

}


Circle::~Circle() = default;

double Circle::Area() {
    // _USE_MATH_DEFINES allows to use constants in cmath
    // ref. https://docs.microsoft.com/en-us/cpp/c-runtime-library/math-constants?view=vs-2019 
    return M_PI * pow((width / 2), 2);
}
