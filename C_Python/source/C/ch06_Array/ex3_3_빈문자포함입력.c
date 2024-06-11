#include <stdio.h>
//주소(빈문자포함),이름(빈문자 포함x)

int main(void) {
    char name[128];
    char address[512];
    printf("address:");
    gets(address);
    printf("name:");
    scanf("%s",name,sizeof(name));
    printf("name : %s\n",name);
    printf("address : %s\n",address);
}