#include <stdio.h>

int main() {
	int num = 10;	//��������
	int* ptr_num = &num;	//������ ����
	int** pptr_num = &ptr_num;	//���� ������ ���� (�������� ������ ����)

	/*
	* �ּ� ������(&) : �ش� ������ �ּҰ��� ��ȯ��
	* ���� ������(*) : �����Ͱ� ����Ű�� �ּҿ� ����� ���� ��ȯ��
	*/


	printf("���� num�� �����ϰ� �ִ� ���� %d�Դϴ�.\n", num);
	printf("���� num�� �ּҰ��� %d�Դϴ�.\n\n", &num);

	printf("������ ptr_num�� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", *ptr_num);
	printf("������ ptr_num�� ����Ű�� �ּҰ��� %d�Դϴ�.\n", ptr_num);
	printf("������ ptr_num�� �ּҰ��� %d�Դϴ�.\n\n", &ptr_num);

	printf("���� ������ pptr_num�� �ι����� ����Ű�� �ּҿ� ����� ���� %d�Դϴ�.\n", **pptr_num);
	printf("���� ������ pptr_num�� ����Ű�� �ּҰ��� %d�Դϴ�.\n", pptr_num);
	printf("���� ������ pptr_num�� �ѹ����� ����Ű�� �ּҿ� ����� �� %d�Դϴ�.\n", *pptr_num);
	printf("���� ������ pptr_num�� �ּҰ��� %d�Դϴ�.\n", &pptr_num);


	/* pptr_num -> ptr_num -> num�� ����Ű�� �ֱ� ������
	*	*pptr_num = ptr_num�� ����Ű�µ�
					ptr_num�� num�� ����Ű�� �־
					num�� �ּҰ��� �����ϰ� �ִ�.
		**pptr_num = num�� ����Ű�� �־ num�� ����� �� 100�� ����Ѵ�.
	*/

	return 0;
}