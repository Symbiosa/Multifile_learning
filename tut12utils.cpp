#include <iostream>
#include "tut12header.h"


double area(double length)                                                  // Calculates length*length Square
{
    return length * length;
}

double area(double length, double width)                                    // length*width  rectangle
{
    return length * width;
}

double area(Rectangle rectangle)                                            // Rectangle
{
    return rectangle.length * rectangle.width;
}




// Default arguments


double pow(double base, int pow)                    // defaults to 2 if only 1 arguement given
{                                                       // uses int pow, if passed in call
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

