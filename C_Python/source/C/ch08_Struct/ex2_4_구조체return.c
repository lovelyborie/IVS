#include <stdio.h>
struct vision{
    double left; //왼쪽 눈 시력
    double right; //오른쪽 눈 시력
};

typedef struct vision Vision; //struct vision 을 Vision 타입으로

Vision exchange(Vision robot);

int main(void) {
    Vision robot;
    printf("좌 우 시력 >>");
    scanf("%lf %lf",&robot.left,&robot.right);
    printf("입력된 좌우 시력 : %lf\t %lf\n",robot.left,robot.right);
    robot = exchange(robot);
    printf("바뀐 좌우 시력 : %lf\t %lf\n",robot.left,robot.right);
}

Vision exchange(Vision robot){
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    return robot;
}