#include <iostream>
#include <cmath>

using  namespace std;

class Point;
//前向声明,是⼀一种不完全型声明,即只需提供类名(⽆无需提供类实现)即可。仅可⽤用 于声明指针和引 ⽤用。

class ManagerPoint{
public:
    double Distance(Point &a,Point &b);

};



class  Point{
public:
    Point(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    void Getxy();

//    friend double Distance(Point &a,Point &b);
    friend double ManagerPoint::Distance(Point &a,Point &b);
private:
    double x,y;

};

void Point::Getxy()
{
    cout << "(" << x << "," << y << ")" << endl;
}

//double Distance(Point &a,Point &b)
//{
//    double dx = a.x - b.x;
//    double dy = a.y - b.y;
//    return sqrt(dx*dx + dy*dy);
//}

double  ManagerPoint::Distance(Point &a, Point &b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);

}
//double  Distance(Point &a,Point &b)
//{
//    double dx = a.x - b.x;
//    double dy = a.y - b.y;
//    return sqrt(dx*dx + dy*dy);
//}

int main() {


    std::cout << "Hello, World! \n" << std::endl;

    Point p1(2.0,4.0),p2(7.0,9.0);
    p1.Getxy();
    p2.Getxy();
    ManagerPoint mp;
    double  d = mp.Distance(p1,p2);
    cout << "Distance is " << d << endl;


    return 0;
}
