#include <iostream>
using namespace std;

class Employee{
    int empId;
    char name[30];

    public:
        void getData()
        {
            cout<<"Enter Employee Id and name";
            cin>>empId>>name;
        }
        void putData()
        {
            cout<<"Employee ID: "<<empId<<" and Employee Name: "<<name<<endl;
        }
};

int main(int argc, char const *argv[])
{
    cout<<"Hello, World!\n";
    int n,i;
    Employee e[10];
    cout<<"Enter number of employee\n";
    cin>>n;
    for(i=0;i<n;i++){
        e[i].getData();
    }
    cout<<"Printing Array\n";
    for(i=0;i<n;i++){
        e[i].putData();
    }
    return 0;
}
