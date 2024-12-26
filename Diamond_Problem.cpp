#include <iostream>
using namespace std;

class A{
    public:
        void getInfo(){
            cout<<"Base Class Info\n";
        }
};

class B:virtual public A{


};

class D: virtual public A{


};

class C: public B,public D{
    
};

int main(int argc, char const *argv[])
{
    C objc;
    objc.getInfo();
    return 0;
}
