#include <stdio.h>
struct vision{
    double left; //���� �� �÷�
    double right; //������ �� �÷�
};

typedef struct vision Vision; //struct vision �� Vision Ÿ������

Vision exchange(Vision robot);

int main(void) {
    Vision robot;
    printf("�� �� �÷� >>");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("�Էµ� �¿� �÷� : %lf\t %lf\n",robot.left,robot.right);
    robot = exchange(robot);
    printf("�ٲ� �¿� �÷� : %lf\t %lf\n",robot.left,robot.right);
}

Vision exchange(Vision robot){
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    return robot;
}