#include <iostream>
using namespace std;

class Date{
public:
    void init(Date &d);
    void print(Date &d);
    bool isLeapYear(Date &d);

private:
    int year;
    int month;
    int day;

};

void Date::init(Date &d)
{
  cout << "year,month,day:" << endl;
  cin >> d.year >> d.month >> d.day;
}
void Date::print(Date &d)
{
  cout << "year,month,day:" << endl;
  cout << d.year << ":" << d.month << ":" << d.day << endl;
}

bool Date::isLeapYear(Date &d)
{
  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
//struct Date
//{
//  int year;
//  int month;
//  int day;
//};
//
//void init(Date &d)
//{
//  cout << "year,month,day:" << endl;
//  cin >> d.year >> d.month >> d.day;
//}
//
//void print(Date &d)
//{
//  cout << "year,month,day:" << endl;
//  cout << d.year << ":" << d.month << ":" << d.day << endl;
//}
//
//bool isLeapYear(Date &d)
//{
//  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
//  {
//    return true;
//  }
//  else
//  {
//    return false;
//  }
//}
//
//int main()
//{
//  Date d;
//  init(d);
//  print(d);
//  if (isLeapYear(d))
//    cout << "leap year" << endl;
//  else
//    cout << "not leap year" << endl;
//  return 0;
//}

int main()
{
  Date d;
    d.init(d);
    d.print(d);
  if (d.isLeapYear(d))
    cout << "leap year" << endl;
  else
    cout << "not leap year" << endl;
  return 0;
}