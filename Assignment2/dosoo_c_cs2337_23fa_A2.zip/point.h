// Cecil Dosoo
// 1121730

#ifndef POINT_H
#define POINT_H


class point {

    public:
        point(double x_=0, double y_=0);
        
        double getx() {return x;}
        double gety() {return y;}



    private:
        double x, y;
};

#endif