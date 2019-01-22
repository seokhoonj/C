#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int size;

	FILE *fp = fopen("hello.txt", "r");

	fseek(fp, 0, SEEK_END);	// move pointer to end
	size = ftell(fp);		// current pointer position

	printf("%d\n", size);	// 13

	fclose(fp);

	return 0;
}
