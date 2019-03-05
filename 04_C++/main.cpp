#include <iostream>

enum season
{
    SPR,
    SUM,
    AUT,
    WIN
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    enum season s = SPR;
    s = SUM;
    std::cout << "s = " << s << std::endl;


    return 0;
}