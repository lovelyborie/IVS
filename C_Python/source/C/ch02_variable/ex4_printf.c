#include <stdio.h>
/* ���������� : %d,%f,%.3lf, %c(����1��),%s(����0�� �̻�)
*/
int main(void) {
	int num1 = 10; int num2 = 11;
	printf("�μ��� �� = %d\n", num1 + num2);
	//������(4byte)�� ������(4byte) ��Ģ���� ����� ������(4byte)
	printf("�μ��� ��� = %lf\n", (num1 + num2) / 2.0); //2�� 2.0������
}