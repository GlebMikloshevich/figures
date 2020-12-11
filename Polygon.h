#include "Figure.h"
#include <string>
#include <vector>


#ifndef FIGURES_POLYGON_H
#define FIGURES_POLYGON_H


class Polygon : public Figure {
private:
    std::vector<Point> points;
public:
    Polygon();
    Polygon(std::vector<Point> v);
    Polygon(std::string s);

    void vector_init(std::vector<Point> v);
    void file_init(std::string s);

    double getArea();
    double getPerimeter();
    void printType();
};


#endif //FIGURES_POLYGON_H
