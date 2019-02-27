#include <iostream>

using  namespace std;

namespace spaceA {
    int g_a = 10;
    namespace  spaceB {
        int g_b  = 20;

        namespace  spaceC {
            struct teacher
            {
                int id;
                char name[64];
            };
        }
    }
}


int main() {
    cout << "Hello, World!" << std::endl;
    cout << spaceA::g_a << endl;

    spaceA::spaceB::spaceC::teacher tl;
    tl.id = 1;

    return 0;
}