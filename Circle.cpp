#include "Circle.h"

Circle::Circle() {}

Circle::Circle(Point c, double r) {
    this->center = c;
    this->radius = r;
}

void Circle::setCircle(Point c, double r) {
    this->center = c;
    this->radius = r;
}

double Circle::getArea() {
    return PI * this->radius * this->radius;
}

double Circle::getPerimeter() {
    return 2 * PI * this->radius;
}

void Circle::printType() {
    std::cout<<"Circle\n";
}