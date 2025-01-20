// Cecil Dosoo
// 1121730

#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"
#include <cmath>

class circle {
    public:
        circle(point cp, double r_ = 1);
        circle(double x_=0, double y_=0, double r_=1);

        double area();

        double getx() {return x;}
        double gety() {return y;}
        double getr() {return r;}


    private:
        double x, y, r;
};

bool operator ==(circle c1, circle c2);
bool operator &&(circle c1, circle c2);




#endif