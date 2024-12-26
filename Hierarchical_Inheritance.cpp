#include <iostream>
using namespace std;

class BaseClass{
    public:
    BaseClass(){
        cout<<"Base class construtor called\n";
    }
    void getInfo(){
        cout<<"Base class information\n";
    }
};
class Child1:public BaseClass{
    public:
    Child1(){
        cout<<"Child1 class construtor called\n";
    }
    void getInfo(){
        cout<<"Child1 class Information\n";
    }
};
class Child2:public BaseClass{
    public:
    Child2(){
        cout<<"Child2 class construtor called\n";
    }
    void getInfo(){
        cout<<"Child2 class Information\n";
    }
};
class Child3:public BaseClass{
    public:
    Child3(){
        cout<<"Child3 class construtor called\n";
    }
    void getInfo(){
        cout<<"Child3 class Information\n";
    }
};
int main(int argc, char const *argv[])
{
    Child1 ch1;
    ch1.getInfo();
    Child2 ch2;
    ch2.getInfo();
    Child3 ch3;
    ch3.getInfo();
    return 0;
}
