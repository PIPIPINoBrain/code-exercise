#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,10,11,12,13 ,14};
	int end = sizeof(arr) / sizeof(arr[1])-1;
	int start = 0;
	int n = 0;
	while (start <=end)
	{
		n = (start + end) / 2;
		if (arr[n] > 9)
			end = n-1;
		else if (arr[n] < 9)
			start = n+1;
		else
		{
			printf("小标为%d", n);
			break;
		}
		
	}
	if (start > end)
			printf("找不到");
	return 0;
}
