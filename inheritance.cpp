#include <iostream>
#include <cstring>
using namespace std;

class Person{
    int aadharNo;
    char name[20];
    char address[30];

  public:
    Person()
    {
        cout<<"Person Contructor Called";
    } 
    void setPerson(int aadhar,char name1[20],char add[30]){
        aadharNo=aadhar;
        strcpy(name,name1);
        strcpy(address,add);
    } 
    void displayPerson(){
        cout<<"Addhar No is: "<<aadharNo<<"Name is: "<<name<<"Address is: "<<address;
    }
};

class Employee : public Person{
    int empNo;
    char empName[20];
    int Salary;

 public:
    void setEmployee(int eno,char ename[20],int sal){
        empNo=eno;
        strcpy(empName,ename);
        Salary=sal;
    }   
    void displayEmployee(){
        cout<<"Employee No: "<<empNo<<"Employee Name: "<<empName<<"Salary: "<<Salary;
    }
};
int main(int argc, char const *argv[])
{
    // Person p1;
    // p1.setPerson(1,"ahskk","ajslslkla");
    // p1.displayPerson();

    Employee e1;
    e1.setPerson(1,"ahskk","ajslslkla");
    e1.displayPerson();
    e1.setEmployee(100,"ajkksk",50000);
    e1.displayEmployee();
    

    return 0;
}
