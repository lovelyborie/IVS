#include <stdio.h>

int main(void) {
    //이름 (빈문자불포함),주소(빈문자포함)를 입력받기
    /*
    scanf(%s,변수,입력받을 byte 수)
        white space가 오면 그 이전의 버퍼내용을 return.
        단,처음 나오는 white space는 무시

    gets(변수)
        '\n' 이전까지만 인식하고 그 뒤는 지움
    */

   //char *name ; =>입력받을 문자열이 저장될 공간이 확보되지 않음
   char name[128];
   char address[512];
   printf("이름 >>");
   scanf("%s",name,sizeof(name));
   printf("주소 >>");
   gets(address); //버퍼 지우기 
   gets(address);
   printf("입력한 이름 : %s \n",name);
   printf("입력한 주소 : %s\n",address);
}