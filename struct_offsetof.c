#include <stdio.h>
#include <stddef.h>

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
