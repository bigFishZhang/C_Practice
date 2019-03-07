#include <iostream>

using  namespace std;

struct Teacher
{
    char name[64];
    int age;
};

//在被调⽤用函数 获取资源
int getTeacher(Teacher **p)
{
    Teacher *tmp = NULL;
    if (p == NULL)
    {
        return  -1;
    }
    tmp = (Teacher *)malloc(sizeof(Teacher));
    if (tmp == NULL)
    {
        return -2;
    }
    tmp->age = 33;
    // p是实参的地址 *实参的地址 去间接的修改实参的值
    *p = tmp;
    return 0;
}

//指针的引⽤用 做函数参数
int getTeacher2(Teacher* &myp)
{
    //给myp赋值 相当于给main函数中的pT1赋值
    myp = (Teacher *)malloc(sizeof(Teacher));

    if (myp == NULL)
    {
        return  -1;
    }
    myp->age = 36;

    return 0;
}

void freeTeacher(Teacher *pT1)
{
    if (pT1 == NULL)
    {
        return;
    }
    free(pT1);
}

void printTeacher(const Teacher &myt)
{
    //常引⽤用 让 实参变量 拥有只读属性
//     myt.age = 33; 不能修改
    printf("myt.age:%d \n", myt.age);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Teacher *pT1 = NULL;

    //1 c语⾔言中的⼆级指针
    getTeacher(&pT1);
    cout<<"age 1:"<<pT1->age<<endl;
    freeTeacher(pT1);

    //2 c++中的引⽤ (指针的引⽤用)
    //引⽤的本质 间接赋值后2个条件 让c++编译器帮我们程序员做了。
    getTeacher2(pT1);
    cout<<"age 2 :"<<pT1->age<<endl;
    freeTeacher(pT1);

    //////////////////////////////////引用

    //1> ⽤变量 初始化 常引⽤
    int x1 = 30;
    const int &y1 = x1; //⽤x1变量去初始化 常引⽤用

    //2> ⽤字⾯面量 初始化 常量引⽤
    const int a = 40; //c++编译器把a放在符号表中


    //题目
    //int &m = 41; //error , 普通引⽤用 引⽤用⼀一个字⾯面量 请问字⾯面量有没有内存地址

    const int &m = 43; //c++编译器 会 分配内存空间
    // int temp = 43
    // const int &m = temp;


    Teacher  t1;
    t1.age = 18;
    printTeacher(t1);

    return 0;
}