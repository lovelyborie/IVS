#include <stdio.h>

struct student{
    int id ; //�й�
    char name[20] ; //�̸� char* name; =>scanf�� �Ҵ�� ���� �߻�
    double grade; //����
};

void stPrint(struct student st); //�Լ� ����

int main(void) {
    //����ü ���� ����� �ʱ�ȭ
    struct student sArr[3]  = {{101,"ȫ�浿",4.43},
                               {102,"��浿",3.43},
                               {103,"�ű浿",4.21}};
    
    printf("�й�\t�̸�\t����\n");
    for(int idx = 0 ; idx<3 ; idx++){
        //printf("%d\t%s\t%.2lf\n",sArr[idx].id,sArr[idx].name,sArr[idx].grade);
        printf("%d\t%s\t%.2lf\n",(sArr+idx)->id,(sArr+idx)->name,(*(sArr+idx)).grade); // �켱���� . > * �̴ϱ� ��ȣ Ȱ��
        //stPrint(sArr[idx]);
    }
}

void stPrint(struct student st){
    printf("%d\t%s\t%.2lf\n",st.id,st.name,st.grade);
}