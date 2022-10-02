#include <iostream>
#include <stack>

using namespace std;
int main()
{

    stack<string> s;

    s.push("kumar");
    s.push("tyagi ji");
    cout << "top element" << s.top() << endl;
    cout << "size" << s.size() << endl;
    cout << "empty" << s.empty() << endl;

    s.pop();

       cout
        << "element after erase" << s.size() << endl;

    return 0;
}