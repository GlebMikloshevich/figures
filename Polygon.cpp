#include "Polygon.h"
#include "fstream"

Polygon::Polygon() {}

Polygon::Polygon(std::vector<Point> v) {
    this->vector_init(v);
}

Polygon::Polygon(std::string s) {
    this->file_init(s);
}

void Polygon::vector_init(std::vector<Point> v) {
    if (v.size() < 3)
        throw FigureException();
    this->points = v;
}

void Polygon::file_init(std::string s) {
    int length = 0;

    std::ifstream in;
    in.open(s);


    if (in.is_open()){
        in>>length;
        int x, y;
        if (length < 3)
            throw FigureException();
        this->points.reserve(length);

        for (int i = 0; i < length; i++) {
            in>>x>>y;
            Point p = Point(x, y);
            this->points.push_back(p);
        }
    }

    in.close();

}

double Polygon::getArea() {
    double area = 0;
    for (int i = 0; i < this->points.size()-1; i++)
        area += this->points[i].x * this->points[i+1].y - this->points[i+1].x * this->points[i].y;

    int index = points.size()-1;
    area += this->points[index].x * this->points[0].y - this->points[0].x * this->points[index].y;
    return (area >= 0 ? area : -area) /2;
}

double Polygon::getPerimeter() {
    double perimeter = 0;

    for(int i = 0; i < this->points.size()-1; i++)
        perimeter += Point::distance(this->points[i], this->points[i+1]);
    perimeter += Point::distance(this->points[0], this->points[this->points.size()-1]);

    return perimeter;
}

void Polygon::printType() {
    std::cout<<"Polygon\n";
}