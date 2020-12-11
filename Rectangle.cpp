#include "Rectangle.h"
#include "Point.h"

Rectangle::Rectangle(){
}

Rectangle::Rectangle(Point bottomLeft, Point topRight) {
    this->setPoints(bottomLeft, topRight);
}

void Rectangle::setPoints(Point bottomLeft, Point topRight) {
    if (bottomLeft.x == topRight.x || bottomLeft.y == topRight.y)
        throw FigureException();

    this->bl = bottomLeft;
    this->tr = topRight;
}


double Rectangle::getArea() {
    //Can use diagonals to calculate area
    return Point::distance(Point(this->bl.x, this->tr.y), this->tr) *
            Point::distance(this->bl, Point(this->bl.x, this->tr.y));
            //find third point. calc two distances,
}

double Rectangle::getPerimeter() {
    return 2 * (Point::distance(Point(this->bl.x, this->tr.y), this->tr) +
           Point::distance(this->bl, Point(this->bl.x, this->tr.y)));
}

void Rectangle::printType() {
    std::cout<<"Rectangle\n";
}