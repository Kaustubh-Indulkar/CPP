#include <iostream>
using namespace std;
void Fun1(int &);
int main(int argc, char const *argv[])
{
    int i=10;
    cout<<" i = "<<i<<endl;
    Fun1(i);
    return 0;
}
void Fun1(int & j){
    cout<<" j= "<<j<<endl;
}
