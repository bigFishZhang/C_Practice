#include <stdio.h>
void prinfInfo()
{
  printf("hell prinfInfo \n");
}
int sum(int *a, int *b)
{
  (*a)--;
  return *a + *b;
}

int sub(int a, int b)
{
  return a - b;
}
//函数指针
int main(int argc, char *argv[])
{
  int result, re, a, b;
  a = 10;
  b = 20;
  prinfInfo();
  int (*f)(int *, int *);
  void (*fun)();
  fun = prinfInfo;
  f = sum;

  result = f(&a, &b);
  printf("result %d \n", result);
  printf("a =%d, b = %d \n", a, b);
  fun();
  // f = sub;
  // re = f(result, 1);
  printf("re %d \n", re);
  return 0;
}
