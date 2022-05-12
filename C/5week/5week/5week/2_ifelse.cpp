#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//int i;

	//scanf("%d", &i);

	//if (i < 10) {
	//	printf("10보다 작습니다.\n");
	//	if (i > 5) {
	//		printf("5보다 큽니다.\n");
	//	}
	//	else if(i == 1) {
	//		printf("i는 1입니다. 야호 \n");
	//	}
	//}
	//else {
	//	printf("10보다 큽니다.\n");
	//}

	//switch (i)
	//{
	//	case 0 : printf("0 입니다.\n");
	//		break;
	//	case 1: printf("1 입니다.\n");
	//		break;
	//	case 2: printf("2 입니다.\n");
	//		break;
	//	case 3: printf("3 입니다.\n");
	//		break;
	//	case 4: printf("4 입니다.\n");
	//		break;
	//	case 5: printf("5 입니다.\n");
	//		break;
	//	default:
	//		break;
	//}
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%d번째 신난다 \n", i);
	}
	printf("끝 %d \n", i);
	return 0;
}