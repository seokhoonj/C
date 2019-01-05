#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "world";
	char *s2 = "Hello";

	strcat(s2, s1);

	printf("%s\n", s1);

	return 0;
}
