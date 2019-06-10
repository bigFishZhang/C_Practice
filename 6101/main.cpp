#include <iostream>

class Test{
public:
    Test(){

    }
    Test(int x,int y){
        a = x;
        b = y;
    }
    void printText(){
        printf("%d , %d \n",a,b);
    }
    ~Test(){
        a = 0;
        b = 0;
        printf("bye");
    }

private:
    int a;
    int b;
};


int main() {
    Test test = Test(1,2);
    test.printText();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}