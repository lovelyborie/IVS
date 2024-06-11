#include <stdio.h>
// Call by value vs Call by reference
void sum(int from,int to, int* tot); //tot�� int���� �ƴ϶� tot�� ����� �ּҷ� ���� int���� �ִ�.

int main(void) {
    int a=1 , b=10 ,tot ; //int* tot; //a�� 1�� ����ְ� b���� 10�� ����ְ� tot���� �ּҰ� �����ִ�.
    sum(a,b,&tot);
    printf("%d���� %d���� �������� %d\n",a,b,tot);
    a = 10 ; b= 100;
    sum(a,b,&tot);
    printf("%d���� %d������ �������� %d\n",a,b,tot);
}

void sum(int from,int to,int* tot){
    *tot = 0 ; //tot�� �����ִ� �ּҰ��� 0�� �־��
    for(int i= from ; i<=to ; i++){
        *tot += i;
    }
}