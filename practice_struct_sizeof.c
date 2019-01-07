#include <stdio.h>

struct CompressHeader {
	char flags;
	int version;
};

int main()
{
	struct CompressHeader header;

	printf("%ld\n", sizeof(struct CompressHeader));

	return 0;
}
