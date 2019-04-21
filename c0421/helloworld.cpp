#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    short a = 1; //16
    int b = 2; //32
    long c = 3; //32
    float d = 1.0; //32
    double e = 2.0;//32 双精度浮点型
    char x ; //8位
    void * mm;//指针
     
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}