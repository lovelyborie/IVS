#include <stdio.h>
/*������, ������, ������, ���밥, �������� Ű�� �Է¹޾� 
    ��»��� : ��� : 170.50
              ���� : ������ 190
              �ִ� : ������ 120
*/

int main() {
    char *names[] = {"������","������","������","���밥","������"};
    int arrHeight[5] ; // ģ���� Ű �Է� �迭
    int totHeight = 0 ; // ��������
    int idxMin,minHeight=999 ; //�ִܽ� ����
    int idxMax,maxHeight=-1 ; //����� ����
    for(int idx = 0 ; idx<5 ; idx++){
        printf("%s�� Ű�� ? ",names[idx]);
        scanf("%d",&arrHeight[idx]);
        /*if(arrHeight[idx]<minHeight || arrHeight[idx]>maxHeight){
            printf("Ű�� �߸� �Է��Ͻ� �� �����ϴ�.�ٽ� �Է����ּ���.\n");
            idx--;
            continue;
        }*/
        totHeight += arrHeight[idx]; //����
    }
    printf("\n- ���Ű : %.2lf\n",totHeight/5.0);
    for(int idx = 0 ; idx<5 ; idx++){
        if(arrHeight[idx]>maxHeight){
            maxHeight = arrHeight[idx];
            idxMax = idx;
        }
        if(arrHeight[idx] < minHeight) {
            minHeight = arrHeight[idx];
            idxMin = idx;
        }
    }
    printf("- ����� :  %s\t%d\n",names[idxMax],maxHeight);
    printf("- �ִܽ� :  %s\t%d\n\n",names[idxMin],minHeight);
}