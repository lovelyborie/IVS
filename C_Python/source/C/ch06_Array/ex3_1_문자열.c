#include <stdio.h>
int main(void) {
    char* name = "jenny";
    for(int idx=0 ; idx<6 ; idx++){
        printf("index : %d : 글자 : %c\n",idx,name[idx]);
    }
}