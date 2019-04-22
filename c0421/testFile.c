#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *file;
  char buf[1024] = {0};
  file = fopen("test1.txt", "a+"); //a+  追加内容 + 创建
  fwrite("hello,c!", 1, 8, file);
  rewind(file); //游标放到文件开头
  fread(buf, 1, 26, file);
  fclose(file);
  printf("buf %s \n", buf);
  return 0;
}
