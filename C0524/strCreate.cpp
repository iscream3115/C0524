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

	printf("���ϴ� ���ڿ�1 �Է�: ");

	// [^\n] : \n�� ������ ������ �Է��� �ްڴٴ� �ǹ�
	scanf("%[^\n]s", str);


	while (getchar() != '\n');

	printf("���ϴ� ���ڿ�2 �Է�: ");

	scanf("%[^\n]s", str2);

	printf("\n-----------------------\n");

	printf("���ڿ�1�� ����: %d\n",myStrlen(str));

	printf("���ڿ� ������ ��: %d\n\n",myStrcmp(str,str2));

	myStrcat(str, str2);

	printf("���ڿ� ����: %s\n", str);

	printf("\n***���ڿ� ���� ��***\n");
	printf("���ڿ�1 : %s\n", str);
	printf("���ڿ�2 : %s\n", str2);

	myStrcpy(str2, str);

	printf("\n***���ڿ� ���� ��***\n");
	printf("���ڿ�1 : %s\n", str);
	printf("���ڿ�2 : %s\n", str2);


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
