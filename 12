#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<math.h>
#include "test.h"

int count(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while(n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n -= 1;
	}
	return c;
}

int count2(int n)
{
	if (n > 2)
		return count2(n - 1) + count2(n - 2);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n <= 2)
		printf("%d\n",1);
	if (n > 2)
	{
		printf("%d\n",count(n));
		printf("%d", count2(n));
	}
	
	return 0;
}
