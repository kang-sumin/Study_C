#include <stdio.h>

func10(int x); //�Լ� ����, ����ڷ����� ���� �Լ���

int main() {

	int a = 1, b = 3, c = 5;

	//�Լ� ȣ��
	func10(a);
	func10(b);
	func10(c);

	return 0;
}

//�Լ� ����(�Լ� ��ü)
func10(int x) {
	x = x * 10;
	printf("10�谡 �� ���� %d�Դϴ�.\n", x);
}