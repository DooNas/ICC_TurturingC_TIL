/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    char userwin[] = "������ �̰���ϴ�!";
    char compwin[] = "��ǻ�Ͱ� �̰���ϴ�!";
    char no[] = "�����ϴ�.";
    char computer;
    char user;
    printf("����(���� : a /���� : b /�� : c) : ");
    scanf("%c", &user);
    scanf("%*c");
    printf("��ǻ��(���� : a /���� : b /�� : c) : ");
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