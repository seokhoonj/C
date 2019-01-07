#include <stdio.h>
#include <stddef.h>	// offsetof 매크로가 정의된 헤더 파일

#pragma pack(push, 1)
struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	printf("%ld\n", offsetof(struct PacketHeader, flags));
	printf("%ld\n", offsetof(struct PacketHeader, seq));

	return 0;
}
