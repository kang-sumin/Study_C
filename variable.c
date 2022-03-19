#include <stdio.h>

int main() {
	//variable : 가변적인, 변하기 쉬운
	int a;
	a = 5;
	/* %d : 서식 지정자(format specifier), 문자 그대로 출력되지 않고 해당하는 변수의 값이 화면에 출력됨
	서식 지정자는 반드지 콤마(,)가 있고 그 뒤에 변수 이름 또는 상수가 있다.
	Tip : '상수(constant)'는 변하지 않고 항상 같은 값을 가지는 수를 뜻한다. 변수는 값을 계속 바꿀수 있지만 상수는 값이 변하지 않는다.
	*/
	printf("%d", a);

	return 0;
}