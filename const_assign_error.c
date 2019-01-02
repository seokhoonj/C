#include <stdio.h>

int main()
{
	const int con1 = 1;

	con1 = 2;	// error

	printf("%d\n", con1);

	return 0;
}
