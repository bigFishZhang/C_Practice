#include <iostream>

using  namespace std;

//namespace spaceA {
//    int g_a = 10;
//    namespace  spaceB {
//        int g_b  = 20;
//
//        namespace  spaceC {
//            struct teacher
//            {
//                int id;
//                char name[64];
//            };
//        }
//    }
//}


int main() {

//    cout << "Hello, World!" << std::endl;
//    cout << spaceA::g_a << endl;
//
//    spaceA::spaceB::spaceC::teacher tl;
//    tl.id = 1;

     // c 可以改变  c++不可以改变
    const int a = 10;

    int *p = (int*)&a;

    printf("a ===> %d \n",a);
    printf("*p ===> %d \n",*p);
    *p = 20;
    printf("a ===> %d \n",a);
    printf("*p ===> %d \n",*p);


//    const int a = 1;
//    const int b = 2;
//    int array[a + b] = {0};
//    int i = 0;
//    for(i = 0; i < (a+b); i++)
//    {
//        printf("array[%d] = %d\n", i, array[i]);
//    }

    return 0;
}