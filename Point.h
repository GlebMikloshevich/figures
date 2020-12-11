#include <cmath>
#include <iostream>


#ifndef FIGURES_POINT_H
#define FIGURES_POINT_H


class Point {
    public:
        int x, y;
        Point(){}
        Point(int x1, int y1);

        Point(const Point& p);

        Point& operator= (const Point& p);

        static double distance(Point a, Point b);

        friend std::ostream& operator<< (std::ostream &out, const Point& point);
};


#endif //FIGURES_POINT_H
