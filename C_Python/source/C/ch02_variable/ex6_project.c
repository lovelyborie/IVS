#include <stdio.h>

int main(void) {
	char gender[3], name[100];
	int kor, math, eng;
	printf("�̸��� �Է��ϼ��� >>");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("������ �Է��ϼ��� >>");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("���� ���� ���� ������ �Է��ϼ��� :");
	scanf_s("%d %d %d", &kor, &eng, &math);
	printf("---�л�����---\n");
	printf("�̸� : %s\n", name);
	printf("���� : %s\n", gender);
	printf("���� = %d\n", kor);
	printf("���� = %d\n", eng);
	printf("���� = %d\n", math0);
	printf("��� = %lf\n", (k + m + e) / 3.0);
}