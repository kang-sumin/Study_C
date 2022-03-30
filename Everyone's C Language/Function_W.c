#include <stdio.h>

func10(int x); //함수 선언, 출력자료형이 없는 함수임

int main() {
	
	//변수 선언
	int a = 1, b = 3, c = 5;

	//함수 호출
	func10(a);
	func10(b);
	func10(c);

	return 0;
}

//함수 구현(함수 몸체)
func10(int x) {
	x = x * 10;
	printf("10배가 된 값은 %d입니다.\n", x);
}
