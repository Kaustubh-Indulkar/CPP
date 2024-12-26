#include <iostream>
using namespace std;

long double factorial(long double n);

int main(int argc, char const *argv[])
{
    long double num,fact;
    cout<<"Enter the Number\n";
    cin>>num;
    fact=factorial(num);
    cout<<"Factorial=\t"<<fact;
    return 0;
}

long double factorial(long double n){
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
}