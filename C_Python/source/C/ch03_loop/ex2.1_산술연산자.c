#include <stdio.h>
// ��������� : + - / * %
int main(void) {
    int n1=33,n2=10;
    printf("%d %c %d = %d\n",n1,'/',n2,n1/n2);
    //����ȯ ����� : (double)n1 
    // ����������ȯ int i = 3.2;
    printf("%d %c %d = %.3lf\n",n1,'/',n2,(double)n1/n2);
    printf("%d %c %d = %d\n",n1,'%',n2,n1%n2);
    //������ ������ : �׷��� ������
    if(n1%n2 == 0 ) {
        printf("n1�� ¦��\n");
    }
    else{
        printf("n1�� Ȧ��\n");
    }
}