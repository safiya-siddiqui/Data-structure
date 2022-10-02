#include <iostream>
using namespace std;
int main()
{
    int arr[50], i, num, pos, n;
    cout << "Enter the Size for Array: ";
    cin >> n;
    cout << "Enter " << n << " Array Elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "\nEnter Element to Insert: ";
    cin >> num;

    arr[4] = num;
    cout << "\nThe New Array is:\n";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << "  ";
    cout << endl;
    return 0;
}