#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void string();

int myStrlen(char string[]);

int main()
{
	string();

	char str[100] = "hello C language";

	printf("strlen : %d\n", strlen(str));

	char str1[20];

	printf("strcpy : %s\n", strcpy(str1, str));

	str[0] = 'z';

	//strcmp: �� ���ڿ��� ������ �� ���������� �տ������� -1 �� �ڿ� ������ 1 ������ 0
	printf("strcmp : %d\n", strcmp(str, str1));

	//�ι��ڸ� �����ϰ� �̾���δ�.
	printf("strcat : %s\n", strcat(str, str1));


	return 0;
}


void string()
{
	char hello[] = { 'h','e','l','l','o' };

	for (int i = 0; i < 5; i++) printf("%c", hello[i]);

	printf("\n");

	printf("%s\n\n", hello);

	char var = '\0';
	char var2 = 0;
	char var3 = NULL;

	char notNull = '0';


	printf("%d %d %d\n", var, var2, var3);
	printf("%d\n", notNull);

}

int myStrlen(char str[])
{
	int count = 0;

	while (str[count] != '\0') count;

	return count;

}