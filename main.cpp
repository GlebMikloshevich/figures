#include <iostream>
#include <string>

#include "Point.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Polygon.h"

int main() {
    Point a(0, 0);
    Point b(2, 3);
    Point c(4, 1);
    Point d(1, 1);
    std::cout<<"Points:\n"<<a<<b<<c<<d<<'\n';

    std::vector<Point> points;
    points.push_back(a);
    points.push_back(b);
    points.push_back(c);

    std::vector<Figure*> figures;
    figures.push_back(new Rectangle(b, d));
    figures.push_back(new Circle(b, 5));
    figures.push_back(new Triangle(points));
    figures.push_back(new Polygon("/home/gleb/CLionProjects/figures/points.txt"));

    for (int i = 0; i < figures.size(); i++){
        figures[i]->printType();
        std::cout<<figures[i]->getArea()<<' '<<figures[i]->getPerimeter()<<'\n';
    }
}
