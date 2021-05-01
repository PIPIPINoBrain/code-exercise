#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//给一个数组，非顺序，从0-N缺了一个，找出来
int findanswer(int* num, int numsize)
{
	int x = 0, i = 0;
	for (i = 0; i < numsize; i++)
	{
		x ^= num[i];//0异或任何数为0
	}
	for (i = 0; i < numsize; i++)
	{
		x ^= i;//两个相同的数异或为0
	}
	return x;
}

int main()
{
	int num[10] = { 0,1,2,3,4,5,6,7,9 };
	int numsize = sizeof(num) / sizeof(num[0]);
	int x = findanswer(num, numsize);
	printf("%d\n", x);
	return 0;

}
