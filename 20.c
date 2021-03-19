#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char* arr, int n)
{
	int start = 0;
	int end = n - 1;
	while (start < end)
	{
		int tem = *(arr+start);
		*(arr + start) = *(arr + end);
		*(arr + end) = tem;
		start++;
		end--;
	}
}
int main()
{
	char arr[] = "asdfgfg";
	int i = 0;
	int n = sizeof(arr) / sizeof(arr[0])-1;
	reverse(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
}
