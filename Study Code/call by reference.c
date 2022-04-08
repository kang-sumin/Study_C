#include <stdio.h>

/*
* call by reference는 C++에만 있는 문법이고,
* call by address라고 봐야함
*
* 참조에 의한 전달 방법은 인수로 변수의 값을 전달하는것이 아닌,
* 해당 변수의 주소값을 전달한다.
* 즉, 함수의 매개변수에 인수로 전달된 변수의 원래 주소값을 저장하는 것이다.
* 이 방식을 사용하면 인수로 전달된 변수의 값을 함수내에서 변경 가능하다.
*/

//local()함수의 원형 선언
void local(int num);

int main() {

	int var = 10;
	printf("변수 var의 초깃값은 %d 입니다.\n", var);

	local(&var);	//&var은 인수이다.(&var is argument)
	printf("local() 함수 호출 후 변수 var의 값은 %d 입니다.\n", var);
	return 0;
}

//*num은 인수로 변수 var의 주소값을 전달받음
void local(int* num) //*num은 매개변수이다. (*num is parameter)
{
	/*
	* 매개변수 *num의 값을 변경하면
	* 원래 인수인 변수 var의 값도 같이 변경됨
	*/
	*num += 10;
}
