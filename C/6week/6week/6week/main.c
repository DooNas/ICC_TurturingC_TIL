#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main(void) {
    //������������ goto�� Ȱ���ؼ� ������ �޶�.
    int hum;
    int com;

    again:
    printf("����� ���������� �Է�(���� 1, ���� 2, �� 3) :");
    scanf_s("%d", &hum);
    printf("��ǻ�� ���������� �Է�(���� 1, ���� 2, �� 3) :");
    scanf_s("%d", &com);

    int sum = hum - com;
    if (sum == -2 || sum == 1) goto end;
    else if (sum == -1 || sum == 2) {
        puts("��ǻ�Ͱ� �̰���ϴ�.");
        goto again;
    }
    else {
        puts("�����ϴ�.");
        goto again;
    }
    

end:
    printf("������ �̰���ϴ�.");
    return 0;
}