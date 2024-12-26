#include <iostream>
#include <cstring>
using namespace std;

class Complex_num
{
    int x,y;
    public:
    //Create a member function to take
        void inp(){
            cout<<"Input two complex numbers: "<<endl;
            cin>>x>>y;
        }

        //Use binary '+' operator to overload

    Complex_num operator + (Complex_num obj){
        //Create an object

        Complex_num A;
        cout<<"x= "<<x<<"obj.x="<<obj.x;
        cout<<"y= "<<y<<"obj.y="<<obj.y;

        //Assign values to object
        A.x=x+obj.x;
        A.y=y+obj.y;
        return (A);
    }
    //Overload the binary(-) operator
    Complex_num operator - (Complex_num obj){
        //Create an object
        Complex_num A;
        cout<<"x= "<<x<<"obj.x="<<obj.x;
        cout<<"y= "<<y<<"obj.y="<<obj.y;

        A.x=x-obj.x;
        A.y=y-obj.y;
        return (A);
    }

    //display the result of addition
    void print()
    {
        cout<<x<<"+"<<y<<"i"<<"\n";
    }
    void print2()
    {
        cout<<x<<"-"<<y<<"i"<<"\n";
    }
};
int main(int argc, char const *argv[])
{
    Complex_num x1,y1,sum,sub;
    x1.inp();
    y1.inp();
    sum=x1+y1;
    sub=x1-y1;

    cout<<"\n Entered values are: \n";
    cout<<"\t";
    x1.print();
    cout<<"\t";
    y1.print();

    cout<<"\n The addition of two complex (real and imaginary) numbers: ";
    sum.print();
    cout<<"\n The subtraction of two complex (real and imaginary) numbers: ";
    sum.print2();

    return 0;
}
