#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "size" << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "capacity" << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    // pop back function

    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    v.pop_back();
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    vector<int> a(5, 1);
    cout << "print last" << endl;

    for (int last : a)
    {
        cout << last << endl;
    }
    cout << endl;

    cout<<a.vector<<endl;

    return 0;
}