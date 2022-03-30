#include <stdio.h>
/* <값에 의한 전달(call by value)>
* 값에 의한 전달 방법은 인수로 전달되는 변수가 가지고 있는 값을
* 함수 내의 매개변수에 복사하는 방식이다.
* 이렇게 복사된 값으로 초기화된 매개변수는 인수로 전달된 변수와는 완전히 별개의 변수가 된다.
* 따라서 함수 내에서의 매개변수 변경은 인수로 전달되는 변수에 아무런 영향을 미치지 않는다.
*/


//local()함수의 원형 선언
void local(int num);

int main() {

	int var = 10;
	printf("변수 var의 초깃값은 %d 입니다.\n", var);

	local(var);	//var은 인수이다.(var is argument)
	printf("local() 함수 호출 후 변수 var의 값은 %d 입니다.\n", var);
	return 0;
}

//num은 인수로 변수 var의 값을 전달받음
void local(int num) //num은 매개변수이다. (num is parameter)
{
	/*
	* 함수 내에서 매개변수 num의 값을 변경하더라도
	* 원래인수로 전달된 변수 var값은 절대 변경되지 않음
	*/
	num += 10;
}