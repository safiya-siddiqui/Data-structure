#include <iostream>
using namespace std;

class student
{

    int health;
    string name;
    int age;

public:
    int getage()
    {
        return this->age;
    }

    void setage(int age1)
    {
        age = age1;
    }
};
int main()
{
    student first;
    cout << "you are the first student of my class" << endl;

    cout << "get the age" << first.getage() << endl;
    first.setage(34);

    cout
        << "set the age" << first.getage() << endl;
    return 0;
}