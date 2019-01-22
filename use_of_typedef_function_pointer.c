#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

typedef int (*FP)(int, int); // int pointer?

struct Calc {
	FP fp;	// Calc 구조체의 멤버로 함수형 포인터 fp 설정
};

void executer(FP fp)
{
	printf("%d\n", fp(70, 80));	// 함수형 포인터를 인수로 하여 실행했을 때
}

int main(void)
{
	FP fp1;
	fp1 = add;
	printf("%d\n", fp1(10, 20));

	FP fp[10];
	fp[0] = add;
	printf("%d\n", fp[0](30, 40));

	struct Calc c;
	c.fp = add;
	printf("%d\n", c.fp(50, 60));

	executer(add);

	return 0;
}
