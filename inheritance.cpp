#include <iostream>
using namespace std;
class human
{

public:
    int weight;
    int height;
    int age;

public:
    void setage(int age1)
    {
        age = age1;
    }

    int getage()
    {
        return this->age;
    }

    void setheight(int height1)
    {
        height = height1;
    }

    int getheight()
    {
        return this->height;
    }
};

class man : public human
{
public:
    int color;
    void setcolor(int rang)
    {
        color = rang;
    }

public:
    void getsleep()
    {
        cout << "you can sleep here" << endl;
    }
};

class girl : public man
{
public:
    int rollno;

public:
    void setrollno(int roll)
    {
        rollno = roll;
    }
    void sleep()
    {
        cout << "GIRL SLEEP";
    }
};
int main()
{
    man first;
    first.setage(78);
    cout
        << "age of the man is" << first.age << endl;

    first.setcolor(4);
    cout << "The color of man is" << first.color << endl;

    girl second;
    second.setheight(9.5);
    cout << "the height of girl is" << second.height << endl;

    second.sleep();
    return 0;
}