#include <stdio.h>

struct st
{
  int a;
  int b;
};

enum e_type
{
  red = 1,
  green,
  blue,
};

int main(int argc, char *argv[])
{
  struct st sst; //struct st是类型 sst是变量名
  sst.a = 10;
  sst.b = 20;
  printf("sst content is :%d  ， %d \n", sst.a, sst.b);
  enum e_type et;
  et = red;
  printf("color is %d \n", et);
  return 0;
}
