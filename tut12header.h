#ifndef TUT12HEADER
#define TUT12HEADER


struct Rectangle
{
    double length;
    double width;
};

double area(double length);

double area(double length, double width);

double area(Rectangle rectangle);

double pow(double base, int pow = 2);

// double pow(double base)
// {
//    return base * base;
// }

#endif