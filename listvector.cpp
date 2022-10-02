#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;
    list<int> n(5, 400);
    for (int i : n)
    {
        cout << i << endl;
    }

    l.push_back(2);
    l.push_front(7);
    for (int i : l)
    {
        cout << i << endl;
    }
    cout << "size" << l.size() << endl;
    cout << "empty" << l.empty() << endl;
    cout << "front" << l.front() << endl;
    cout << "back" << l.back() << endl;
    for (int i : l)
    {
        cout << i << endl;
    }

    l.pop_back();

    for (int i : l)
    {
        cout << "pop back" << i << endl;
    }
    l.erase(l.begin());
    cout
        << "element after erase" << l.size() << endl;

    return 0;
}