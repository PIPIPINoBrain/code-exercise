#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int jump(int n)
{
	char n1[] = {'a'};
	char n2[] = { 'a','b' };
	if (n == 1)
	{
		return 1;
	}
		
	if (n == 2)
	{
		return 2;
	}
	else
	{

		return jump(n - 1) + jump(n - 2);
	}
}
void main()
{
	int n = 0;
	int value = 0;
	printf("输入台阶个数：");
	scanf("%d", &n);
	value = jump(n);
	printf("%d\n", value);
	return 0;
}

