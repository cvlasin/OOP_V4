#include "Shape.h"
#include <iostream>
#include <string.h>
using namespace std;

Shape::Shape()
{

}

Shape::Shape(string Name_shape, double Surface_shape)
{
    Surface = Surface_shape;
    Name = Name_shape;
}

double Shape::gettersurface()
{
    return Surface;
}
string Shape::gettername()
{
    return Name;
}

void Shape::settername(string name)
{
    this->Name = name;
}

void Shape::settersurface(double surface)
{
    this->Surface = surface;
}