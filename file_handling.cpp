#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n1=0,sp=0,tb=0;
    char ch;
    fstream ff;
    ff.open("C:\\Users\\admin\\Desktop\\filehandling.txt",ios::in|ios::out);
    while(!ff.eof()){
        ff.get(ch);
        cout<<ch;
        if(ch=='\n')
        n1++;
        if(ch=='\t')
        tb++;
        if(ch==' ')
        sp++;
    }
    cout<<"\n Number of new lines:= "<<n1;
    cout<<"\n Number of tabs:= "<<tb;
    cout<<"\n Number of spaces:= "<<sp;
    return 0;
}
