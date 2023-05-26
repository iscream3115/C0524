#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int myStrlen(char str[]);

void myStrcpy(char str2[],char str[]);

int myStrcmp(char str[], char str2[]);

void myStrcat(char str[], char str2[]);

int main()
{
	char str[50] = { 0 };
	char str2[30] = { 0 };

	printf("원하는 문자열1 입력: ");

	// [^\n] : \n이 나오기 전까지 입력을 받겠다는 의미
	scanf("%[^\n]s", str);


	while (getchar() != '\n');

	printf("원하는 문자열2 입력: ");

	scanf("%[^\n]s", str2);

	printf("\n-----------------------\n");

	printf("문자열1의 길이: %d\n",myStrlen(str));

	printf("문자열 사전적 비교: %d\n\n",myStrcmp(str,str2));

	myStrcat(str, str2);

	printf("문자열 연결: %s\n", str);

	printf("\n***문자열 복사 전***\n");
	printf("문자열1 : %s\n", str);
	printf("문자열2 : %s\n", str2);

	myStrcpy(str2, str);

	printf("\n***문자열 복사 후***\n");
	printf("문자열1 : %s\n", str);
	printf("문자열2 : %s\n", str2);


	return 0;
}

int myStrlen(char str[])
{
	int count = 0;

	for (int i = 0;str[i] != '\0'; i++)
	{
		count++;
	}

	return count;
}

void myStrcpy(char str2[],char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}

}

int myStrcmp(char str[], char str2[])
{
	if (str[0] > str2[0]) return 1;
	else if (str[0] == str2[0]) return 0;
	else return -1;

}

void myStrcat(char str[], char str2[])
{
	int count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	for (int i = 0; str2[i] != '\0'; i++)
	{
		str[count] = str2[i];
		count++;
	}


}
