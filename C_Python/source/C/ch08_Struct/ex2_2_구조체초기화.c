#include <stdio.h>
/*
����ü : ���� ������ �����͸� �ϳ��� ���� �ڷ�������
*/

struct student{ //����ü�� ����
    int num; //�й�(student ����ü ���)
    double grade; //����(student ����ü ���)
};

int main(void){
    int i;
    struct student s1 = {101,4.43};
    i = 1;
    // s1.num = 101;
    s1.grade = 2.49;
    printf("�й� = %d , ���� = %.2lf\n" , s1.num,s1.grade);
}