#include <stdio.h>

struct PacketHeader {
	char flags;
	int seq;
};

int main()
{
	struct PacketHeader header;

	printf("%ld\n", sizeof(header.flags));
	printf("%ld\n", sizeof(header.seq));
	printf("%ld\n", sizeof(header));
	printf("%ld\n", sizeof(struct PacketHeader));

	return 0;
}
