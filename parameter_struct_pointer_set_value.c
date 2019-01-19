#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void setPerson(struct Person *p)
{
	strcpy(p->name, "고길동");
	p->age = 40;
	strcpy(p->address, "서울시 서초구 반포동");
}

int main(void)
{
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시 용산구 한남동");

	setPerson(&p1);

    printf("이름: %s\n", p1.name);       // 이름: 고길동
    printf("나이: %d\n", p1.age);        // 나이: 40
    printf("주소: %s\n", p1.address);    // 주소: 서울시 서초구 반포동

    return 0;
}
