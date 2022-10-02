#include <iostream>
#include <deque>
using namespace std;
int main()
{

    deque<int> d;
    d.push_back(5);
    d.push_front(4);
    d.push_front(2);
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "print the first element of first index" << d.at(2) << endl;

    cout << "front element" << d.front() << endl;
    cout << "back element" << d.back() << endl;
    cout << "Empty" << d.empty() << endl;

    cout << "size before erase" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "size of deque" << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    return 0;
}
