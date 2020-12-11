#include <iostream>
#include "paths.h"
#include "Point.h"

#ifndef FIGURES_FIGURE_H
#define FIGURES_FIGURE_H

class FigureException{};

class Figure {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual void printType() = 0;
};


#endif //FIGURES_FIGURE_H
