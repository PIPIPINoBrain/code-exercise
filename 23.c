#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int sum = 0;
	char ch;
	printf("输入一串数字：");
	while ((scanf("%d", &i)) == 1)
	{
		sum += i;
		while ((ch = getchar()) == ' ')
			;
		if (ch == '\n')
		{
			break;
		}
		ungetc(ch, stdin); //getchar中取出的数字放回输入流中，防止下次弄混
	}
	printf("%d\n", sum);
	fflush(stdin);
	system("pause");
	return 0;
}
