#include <stdio.h>


void pointerTest(int* a);

int main()
{

	//int* pnum = NULL;

	//pnum = &a;


	//*pnum = 16;

	//printf("%d\n", *pnum);
	//printf("%p\n", pnum);
	//printf("%p\n", &pnum);

	//printf("%p\n", &a);

	//printf("\n");


	//int num2 = 5;
	//pnum = &num2;

	//printf("%p\n", pnum);
	//printf("%d\n", *pnum);


	//�Լ����� ������ ���


	//1. int ������ �ʱ�ȭ���ش�
	int a2 = 2;


	//2. ������ �Ű������� �޴� �Լ��� �ּҰ��� �־��ش�.
	pointerTest(&a2);

	printf("%d\n", a2);




	return 0;
}


//3. �ܺ� ������ �ּҰ��� �޾� �װ��� �̿��Ͽ� ���� ��ȭ�� �ִ� �Լ�
void pointerTest(int* a)
{
	
	*a += 2;
	
	//�� a++�� �ȸ�����

}