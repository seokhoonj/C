#include <stdio.h>

/* 공용체 */
union Box {
	short candy;
	float snack;
	char doll[8];
};

/* 열거형 */
enum BOX_TYPE {
	BOX_PAPER = 0,
	BOX_WOOD,
	BOX_PLASTIC
};

/* 함수 */
union Box getBox()
{
	union Box b;

	b.candy = 10;

	return b;
}

/* 함수 */
enum BOX_TYPE getBoxType()
{
	return BOX_WOOD;
}

int main()
{
	union Box box;
	enum BOX_TYPE boxType;

	box = getBox();
	boxType = getBoxType();

	printf("%d\n", box.candy);
	printf("%d\n", boxType);

	return 0;
}
