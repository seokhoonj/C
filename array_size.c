#include <stdio.h>

int main()
{
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	printf("%ld\n", sizeof(numArr));
	printf("%ld\n", sizeof(numArr) / sizeof(int));

	return 0;
}
