#include "Figure.h"

#ifndef FIGURES_RECTANGLE_H
#define FIGURES_RECTANGLE_H


class Rectangle : public Figure {
    private:
        Point bl, tr; //bottom left and top right
    public:
        Rectangle();
        Rectangle(Point bottomLeft, Point topRight);
        void setPoints(Point bottomLeft, Point topRight);
        double getArea();
        double getPerimeter();
        void printType();

};


#endif //FIGURES_RECTANGLE_H
