#include <iostream>
using namespace std;
void generaterow(int n)
{
    int prev = 1;
    cout << prev;
    for (int i = 1; i <= n; i++)
    {
        int curr = (prev * (n - i + 1)) / i;
        cout << " "
             << " " << curr << endl
             << endl;
        prev = curr;
    }
}
int main()
{
    int n = 5;
    generaterow(n);
    return 0;
}