#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1,
                       2,
                       3,
                       4};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "element at index" << a.at(3) << endl;

    cout << "element at empty" << a.empty() << endl;

    cout << "starting element" << a.front() << endl;
    cout << "ending element" << a.back() << endl;

    return 0;
}