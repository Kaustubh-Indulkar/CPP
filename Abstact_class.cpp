#include <iostream>
#include <cstring>
using namespace std;

class Base{
    void virtual add(int,int)=0;
};

class Derived:public Base
{
    public:
        void add(int x,int y)
        {
            cout<<"Addition is\t"<<x+y<<endl;
        }

    // public:
    // void Multiply(int x,int y)
    // {
    //     cout<<"Multiplication is\t"<<x*y<<endl;
    // }
};

int main(int argc, char const *argv[])
{
    Derived d;
    d.add(45,78);
    return 0;
}

//You have to implement defination of pure virtual function of base class in derived class otherwise derived class also become an abstract base class and will not allow to create object of derived class