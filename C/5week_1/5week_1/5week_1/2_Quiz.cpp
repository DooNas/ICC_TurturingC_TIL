/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    char userwin[] = "유저가 이겼습니다!";
    char compwin[] = "컴퓨터가 이겼습니다!";
    char no[] = "비겼습니다.";
    char computer;
    char user;
    printf("유저(가위 : a /바위 : b /보 : c) : ");
    scanf("%c", &user);
    scanf("%*c");
    printf("컴퓨터(가위 : a /바위 : b /보 : c) : ");
    scanf("%c", &computer);
    if (user == 'a') {
        if (computer == 'a') puts(no);
        else if (computer == 'b') puts(compwin);
        else if (computer == 'c') puts(userwin);
    }
    else if (user == 'b') {
        if (computer == 'a') puts(userwin);
        else if (computer == 'b') puts(no);
        else if (computer == 'c') puts(compwin);
    }
    else if (user == 'c') {
        if (computer == 'a') puts(compwin);
        else if (computer == 'b') puts(userwin);
        else if (computer == 'c') puts(no);
    }
    return 0;
}
*/