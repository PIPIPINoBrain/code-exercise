#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}
