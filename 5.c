#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num = 0;
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0))
		{
			num++;
			printf("%d\n", i);
		}
	}
	printf("%d\n", num);
}
