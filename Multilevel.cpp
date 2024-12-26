#include <iostream>
#include <cstring>
using namespace std;


class GrandParent{
    public:
    GrandParent()
    {
        cout<<"Grand Parent Constructor called\n";
    }
    void getGrandParentInfo()
    {
        cout<<"Grand Parent Information\n";
    }
};

class Parent :public GrandParent
{
    int num;
    char name[30];
    public:
    Parent()
    {
        cout<<"Parent Constructor called\n";
    }
    Parent(int age,char name1[30]){
        cout<<"Parent parametrized Constructor called\n";
        num=age;
        strcpy(name,name1);
        cout<<"age= "<<num<<" and name= "<<name<<endl;
    }
    void getInfo()
    {
        cout<<"Parent Information\n";
    }
    void getParentInfo(){
        cout<<"Parent Information\n";
    }

};

class Child:protected Parent
{
    public:
    Child():Parent(11,'ABC')
    {
        cout<<"Child Constructor Called\n";
    }
    void getInfo()
    {
        cout<<"Child Information\n";
        getGrandParentInfo();
        getParentInfo();
    }
};
int main(int argc, char const *argv[])
{
    Child c;
    c.getInfo();
    Parent p;
    return 0;
}
