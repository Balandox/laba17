#ifndef _POINT_HPP_
#define _POINT_HPP_
#include <iostream>

class Point {
private:
int x;
int y;
int z;
public:
Point();
Point& operator=(const Point& p);
Point& operator=(int null);
Point operator*(const Point& p) const;
void operator+= (const Point& p);
friend std::istream& operator>> (std::istream& in, Point& p);
friend std::ostream& operator<< (std::ostream& out, const Point& p);
};

#endif