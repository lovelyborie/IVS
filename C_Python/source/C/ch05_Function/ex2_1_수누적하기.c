#include <stdio.h>

int main(void) {
    int from = 1,to = 100;
    int tot = 0 ;
    for(int i=from ; i<=to ; i++){
        tot+=i;
    }
    printf("%d ���� %d ���� �������� %d�Դϴ�\n",from,to,tot);

    from = 10 ; to = 100;

    for(int i=from ; i<=to ; i++){
        tot+=i;
    }
    printf("%d ���� %d ���� �������� %d�Դϴ�\n",from,to,tot);
    
}