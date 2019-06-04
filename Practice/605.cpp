/*
 函数重载与函数指针
当使⽤用重载函数名对函数指针进⾏行赋值时
根据重载规则挑选与函数指针参数列表⼀一致的候选者
严格匹配候选者的函数类型与函数指针的函数类型
*/

#include <iostream>
using namespace std;

int func(int x)
{
  return x;
}

int func(int a, int b)
{
  return a + b;
}

int func(const char *s)
{
  return strlen(s);
}

typedef int (*PFUNC)(int a);         // int(*)(int a)
typedef int (*PFUNC2)(int a, int b); // int(*)(int a, int b)

int main()
{
  int c = 0;
  PFUNC p = func;
  c = p(1);

  printf("c = %d \n", c);

  PFUNC2 p2 = func;

  c = p2(1, 2);

  printf("c = %d \n", c);

  return 0;
}