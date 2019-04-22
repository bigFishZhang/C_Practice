#include <stdio.h>
void prinfInfo()
{
  printf("hell prinfInfo \n");
}
int sum(int a, int b)
{
  return a + b;
}

int sub(int a, int b)
{
  return a - b;
}
//函数指针
int main(int argc, char *argv[])
{
  int result, re;
  prinfInfo();
  int (*f)(int, int);
  void (*fun)();
  fun = prinfInfo;
  f = sum;

  result = f(1, 2);
  printf("result %d \n", result);
  fun();
  f = sub;
  re = f(result, 1);
  printf("re %d \n", re);
  return 0;
}
