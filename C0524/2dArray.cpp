#include <stdio.h>


int arr[2][3] = { {1,2,3}, {4,5,6} };
int arr2[2][3] = { 1,2,3 };

//���� �� �� �ִٸ� ���� ������ �� �ִ�. (�ٸ� ���� ���� �Ұ���)
int arr3[][3] = { 1,2,3 };

//���� �ȵ� �κ��� ���� 0
int arr4[][3] = { {1,2},{3,4,5},{6} };

void printArr();

void board();

int main()
{
	//int arr[2][3] = { 1,2,3,4,5,6 };
	//1 2 3
	//4 5 6

	printArr();

	int arr8[4][2] = { 0 };

	printf("�迭 ��ü ����Ʈ : %d \n", sizeof(arr8));
	printf("�迭 �� ����Ʈ : %d \n", sizeof(arr8[0]));

	printf("�迭 ���� ���� : %d \n", sizeof(arr8) / sizeof(int));
	printf("�迭 �� ���� : %d \n", sizeof(arr8) / sizeof(arr8[0]));
	printf("�迭 �� ���� : %d \n", sizeof(arr8[0]) / sizeof(int));

	board();


	return 0;
}

/*
	�ʱ�


*/

void printArr()
{
	printf("*** arr ***\n");

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	printf("*** arr2 ***\n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("*** arr3 ***\n");
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("*** arr4 ***\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr4[i][j]);
		}
		printf("\n");
	}
	printf("\n");




}

void board()
{
	int board[5][5] = { 0 };

	int num = 0;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			board[i][j] = j * 5 + i;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", board[i][j]);
		}

		printf("\n");
	}


}