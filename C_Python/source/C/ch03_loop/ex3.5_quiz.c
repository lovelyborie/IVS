#include <stdio.h>

int main(void) {
    int input;
    printf("���ϴ� ���� �Է��Ͻÿ� :");
    scanf("%d",&input);
    for(int i=1 ; i<=9 ; i++){
        printf("%d x %d = %d\n",input,i,input*i);
    }
}