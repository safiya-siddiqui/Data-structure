#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(10);
    mini.push(4);
    mini.push(8);
    mini.push(5);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << endl;
        mini.pop();
    }
    cout << endl;

    return 0;
}
