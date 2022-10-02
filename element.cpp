#include <iostream>
using namespace std;
int main()
{

    int flag;
    int n;
    cin >> n;
    cout << "enter the size of an array" << endl;
    int arr[n];
    cout << "enter the element of an array";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter key";
    cin >> key;
    flag = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == key)
            flag = 1;
        break;
    }
    if (flag = 0)
        cout << "find a element in an array";
    else
    {
        cout << "not found element in an array";
    }
    return 0;
}