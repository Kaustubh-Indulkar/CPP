#include <iostream>
#include <cstring>
using namespace std;

class Student 
{
    int rollNo;
    char name[30];
    public:
        void display();
        Student()
        {
            cout<<"Constructor called!"<<"\n";
            cout<<"Enter the values of rollNo and name\n";
            cin>>rollNo>>name;
        }
        Student(int rno,char name1[30]){
            cout<<"Parameterized constructor called"<<"\n";
            rollNo=rno;
            strcpy(name,name1);
        }

        ~Student(){
            cout<<"\n Destructor called!"<<"\n";
        }
};

void Student::display(){
    cout<<"Name="<<name<<"and rollNo="<<rollNo;
}
int main(int argc, char const *argv[])
{
    Student s1;
    s1.display();
    char name[30]="Leena";
    Student s2(2,name);
    s2.display();
    return 0;
}
