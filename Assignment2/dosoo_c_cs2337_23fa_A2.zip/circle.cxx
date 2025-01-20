// Cecil Dosoo
// 1121730

#include "circle.h"

circle::circle(point cp, double r_){
    x = cp.getx();
    y = cp.gety();
    r = r_;

}

circle::circle(double x_, double y_, double r_){
    x = x_;
    y = y_;
    r = r_;
}

double circle::area(){
    double a = M_PI;
    double b = pow(r,2);
    double c = a*b;
    return c;
}


bool operator ==(circle c1, circle c2) {
    bool check_x = (c1.getx() == c2.getx());
    bool check_y = (c1.gety() == c2.gety());
    bool check_r = (c1.getr() ==c2.getr());
    return check_x && check_y && check_r;
}


bool operator &&(circle c1, circle c2){
    double x_diff = c1.getx() - c2.getx();
    double y_diff = c1.gety() - c2.gety();
    double r_diff = c1.getr() - c2.getr();
    double r_total = c1.getr() + c2.getr();

    double a = pow(r_diff, 2);
    double b = pow(x_diff, 2) + pow(y_diff, 2);
    double c = pow(r_total, 2);

    return (a <= b) && (b <= c);
}

