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
	if (n > 1)
		return n * count(n - 1);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d",count(n));
	return 0;
}
