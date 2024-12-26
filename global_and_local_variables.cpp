#include <iostream>
#include <cstring>
using namespace std;

int a=10;
class TestScopeResolution
{
    public:
        void display()
        {
            int a=100;
            cout<<"Value of local a="<<a;
            cout<<"Value of global a="<<::a;
        }
};
int main(int argc, char const *argv[])
{
    TestScopeResolution s1;
    s1.display();
    return 0;
}
