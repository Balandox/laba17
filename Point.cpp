#include <iostream>
#include "Point.hpp"

Point:: Point() {
this->x = 0;
this->y = 0;
this->z = 0;
}

Point& Point::operator=(const Point& p) {
if (&p == this) {
return *this;
}
this->x = p.x;
this->y = p.y;
this->z = p.z;
return *this;
}

Point& Point::operator=(int null) {
this->x = null;
this->y = null;
this->z = null;
return *this;
}

Point Point::operator*(const Point& p) const {
Point p1;
p1.x = this->x * p.x;
p1.y = this->y * p.y;
p1.z = this->z * p.z;
return p1;
}

void Point::operator+= (const Point& p) {
this->x += p.x;
this->y += p.y;
this->z += p.z;
}

std::istream& operator >> (std::istream& in, Point& p) {
std::cout << "\ninput x: ";
std::cin >> p.x;
std::cout << "input y: ";
std::cin >> p.y;
std::cout << "input z: ";
std::cin >> p.z;
return in;
}

std::ostream& operator << (std::ostream& out, const Point& p) {
std::cout << "(" << p.x << ", " << p.y << ", " << p.z << ")";
return out;
}