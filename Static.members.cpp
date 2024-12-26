#include <iostream>
using namespace std;

class BaseClass
{
    void testPrivateFun(){
        cout<<"I have private information\n";
    }

    public:
    BaseClass(){
        cout<<"Base Class constructor called\n";
    }

    void publicBaseInfo()
    {
        cout<<"I have lot of public information \n";
    }

    protected:
    void protectedBaseInfo()
    {
        cout<<"I have lot of protected information\n";
    }
};

class DerivedClass:public BaseClass{
    public:
    DerivedClass()
    {
        cout<<"Derived class contructor called\n";
        protectedBaseInfo();
    }
};

class DerivedClass2 : protected BaseClass
{
    public:
    DerivedClass2(){
        cout<<"Derived class constructor called\n";
        publicBaseInfo();
        protectedBaseInfo();
    }
};

class DerivedClass3: private BaseClass
{
    public:
    DerivedClass3()
    {
        cout<<"Derived class constructor called\n";
        // publicBaseInfo();
        // protectedBaseInfo();
    }
};

class Isolated
{
    public:
    void testScope()
    {
        BaseClass b;
        b.publicBaseInfo();
    }
};

int main(int argc,const char * argv[]){
    DerivedClass d;
    d.publicBaseInfo();
    // d.testPrivateFun();

    // Isolated obj;
    // obj.testScope();
    // DerivedClass2 d2;
    // // d2.publicBaseInfo();

    // DerivedClass3 d3;

    // d3.publicBaseInfo();
    // d3.protectedBaseInfo();
    // d3.testPrivateFun();

    return 0;
}
