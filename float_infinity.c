#include <stdio.h>
#include <float.h>
#include <math.h>

int main()
{
	float num1 = FLT_MAX;
	float num2;

	num1 = num1 * 1000.0f;

	if (num1 == INFINITY)
		printf("infinity\n");

	if (isinf(num1))
		printf("infinity\n");

	num2 = 0.0f;
	num1 = 1.0f / num2;

	if (isinf(num1))
		printf("infinity\n");

	return 0;
}
