#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main(void) {
    //가위바위보를 goto를 활용해서 진행해 달라.
    int hum;
    int com;

    again:
    printf("사용자 가위바위보 입력(가위 1, 바위 2, 보 3) :");
    scanf_s("%d", &hum);
    printf("컴퓨터 가위바위보 입력(가위 1, 바위 2, 보 3) :");
    scanf_s("%d", &com);

    int sum = hum - com;
    if (sum == -2 || sum == 1) goto end;
    else if (sum == -1 || sum == 2) {
        puts("컴퓨터가 이겼습니다.");
        goto again;
    }
    else {
        puts("비겼습니다.");
        goto again;
    }
    

end:
    printf("유저가 이겼습니다.");
    return 0;
}