#include <stdio.h>
#include <stdarg.h> // va_list, va_start, va_arg, va_end

// va_list:  가변 인자 목록, 가변 인자의 메모리 주소를 저장하는 포인터입니다.
// va_start: 가변 인자를 가져올 수 있도록 포인터를 설정합니다.
// va_arg:   가변 인자 포인터에서 특정 자료형 크기만큼 값을 가져옵니다. 
// va_end:   가변 인자 처리가 끝났을 때 포인터를 NULL로 초기화합니다.

void printNumbers(int args, ...)
{
	va_list ap;

	va_start(ap, args);
	for (int i = 0; i < args; i++)
	{
		int num = va_arg(ap, int);

		printf("%d ", num);
	}
	va_end(ap);

	printf("\n");
}

int main(void)
{
	printNumbers(1, 10);
	printNumbers(2, 10, 20);
	printNumbers(3, 10, 20, 30);
	printNumbers(4, 10, 20, 30, 40);

	return 0;
}
