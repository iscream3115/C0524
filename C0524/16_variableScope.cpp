#include <stdio.h>

int global;

char var1 = 'G';

void localCount();
void staticCount();

int main()
{
	printf("�ʱ�ȭ���� ���� global : %d\n", global);

	printf("main()���� var1 : %c\n", var1);

	{
		char var1 = 'K';
		printf("{}���� var1 : %c\n", var1);
	}

	printf("main()���� var1 : %c\n", var1);


	for (int i = 0; i < 5; i++)
	{
		localCount();
		staticCount();
	}


	return 0;
}

void localCount()
{
	int count = 1;

	printf("local count : %d\n", count);
	count++;

}

void staticCount()
{
	static int count = 1;

	printf("static count : %d\n", count);
	count++;

}