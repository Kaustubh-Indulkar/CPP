#include <iostream>
#include <cstring>
using namespace std;

class car{
    char name[20];
    int speed;

public:
    void setCarDetails(char name1[20],int s){
        strcpy(name,name1);
        speed=s;
    }    
    void display(){
        cout<<"Car is: "<<name<<"\nand the Speed is: "<<speed<<"kmph";
    }

};

int main(int argc, char const *argv[])
{
    char CarName[20];
    int speed;
    cout<<"Enter the Car Name and Speed\n";
    cin>>CarName>>speed;
    car Thar;
    Thar.setCarDetails(CarName,speed);
    Thar.display();
    return 0;
}
