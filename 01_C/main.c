#include <stdio.h>

int main() {

    printf("Hello, World!\n");
    int a = 123;
    int b = 0123;
    int c = 0xABC;
    char x = 127 +2;
    int inpout;

    printf("十进制    %d \n",a);
    printf("八进制    %o \n",b);
    printf("十六进制  %x \n",c);
    printf("越界      %d \n",x);

    printf("please input x \n");
    scanf("%d",&inpout); //等待输入
    printf("input: %d\n",inpout);

    return 0;
}