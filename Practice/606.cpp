#include <iostream>
using namespace std;
struct Date
{
  int year;
  int month;
  int day;
};

void init(Date &d)
{
  cout << "year,month,day:" << endl;
  cin >> d.year >> d.month >> d.day;
}

void print(Date &d)
{
  cout << "year,month,day:" << endl;
  cout << d.year << ":" << d.month << ":" << d.day << endl;
}

bool isLeapYear(Date &d)
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

int main()
{
  Date d;
  init(d);
  print(d);
  if (isLeapYear(d))
    cout << "leap year" << endl;
  else
    cout << "not leap year" << endl;
  return 0;
}