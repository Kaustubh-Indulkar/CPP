#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    public:
        void virtual display()
        {
            cout<<"This is person class function\n";
        }
};

class Student:public Person{
    public:
         void display()
        {
            cout<<"This is student class function\n";
        }
};
class Customer:public Person{
    public:
         void display()
        {
            cout<<"This is customer class function\n";
        }
};

int main(int argc, char const *argv[])
{
    Person p;
    Person *per=&p;
    Student s;
    Customer c;
    per=&s;
    per->display();
    per=&c;
    per->display();
    return 0;
}
