#include <stdio.h>

int main(void) {
    //�̸� (���ں�����),�ּ�(��������)�� �Է¹ޱ�
    /*
    scanf(%s,����,�Է¹��� byte ��)
        white space�� ���� �� ������ ���۳����� return.
        ��,ó�� ������ white space�� ����

    gets(����)
        '\n' ���������� �ν��ϰ� �� �ڴ� ����
    */

   //char *name ; =>�Է¹��� ���ڿ��� ����� ������ Ȯ������ ����
   char name[128];
   char address[512];
   printf("�̸� >>");
   scanf("%s",name,sizeof(name));
   printf("�ּ� >>");
   gets(address); //���� ����� 
   gets(address);
   printf("�Է��� �̸� : %s \n",name);
   printf("�Է��� �ּ� : %s\n",address);
}