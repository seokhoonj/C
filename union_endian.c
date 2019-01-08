#include <stdio.h>

union Data {
	char c1;
	short num1;
	int num2;
};

int main()
{
	union Data d1;

	d1.num2 = 0x12345678; // 리틀 엔디언에서는 메모리에 저장될 때 78 56 34 12로 저장됨

	printf("0x%x\n", d1.num2);
	printf("0x%x\n", d1.num1);
	printf("0x%x\n", d1.c1);

	printf("%ld\n", sizeof(d1));

	return 0;
}
