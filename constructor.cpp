#include <iostream>
#include <cstring>
using namespace std;

class Car
{
    char name[20];
    int speed;

public:
    // parametric
    Car(char name1[20], int s)
    {
        strcpy(name, name1);
        speed = s;
    }
    // default
    Car()
    {
        cout << "Enter Car Name and Speed" << endl;
        cin >> name >> speed;
    }
    void display()
    {
        cout << "Car is: " << name << "\nand the Speed is: " << speed << "kmph";
    }
};

int main(int argc, char const *argv[])
{
    Car c1;
    c1.display();
    Car c2("ahssk", 200);
    c2.display();

    return 0;
}
