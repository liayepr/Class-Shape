#include "Shape.h"
#include <iostream>
#include <string>

int main()
{
	std::string rname = "myRectangle";
	Rectangle R(rname, 4.0, 5.0);
	std::cout << "Rectangle area = " << R.getArea() << std::endl;
	std::cout << "Rectangle perimeter = " << R.getPerimeter() << std::endl;

	std::string cname = "myCyrcle";
	Circle C(cname, 3.0);
	std::cout << "Circle area = " << C.getArea() << std::endl;
	std::cout << "Circle perimeter = " << C.getPerimeter() << std::endl;

	std::string sname = "myCyrcle";
	Square S(sname, 3.0);
	std::cout << "Square area = " << S.getArea() << std::endl;
	std::cout << "Square perimeter = " << S.getPerimeter() << std::endl;

	system("pause");
}