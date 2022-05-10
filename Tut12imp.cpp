#include <iostream>
#include "tut12header.h"
#include <cmath>

/*
struct Rectangle
{
    double length;
    double width;
};
// Overloading area
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

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.length, rectangle.width) << std::endl;
    std::cout << area(rectangle.length) << std::endl;
    std::cout << area(rectangle) << std::endl;
    return 0;
}




// Default arguments


double pow(double base, int pow = 2)                    // defaults to 2 if only 1 arguement given
{                                                       // uses int pow, if passed in call
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

// double pow(double base)
// {
//    return base * base;
// }
*/

int main()
{
    std::cout << pow(3,3) << std::endl;
    std::cout << pow(3) << std::endl;
    // cat
}

