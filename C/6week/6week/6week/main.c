#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main(void) {
	int x;
	printf("����� ǥ���� ���ΰ�? : ");
	scanf_s("%d", &x);

	int y = 1;
	again:
	if (y > 9) goto end;
	printf("%d X %d = %d\n", x, y, x * y);
	y++;
	goto again;

	end:
	return 0;
}