#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = "35.283672 3.e5 9.281772 7.e-5";
	float num1, num2, num3, num4;
	char *end;

	num1 = strtof(s1, &end);
	printf("%p\n", end);

	num2 = strtof(end, &end);
	printf("%p\n", end);
	
	num3 = strtof(end, &end);
	printf("%p\n", end);
	
	num4 = strtof(end, NULL);

	printf("%f\n", num1);
	printf("%e\n", num2);
	printf("%f\n", num3);
	printf("%e\n", num4);

	return 0;
}
