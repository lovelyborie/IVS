#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// �񱳿����� : < <= > >= == , != , ...
// ���׿����� : ���� ? ������ ���϶� �� : ������ �����϶� ��
int main(void) {
    int n1 = 10 , n2=5;
    int result = n1>=n2;
    bool result2 = n1<=n2;
    printf("%d %s %d�� %d \n",n1,">=",n2,result);
    printf("%d %s %d�� %s \n",n1,">=",n2,result2 ? "��": "����");
}