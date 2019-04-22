#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int *a, *b;
    printf("addr of a:%p \n", &a);
    printf("addr of b:%p \n", &b);  //地址空间占8个字节
    a = (int *)malloc(sizeof(int)); // a b 在堆里开一个32位的内存空间
    b = (int *)malloc(sizeof(int));

    *a = 1;
    *b = 2;

    printf("addr of a:%p  %p   %d\n", &a, a, *a);
    printf("addr of b:%p  %p   %d \n", &b, b, *b);

    /*
                指针的地址      指向的地址    存放的内容
    addr of a:0x7ffeeb223838  0x7fa8fae00000   1
    addr of b:0x7ffeeb223830  0x7fa8fae00010   2 
    */

    int c[3] = {0, 1, 2};
    printf("addr of c %p,%p,%d,%d,%d \n", &c, c, c[0], c[1], c[2]);

    return 0;
}