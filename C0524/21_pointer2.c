#include <stdio.h>

void pointer_arr();
void pointer_oper();
void string_pointer();

int main()
{
	
	pointer_arr();
	pointer_oper();
	string_pointer();

	return 0;
}

void pointer_arr()
{
	int a, b;
	int* ptr = &a;
	ptr = &b;


	int arr[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("�迭�� �̸� : %p\n", arr);
	printf("ù��° ���: %p\n", &arr[0]);
	printf("�ι�° ��� : %p\n", &arr[1]);
	printf("����° ��� : %p\n", &arr[2]);

	printf("%d %g\n", *arr, *arr2);

	*arr += 100;
	*arr2 += 120.4;

	printf("%d %g\n", arr[0], arr2[0]);

	//int* ptr = &arr[0];

	//ptr�� arr �迭�� ���� �ּҸ� �޾Ҵ�. �׷��Ƿ� ��������ϸ� arr�� ����.
	ptr = arr;

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);

}


void pointer_oper()
{
	int* ptr2 = 0x0010;
	double* ptr3 = 0x0010;

	//int�� �����ʹ� 4����Ʈ ����
	printf("%p %p\n", ptr2 + 1, ptr2 + 2);

	//double�� �����ʹ� 8����Ʈ ����
	printf("%p %p\n", ptr3 + 1, ptr3 + 2);

	printf("%p %p\n", ptr2, ptr3);
	ptr2++;
	ptr3++;
	printf("%p %p\n", ptr2, ptr3);


	printf("\n");

	int arr4[3] = { 11,22,33 };
	int* ptr4 = arr4;
	printf("%d %d %d\n", *ptr4, *(ptr4 + 1), *(ptr4 + 2));


	printf("%d\n", *ptr4);
	ptr4++;
	printf("%d\n", *ptr4);
	ptr4++;
	printf("%d\n", *ptr4);
	ptr4--;
	printf("%d\n", *ptr4);
	ptr4--;
	printf("%d\n", *ptr4);




}

void string_pointer()
{

	//�迭 ������ ���ڿ� �̶� ���� �ٲٱ� ����
	char str[] = "String";
	str[0] = 'c';
	printf("%s\n", str);

	//��� ������ ���ڿ��̶� ������ �Ұ���,pstr�� ���� PtrString�� �պκ� P�� �����ּҺκи� ��� �ִ� ������.
	char* pstr = "PtrString";
	//pstr[0] = 'c';
	//printf("%s\n", str);

	char* str1 = "Hello";
	printf("%s\n", str1);

	str1 = "bye";
	printf("%s\n", str1);




}
