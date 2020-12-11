#include "Figure.h"
#include "Const.h"

#ifndef FIGURES_CIRCLE_H
#define FIGURES_CIRCLE_H


class Circle : public Figure {
private:
    Point center; //bottom left and top right
    double radius;
public:
    Circle();
    Circle(Point c, double r);

    void setCircle(Point c, double r);
    double getArea();
    double getPerimeter();
    void printType();

};



#endif //FIGURES_CIRCLE_H
