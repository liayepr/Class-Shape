#include <iostream>
#include <string>

class Shape      
{

private:
	std::string shapeID;        //name of instance
	std::string shapeName;      //Circle, Square, Rectangle

public:
	Shape();
    Shape(std::string &, const std::string &);

	std::string getShapeID() const;
	std::string getShapeName() const;

	//Each derived class must provide its own getArea().
	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;

	void setShapeID(std::string &);
	void setShapeName(std::string &);
	
};

//Class Rectangle inherits
class Rectangle : public Shape      
{
private:
	double length;
	double width;

public:

	Rectangle(std::string &, double, double);

	// Parent Virtual function
	double getArea() const;
	double getPerimeter() const;

	double getlength() const;
	double getwidth() const;;

	void setlength(double); 
	void setwidth(double); 
};

//Class Circle inherits
class Circle : public Shape
{
private:
	double radius;

public:
	Circle(std::string &, double);

	// Parent Virtual function
	double getArea() const;
	double getPerimeter() const;
	
	double getradius();     
	void setradius(double);   
};


//Class Square inherits
class Square : public Shape
{
private:
		double length;

public:
	Square(std::string &, double);

	//Parent Virtual function
		double getArea() const;
		double getPerimeter() const;
	
	//Function prototypes
	double getside() const;
	void setside(double);
};