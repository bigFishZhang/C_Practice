#include <iostream>
using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

class circle
{
public:
    double r;
    double pi = 3.1415926;
    double area = pi*r*r;
};

void init(Date &d)
{
    cout << "year,month,day" <<endl;
    cin >>d.year>>d.month>>d.day;
}

void print(Date &d)
{
    cout << "year,month,day" <<endl;
    cout << d.year << d.month << d.day << endl;
}

bool isLeapYear(Date &d)
{
    if ((d.year%4 == 0 && d.year%100 !=0) || (d.year%400 ==0))
        return true;
    else
        return false;
}



int main() {
//    std::cout << "Hello, World!" << std::endl;
//
//    Date d;
//    init(d);
//    print(d);
//    if (isLeapYear(d))
//        cout<<"leap years"<<endl;
//    else
//        cout<<"not leap year"<<endl;


    printf("--------------------");

    circle pi;
    cout << "请输⼊入area" << endl; cin >> pi.r;
    cout << pi.area << endl; //乱码



    return 0;
}