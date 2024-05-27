#include <stdio.h>

int main(void) {
	char gender[3], name[100];
	int kor, math, eng;
	printf("이름을 입력하세요 >>");
	scanf_s("%s", name, (unsigned)sizeof(name));
	printf("성별을 입력하세요 >>");
	scanf_s("%s", gender, (unsigned)sizeof(gender));
	printf("국어 영어 수학 점수를 입력하세요 :");
	scanf_s("%d %d %d", &kor, &eng, &math);
	printf("---학생정보---\n");
	printf("이름 : %s\n", name);
	printf("성별 : %s\n", gender);
	printf("국어 = %d\n", kor);
	printf("영어 = %d\n", eng);
	printf("수학 = %d\n", math0);
	printf("평균 = %lf\n", (k + m + e) / 3.0);
}