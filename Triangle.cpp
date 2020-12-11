#include "Triangle.h"
#include <iterator>

Triangle::Triangle() {}

Triangle::Triangle(std::vector<Point> v) {
    this->setTriangle(v);
}

void Triangle::setTriangle(std::vector<Point> v) {
    if (v.size() != 3)
        throw FigureException();

    this->points = v;
}

double Triangle::getArea() {
    Point a = Point(this->points[1].x - this->points[0].x, this->points[1].y - this->points[0].y);
    Point b = Point(this->points[2].x - this->points[0].x, this->points[2].y - this->points[0].y);
    //std::cout<<'\n'<<a.x<<' '<<a.y<<" | "<<b.x<<' '<<b.y<<'\n';
    double area = a.x*b.y - a.y*b.x;

    return (area > 0 ? area : -area)/2;
}

double Triangle::getPerimeter() {
    double a = Point::distance(this->points[0], this->points[1]);
    double b = Point::distance(this->points[1], this->points[2]);
    double c = Point::distance(this->points[0], this->points[2]);
    return a + b + c;
}

void Triangle::printType() {
    std::cout<<"Triangle\n";
}