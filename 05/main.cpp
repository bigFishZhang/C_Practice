#include <iostream>
using namespace std;
struct Teacher {
    int &a;
    int &b;
};

//函数当左值 //返回变量的值
int func1() {
static int a1 = 10;
return a1;
}
//返回变量本⾝身 ,
int& func2()
{
static int a2 = 10;
return a2;
}

int main() {

//    int a = 100;
//    int b = 888;
//
//    int &x = a; //b是a的引用 相当于b 是 a的别名 引用定义后不可改变 一定要初始化
//
//    x = 99;
//
//    cout << "a = " << a  << endl;
//
//    x = b;  // a = b
//    cout << "a = " << a  << endl;
//
//
//
//    std::cout << "Hello, World!" << std::endl;

//    int a = 10;
//    int &b = a; // 注意: 单独定义的引⽤用时，必须初始化。
//    b = 11;
//    printf("a:%d\n", a);
//    printf("b:%d\n", b);
//    printf("&a:%p\n", &a);
//    printf("&b:%p\n", &b);
//
//    printf("sizeof(Teacher) %lu\n", sizeof(Teacher));

//函数当右值
    int c1 = func1();
    cout << "c1 = " << c1 <<endl;
    int c2 = func2(); //函数返回值是⼀一个引⽤用,并且当右值 cout << "c2 = " << c2 <<endl;
//函数当左值
//func1() = 100; //error
    func2() = 100; //函数返回值是⼀一个引⽤用,并且当左值
    c2 = func2();
    cout << "c2 = " << c2 <<endl;

    return 0;

}

/*
 *1 引用没有定义,是一种关系型声明。声明它和原有某一变量(实体)的关 系。故 而类型与原类型保持一致,且不分配内存。与被引用的变量有相同的地 址。
 *2 声明的时候必须初始化,一经声明,不可变更。
 *3 可对引用,再次引用。多次引用的结果,是某一变量具有多个别名。
 *4 &符号前。有数据类型时,是引用。其它皆为取地址
 * */