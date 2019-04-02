#include <iostream>
#include <string.h>
using namespace std;

#if 0
优点: 内嵌代码,辟免压栈与出栈的开销
缺点: 代码替换,易使⽣生成代码体积变⼤大,易产⽣生逻辑错误。
#endif

#define SQR(x) ((x)*(x))


#if 0
优点: ⾼高度抽象,避免重复开发 缺点: 压栈与出栈,带来开销
#endif

inline int sqr(int x)
{
    return x*x;
}

inline void func(int a)
{
    a = 20;
    cout << a << endl;

}

//2 在默认参数规则 ，如果默认参数出现，那么右边的都必须有默认参数
float volume(float length, float weight = 4,float high = 5)
{
    return length*weight*high;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    func(10);
    printf("----------------- \n");

    int i = 0;
    while (i < 5)
    {
        printf("%d\n",SQR(i++));
//        printf("%d\n",sqr(i++));
    }

    printf("----------------- \n");


    float v = volume(10);
    float v1 = volume(10,20);
    float v2 = volume(10,20,30);
    cout<<v<<endl;
    cout<<v1<<endl;
    cout<<v2<<endl;


    return 0;
}