#include <stdio.h>

int main() {
	int num = 10;	//변수선언
	int* ptr_num = &num;	//포인터 선언
	int** pptr_num = &ptr_num;	//이중 포인터 선언 (포인터의 포인터 선언)

	/*
	* 주소 연산자(&) : 해당 변수의 주소값을 반환함
	* 참조 연산자(*) : 포인터가 가리키는 주소에 저장된 값을 반환함
	*/


	printf("변수 num가 저장하고 있는 값은 %d입니다.\n", num);
	printf("변수 num의 주소값은 %d입니다.\n\n", &num);

	printf("포인터 ptr_num가 가리키는 주소에 저장된 값은 %d입니다.\n", *ptr_num);
	printf("포인터 ptr_num가 가리키는 주소값은 %d입니다.\n", ptr_num);
	printf("포인터 ptr_num의 주소값은 %d입니다.\n\n", &ptr_num);

	printf("이중 포인터 pptr_num가 두번거쳐 가리키는 주소에 저장된 값은 %d입니다.\n", **pptr_num);
	printf("이중 포인터 pptr_num가 가리키는 주소값은 %d입니다.\n", pptr_num);
	printf("이중 포인터 pptr_num가 한번거쳐 가리키는 주소에 저장된 값 %d입니다.\n", *pptr_num);
	printf("이중 포인터 pptr_num의 주소값은 %d입니다.\n", &pptr_num);


	/* pptr_num -> ptr_num -> num을 가리키고 있기 때문에
	*	*pptr_num = ptr_num을 가리키는데
					ptr_num은 num을 가리키고 있어서
					num의 주소값을 저장하고 있다.
		**pptr_num = num을 가리키고 있어서 num에 저장된 값 100을 출력한다.
	*/

	return 0;
}