#include <stdio.h>
int* returnArray(int* ptr); //����

int main(void) {
    int arr[] = {10,20,30};
    int* afterArr = returnArray(arr);
    printf("������ : ");
    for(int idx=0 ; idx<3 ; idx++){
        printf("arr[%d] = %d\t",idx,arr[idx]);
    }
    printf("\n������ : ");
    for(int idx=0 ; idx<3 ; idx++){
        //printf("afterArr[%d] = %d\t",idx,afterArr[idx]);
        printf("afterArr[%d] = %d\t",idx,*(afterArr+idx));
    }
}
int* returnArray(int* ptr){
    //*ptr = 99 ; //arr[0]�� �ٲٴ°� *(ptr+1) = 99  ==  ptr[1] = 99  �� 20=>99 //arr��ü�� �ٲ��
    static int resultArr[3] ; //�׳� int�� �Ѵٸ� return�� ������ û�� ��,�ּҰ��� ���ܳ��� =>static���� û�ҹ���
    for(int idx=0 ; idx<3 ; idx++){
        resultArr[idx] = ptr[idx];  //�������� (����ü�� �賦)  cf)�������� => �ּҸ�
    }
    resultArr[1] = 99;
    return resultArr; //�迭���� �����ͺ���
}