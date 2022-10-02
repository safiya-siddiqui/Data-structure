#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;

    void hello()
    {
        cout << "hello safiya you are the best employee of our company" << endl;
    }

    void hello(int n)
    {
        cout << "can i sleep  for 5 minutes" << endl;
    }
};
class B
{
public:
    void laugh()
    {
        cout << "you can not laugh very loudly in this  showroom" << endl;
    }
};

class C : public A, public B
{
public:
    void weep()
    {
        cout << "you should not do this kind of nonsense" << endl;
    }
};

int main()
{

    // scope resolution operator in inheritance ambiguity
    A first;
    first.A::hello();
    first.A::hello(3);

    return 0;
}
