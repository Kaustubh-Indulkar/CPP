#include <iostream>
using namespace std;

class TestStatic{
    public:
        static int count;
        TestStatic()
        {
            count+=1;
        }
        static int getCount()
        {
            return count;
        }
};

int TestStatic::count=0;
int main(int argc, char const *argv[])
{
    TestStatic t1;
    TestStatic t2;
    TestStatic t3;
    cout<<"Total object count is:\n";
    cout<<TestStatic::getCount()<<endl;
    return 0;
}
