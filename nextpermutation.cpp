#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int matrix[3][3] = {1, 0, 1, 0, 1, 0, 1, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[1][j] == 0)
                matrix[1][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][1] == 0)
                matrix[i][1] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 1)
                count++;
        }
    }

    cout << count;

    return 0;
}