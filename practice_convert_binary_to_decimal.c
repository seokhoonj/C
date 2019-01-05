#include <stdio.h>
#include <math.h>

int main()
{
	int decimal = 0;
	int temp;
	int binary[4] = { 1, 1, 0, 1 };

	int position = 0;
	for (int i = sizeof(binary) / sizeof(int) - 1; i >= 0; i--)
	{
		if (binary[i] == 1)
		{
			temp = 1 << position;
			decimal += 1 << position;
		}

		printf("%d, %d\n", temp, decimal);

		position++;
	}

	printf("%d\n", decimal);

	return 0;
}
