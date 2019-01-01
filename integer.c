#include <stdio.h>

int main()
{
	char  num1 = -10;
	short num2 = 30000;
	int   num3 = -1234567890;
	long  num4 =  1234567890;
	long long num5 = -1234567890123456789;

	// char, short, int는 %d로 출력하고 long은 %ld, long long은 %lld로 출력
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}
