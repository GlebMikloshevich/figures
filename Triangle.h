#include "Figure.h"
#include <vector>

#ifndef FIGURES_TRIANGLE_H
#define FIGURES_TRIANGLE_H


class Triangle : public Figure{
    private:
        std::vector<Point> points;
    public:
        Triangle();
        Triangle(std::vector<Point> v);

        void setTriangle(std::vector<Point> v);
        double getArea();
        double getPerimeter();
        void printType();
};


#endif //FIGURES_TRIANGLE_H
