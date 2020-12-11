#include "Point.h"

Point::Point(int x1, int y1) {
    this->x = x1;
    this->y = y1;
}

Point::Point(const Point &p) {
    this->x = p.x;
    this->y = p.y;
}

Point & Point::operator =(const Point &p) {
    this->x = p.x;
    this->y = p.y;
    return *this;
}

double Point::distance(Point a, Point b) {
    return sqrt((a.x-b.x)*(a.x-b.x) +(a.y-b.y)*(a.y-b.y));
}

std::ostream& operator <<(std::ostream &out, const Point& point) {
    out<<"x = "<<point.x<<" | y = "<<point.y<<'\n';
}
