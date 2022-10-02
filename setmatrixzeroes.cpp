#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3] = {1, 1, 1, 1, 0, 1, 1, 1, 1};

    int col0 = 1, rows = 3, cols = 3;
    for (int i = 0; i < rows; i++)
    {
        if (matrix[i][0] == 0)
            col0 = 0;

        for (int j = 1; j < cols; j++)
            if (matrix[i][j] == 0)
                matrix[i][0] = matrix[0][j] = 0;
    }
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 1; j--)

            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;

        if (col0 == 0)
            matrix[i][0] = 0;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j];
    }
    return 0;
}