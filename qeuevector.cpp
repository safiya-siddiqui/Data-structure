#include <iostream>
#include <queue>

using namespace std;
int main()
{

    queue<string> q;

    q.push("kumar");
    q.push("tyagi ji");
    cout << "top element" << q.front() << endl;
    cout << "size" << q.size() << endl;
    cout << "empty" << q.empty() << endl;

    q.pop();
    cout << "top element" << q.front() << endl;
    cout
        << "element after erase" << q.size() << endl;

    return 0;
}