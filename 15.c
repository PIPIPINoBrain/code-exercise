#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maopao(int arr[],int n)
{
	int i = 0;
	for (i = 0; i < n-1; i++)
	{
		int j = 0;
		int flag = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			
			if (arr[j] < arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 1;
			}
			 
		}
		if (flag == 0)
			break;
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,3,4,2,1,0 };
	int i = 0;
	int n = sizeof(arr)/sizeof(arr[1]);
	maopao(arr,n);
	for (i = 0; i < n; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

