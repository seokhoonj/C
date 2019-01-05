#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 1;

	for (;;)
	{
		if (i % 10 != 3)
		{
			i++; // continue로 건너뛰면 아래의 i++도 건너뛰므로 필요함
			continue;       
		}

		if (i > 103)
			break;

		printf("%d\n", i);
		i++;
	}

	return 0;
}
