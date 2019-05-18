#include "Shape.h"
#include <string>

Shape::Shape() {}

Shape::Shape(std::string &name, const std::string &shape)
{
	shapeID = name;
	shapeName = shape;
}
std::string Shape::getShapeID() const
{
	return shapeID;
}

std::string Shape::getShapeName() const
{
	return shapeName;
}

void Shape::setShapeID(std::string &name)
{
	shapeID = name;
}

void Shape::setShapeName(std::string &shape)
{
	shapeName = shape;
}


// Rectungle class inerited fron Shape
Rectangle::Rectangle(std::string &name, double len, double wid) :
	Shape(name, "Rectangle")
{
	length = len;
	width = wid;
}

//Calculate Area
double Rectangle::getArea() const
{
	return length * width;
}

//Calculate Perimeter
double Rectangle::getPerimeter() const
{
	return (width + length) * 2;
}

double Rectangle::getlength() const { return length; }
double Rectangle::getwidth() const {return width;}

void Rectangle::setlength(double len) { length = len; }
void Rectangle::setwidth(double wid) { width = wid; }

// Circle class inerited fron Shape
const double PI = 3.14159;

//Set radius
Circle::Circle(std::string &name, double r) :
	Shape(name, "Circle")
{
	radius = r;
}

//calculate area
double Circle::getradius() { return radius; }

double Circle::getArea() const
{
	return (PI * (radius * radius));
}

double Circle::getPerimeter() const
{
	return 2 * (PI * radius);
}

void Circle::setradius(double r) { radius = r; }

// Square class inerited fron Shape

//Set length
Square::Square(std::string &name, double len) :
	Shape(name, "Square")
{
	length = len;
}

//Calculate Area
double Square::getArea() const
{
	return length * length;
}

double Square::getPerimeter() const
{
	return 4 * length;
}
double Square::getside() const { return length; }

void Square::setside(double len) { length = len; }
