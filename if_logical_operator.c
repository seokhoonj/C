#include <stdio.h>

int main()
{
	int num1 = 1;
	int num2 = 0;

	if (num1 && num2)
		printf("참\n");
	else
		printf("거짓\n");

	if (num1 || num2)
		printf("참\n");
	else
		printf("거짓\n");

	if (!num1)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}
