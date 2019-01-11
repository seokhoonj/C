#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("char: %ld\n", sizeof(char));
	printf("int: %ld\n", sizeof(int));
	printf("float: %ld\n", sizeof(float));
	printf("double: %ld\n", sizeof(double));
	printf("long long: %ld\n", sizeof(long long));
	printf("void: %ld\n", sizeof(void));

	printf("char *: %ld\n", sizeof(char *));
	printf("int *: %ld\n", sizeof(int *));
	printf("float *: %ld\n", sizeof(float *));
	printf("double *: %ld\n", sizeof(double *));
	printf("long long *: %ld\n", sizeof(long long *));
	printf("void *: %ld\n", sizeof(void *));

	return 0;
}
