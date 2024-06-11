#include <stdio.h>

struct student{
    int id ; //학번
    char name[20] ; //이름 char* name; =>scanf로 할당시 문제 발생
    double grade; //학점
};

void stPrint(struct student st); //함수 선언

int main(void) {
    //구조체 변수 선언과 초기화
    struct student sArr[3]  = {{101,"홍길동",4.43},
                               {102,"김길동",3.43},
                               {103,"신길동",4.21}};
    
    printf("학번\t이름\t학점\n");
    for(int idx = 0 ; idx<3 ; idx++){
        //printf("%d\t%s\t%.2lf\n",sArr[idx].id,sArr[idx].name,sArr[idx].grade);
        printf("%d\t%s\t%.2lf\n",(sArr+idx)->id,(sArr+idx)->name,(*(sArr+idx)).grade); // 우선순위 . > * 이니까 괄호 활용
        //stPrint(sArr[idx]);
    }
}

void stPrint(struct student st){
    printf("%d\t%s\t%.2lf\n",st.id,st.name,st.grade);
}