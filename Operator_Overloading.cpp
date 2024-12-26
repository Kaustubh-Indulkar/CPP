#include <iostream>
using namespace std;

class Count{
    int value;
    public:

    Count(){
        value=5;
    }

    void operator ++()
    {
        ++value;
    }

    void display()
    {
        cout<<"Count: "<<value<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Count count1;
    ++count1;
    count1.display();
    return 0;
}
