#include <stdio.h>

int main() {
    printf("Hello, World!\n");

//    float  a = 100.9f;
//    printf("a = %f\n",a);
//    printf("请输入：");
//    float  a;
//
//    scanf("%f",&a);
//
//    printf("a = %f\n",a);


    short  int b; //2个字节
    b = 2;
    printf("%hd  \n",b);

    long c ;//4字节
    c = 1;
    printf("%ld  \n",c);

    long long d; //8个字节
    d = 1000;
    printf("%lld \n",d);




    return 0;
}