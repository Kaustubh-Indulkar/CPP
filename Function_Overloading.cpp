#include <iostream>
#include <cstring>
using namespace std;

class TestOverloading
{
public:
    void add(int a, int b, int c)
    {
        int result = a + b + c;
        cout << "Addition=" << result << endl;
    }

    void add(int a, int b)
    {
        int result = a + b;
        cout << "Addition=" << result << endl;
    }

    void add(double a, double b)
    {
        double result = a + b;
        cout << "Addition=" << result << endl;
    }

    void add(int a, double b)
    {
        double result = a + b;
        cout << "Addition=" << result << endl;
    }
    void add(double a, int b)
    {
        double result = a + b;
        cout << "Addition=" << result << endl;
    }
};

int main(int argc, char const *argv[])
{
    TestOverloading test;
    test.add(12, 23, 45);
    test.add(100, 200);
    test.add(23.45, 89.76);
    test.add(21, 56.21);
    test.add(78.9, 30);

    return 0;
}
