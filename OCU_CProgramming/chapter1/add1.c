
/* 두 개의 숫자의 합을 계산하는 프로그램 */
//전처리기
#include <stdio.h>

//main 함수
int main(void) {

	//변수선언
	int x;		// 첫 번째 정수를 저장할 변수 x
	int y;		// 두 번째 정수를 저장할 변수 Y
	int sum;	// 두 정수의 합을 저장하는 변수

	//덧셈 연산
	x = 100;
	y = 200;
	sum = x + y;

	//출력
	printf("두수의 합 : %d", sum);

	return 0;
}
