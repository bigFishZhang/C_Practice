#include <iostream>
#include "Test.h"


int main() {

    Test test = Test();
    test.helloWorld();
    test.test("zhangzb");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}