#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "Hello";
	char s2[10] = "Hello";

	printf("%ld\n", strlen(s1));
	printf("%ld\n", strlen(s2));

	return 0;
}
