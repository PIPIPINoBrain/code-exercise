#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char arr[])
{
	char tem = arr[0];
	int n = strlen(arr);
	arr[0] = arr[n - 1];
	arr[n - 1] = '\0';
	if (n >= 2)
		reverse(arr + 1);
	arr[n - 1] = tem;
}
int main()
{
	char arr[] = "asdasdasd";
	int i = 0;
	reverse(arr);
	for (i = 0; i < strlen(arr); i++)
	{
		printf("%c", arr[i]);
	}
}
