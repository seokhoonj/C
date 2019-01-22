#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("hello.txt", "w");

	fprintf(fp, "%s %d\n", "Hello", 100);

	fclose(fp);

	return 0;
}
