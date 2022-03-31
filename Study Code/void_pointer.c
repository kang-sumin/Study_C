#include <stdio.h>

/*
* void 포인터는 일반적인 포인터 변수와는 달리 가리키는 대상이 되는
* 데이터 타입을 명시하지 않는 포인터이다.
* 따라서 변수, 함수, 포인터 등 어떠한 값도 가리킬 수 있지만,
* 포인터 연산이나 메모리 참조와 같은 작업은 할 수 없다.
* 
* 즉, void 포인터는 주소값을 저장하는것 이외에는 아무것도 할 수 없는 포인터이다.
* 
*/


int main() {

	int num = 10;	//변수 선언
	void* ptr_num = &num;	//void 포인터 선언
	
	printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
	printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);

	//void 포인터는 사용할때마다 "명시적 타입 변환"을 하고 난 뒤에 사용해야 한다.
	*(int*)ptr_num = 20;
	printf("void 포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *(int*)ptr_num);

	return 0;
	}