#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>
#include<math.h>
#include "test.h"

int count(char* str)
{
	if (*str != '\0')
		return 1 + count(str+1);
	else
		return 0;
}
int main()
{
	char str[] = "asdfg";
	int a =count(str);
	printf("%d\n", a);
	return 0;
}
