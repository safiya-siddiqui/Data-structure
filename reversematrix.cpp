#include <iostream>
using namespace std;

int main()
{
    int matrix[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    
    for (int i = 0; i < 3; i++)
    {
        int start = 0;
        int end = 2;

        while (start < end)
        {

            int temp1 = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp1;
            start++;
            end--;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[i][j] << ' ';
            }
            cout << endl;
        }
    }

    return 0;
}