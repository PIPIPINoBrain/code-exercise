#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void move(char i, char j)
{
	printf("%c--->%c\n", i, j);
}

void hanoi(int n,char start,char mid,char end)
{
	if (n == 1)
		move(start, end);
	else
	{
		hanoi(n - 1, start, end, mid);
		move(start, end);
		hanoi(n - 1, mid, start, end);
	}
		
}


int main()
{
	int n=0;
	printf("输入盘子个数：");
	scanf("%d", &n);
	hanoi(n,'a','b','c');
	return 0;
}
