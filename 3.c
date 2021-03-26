#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

int main()
{
	char end[] = "hello world??";
	char start[] = "#############";
	int a = strlen(end) - 1;
	int b = sizeof(start) / sizeof(start[0]) - 2;
	printf("%d,%d\n", a, b);
	int right = 0;
	int left = a;
	printf("%s\n", start);
	while (right <= left)
	{
		system("cls");
		start[right] = end[right];
		start[left] = end[left];
		printf("%s\n", start);
		Sleep(1000);
		right++;
		left--;
	}
}
