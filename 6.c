#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	double num = 1.00;
	int i = 0;
	double answer = 0.0;
	int flag = 1;
	for (i = 1; i < 100; i++)
	{
		answer += flag*num / i;
		flag = flag;
	}
	printf("%.2f\n", answer);
	return 0;
}

