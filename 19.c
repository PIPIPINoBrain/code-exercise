#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int str_len(char* arr)
{
	char* start = arr;
	char* end = arr;
	if (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	char arr[] = "asdfgdgdf";
	int b = strlen(arr);
	printf("%d\n", b);
	return 0;
 }
