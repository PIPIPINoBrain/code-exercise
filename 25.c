#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define p 3
#define s(a) p*a*a
int main(void)
{
	int  q = s(3 + 5);
	printf("%d\n", q);
	return 0;
}
