#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main(void) {
	int x;
	printf("몇단을 표현할 것인가? : ");
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