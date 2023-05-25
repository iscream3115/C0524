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


	//함수에서 포인터 사용


	//1. int 변수를 초기화해준다
	int a2 = 2;


	//2. 포인터 매개변수를 받는 함수에 주소값을 넣어준다.
	pointerTest(&a2);

	printf("%d\n", a2);




	return 0;
}


//3. 외부 변수의 주소값을 받아 그것을 이용하여 값에 변화를 주는 함수
void pointerTest(int* a)
{
	
	*a += 2;
	
	//단 a++는 안먹힌다

}