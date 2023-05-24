#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

	int count = 10;
	int strike = 0, ball = 0, strikeNum = 0;
	int baseNum[3] = { 0 };
	int playerNum[3] = { 0 };

	srand((unsigned int)time(NULL));


	printf("---------------------------\n");
	printf("숫자 야구 게임 시작\n!");
	printf("---------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		baseNum[i] = rand() % 10 + 1;

		for (int j = 0; j < 3; j++)
		{
			if (i != j && baseNum[i] == baseNum[j])
			{
				i--;
				continue;
			}
		}
	}

	//printf("debug - baseNum => %d %d %d\n", baseNum[0], baseNum[1], baseNum[2]);

	do
	{

		printf("남은 기회 %d번\n",count);

		printf("숫자를 입력하세요.(3개)\n");

		for (int i = 0; i < 3; i++)
		{
			printf(">");
			scanf_s("%d",&playerNum[i]);
		}

		for (int i = 0; i < 3; i++)
		{
			if (playerNum[i] == baseNum[i]) strike++;

			for (int j = 0; j < 3; j++)
			{
				if (playerNum[i] == baseNum[j] && i != j) ball++;
			}
			
		}

		if (strike == 3)
		{
			printf("3 Strike! 정답입니다.\n ");
			return 0;
		}
		else
		{
			printf(" %d Strike! %d Ball!\n\n", strike, ball);
			count--;
		}
		
		strike = 0;
		ball = 0;

	} while (0 < count);

	printf("졌습니다. 숫자는 %d %d %d였습니다.\n",baseNum[0], baseNum[1], baseNum[2]);

	return 0;
}