#include <iostream>
using namespace std;

class Base1{
    public:
        Base1(){
            cout<<"Base 1 class contructor called\n";
        }
        void Base1Info(){
            cout<<"Base1 Information\n";
        }
};

class Base2
{
    public:
        Base2(){
            cout<<"Base2 class constructor called\n";
        }
        void Base2Info(){
            cout<<"Base2 Information\n";
        }
        void Base1Info(){
            cout<<"In Base2(Base1)Information\n";
        }

};

class Child:public Base1,public Base2
{
    public:
        Child(){
            cout<<"Child class contructor called\n";
        }
        void ChildInfo(){
            cout<<"Child Information\n";
        }
};

int main(int argc, char const *argv[])
{
    Child c1;
    c1.Base1::Base1Info();
    c1.Base2::Base1Info();
    c1.Base2Info();
    c1.ChildInfo();
    return 0;
}
