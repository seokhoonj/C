#include <stdio.h>

int main()
{
	int matrix[8][8] = {
		{  1,  2,  3,  4,  5,  6,  7,  8 },
        {  9, 10, 11, 12, 13, 14, 15, 16 },
        { 17, 18, 19, 20, 21, 22, 23, 24 },
        { 25, 26, 27, 28, 29, 30, 31, 32 },
        { 33, 34, 35, 36, 37, 38, 39, 40 },
        { 41, 42, 43, 44, 45, 46, 47, 48 },
        { 49, 50, 51, 52, 53, 54, 55, 56 },
        { 57, 58, 59, 60, 61, 62, 63, 64 }
    };

	int row = sizeof(matrix) / sizeof(matrix[0]);
	int col = sizeof(matrix[0]) / sizeof(int);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == j)
				printf("%d", matrix[i][j]);
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}
