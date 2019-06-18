#include <iostream>
#include "complex.h"
using  namespace std;

ostream&
operator << (ostream& os, const complex& x){
    os << '(' << x.real() << x.imag() << ')';
}
int main() {

    std::cout << "Hello, World!" << std::endl;

    complex c1(2, 1);
    complex c2(4, 0);

    cout << c1 << endl;
    cout << c2 << endl;

    cout << c1+c2 << endl;



    cout << (c1 += c2) << endl;




    cout << (5 + c2) << endl;


    return 0;
}