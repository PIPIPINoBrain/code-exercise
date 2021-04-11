#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	int n = 10;
	int trangles[10][10] = {0};
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		trangles[i][0] = 1;
		trangles[i][i] = 1;
		if (i >= 2)
		{
			for (j = 1; j <= i-1; j++)
			{
				trangles[i][j] = trangles[i - 1][j - 1] + trangles[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", trangles[i][j]);
		}
		printf("\n");
			
	}
	return 0;
}
