#include <stdio.h>




int main()
{
	char words[100];
	char words1[100];


	//공백을 만나면 문자열을 끝이라고 생각한다
	scanf_s("%s", words, sizeof(words));
	printf("%s\n", words);


	while(getchar() != '\n');

	gets(words1);
	printf("%s\n", words1);


	return 0;
}