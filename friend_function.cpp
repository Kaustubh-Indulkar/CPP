#include <iostream>
using namespace std;

class Base {
    private:
        int private_variable;

    protected:
        int protected_variable;

    public:
        Base()
        {
            private_variable=10;
            protected_variable=99;
        }    

        friend class Friend;
};

class Friend{
    public:
        void display(Base &t)
        {
            cout<<"The value of Private Variable= "<<t.private_variable<<endl;
            cout<<"The value of Protected Variable= "<<t.protected_variable<<endl;
        }
};

//Driver Code

int main(int argc, char const *argv[])
{
    Base g;
    Friend fri;
    fri.display(g);
    return 0;
}
