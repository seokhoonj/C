#include <stdio.h>
#include <math.h>

int main()
{
	float num1;

	num1 = sqrt(-1.0f);

	if (isnan(num1))
		printf("nan\n");

	return 0;
}
