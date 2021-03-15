#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a = 3, b = 5;
	int i = 3, j = 5;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);
	i = i ^ j;
	j = i ^ j;
	i = i ^ j;
	printf("%d,%d", a, b);
	return 0;
}
