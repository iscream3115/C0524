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

	printf("배열의 이름 : %p\n", arr);
	printf("첫번째 요소: %p\n", &arr[0]);
	printf("두번째 요소 : %p\n", &arr[1]);
	printf("세번째 요소 : %p\n", &arr[2]);

	printf("%d %g\n", *arr, *arr2);

	*arr += 100;
	*arr2 += 120.4;

	printf("%d %g\n", arr[0], arr2[0]);

	//int* ptr = &arr[0];

	//ptr이 arr 배열의 시작 주소를 받았다. 그러므로 값을출력하면 arr과 같다.
	ptr = arr;

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);

}


void pointer_oper()
{
	int* ptr2 = 0x0010;
	double* ptr3 = 0x0010;

	//int형 포인터는 4바이트 차이
	printf("%p %p\n", ptr2 + 1, ptr2 + 2);

	//double형 포인터는 8바이트 차이
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

	//배열 형태의 문자열 이라 문자 바꾸기 가능
	char str[] = "String";
	str[0] = 'c';
	printf("%s\n", str);

	//상수 형태의 문자열이라 변경이 불가능,pstr은 단지 PtrString의 앞부분 P의 시작주소부분만 담고 있는 변수다.
	char* pstr = "PtrString";
	//pstr[0] = 'c';
	//printf("%s\n", str);

	char* str1 = "Hello";
	printf("%s\n", str1);

	str1 = "bye";
	printf("%s\n", str1);




}
