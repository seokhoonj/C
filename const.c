#include <stdio.h>

int main()
{
	const int   con1 = 1;		// 상수는 선언과 동시에 초기화해야 함
	const float con2 = 0.1f;
	const char  con3 = 'a';

	printf("%d %f %c\n", con1, con2, con3);

	return 0;
}
