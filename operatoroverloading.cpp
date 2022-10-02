#include <iostream>
using namespace std;

class B
{
public:
    int a;
    int b;

public:
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {

        cout << "output is" << endl;
    }
};
int main()
{
    B obj1, obj2;
    obj1.a = 2;
    obj2.a = 4;
    obj1 + obj2;
}
