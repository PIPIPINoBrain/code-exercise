#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_find(int array[4][4], int num, int i, int j)
{
	if (num > array[i-4][j-1])
	{
		i++;
		if (i > 7)
		{
			return 0;
		}
		is_find(array, num,i,j);
		
	}
	else if (num < array[i - 4][j - 1])
	{
		j--;
		if (j < 1)
		{
			return 0;
		}
		is_find(array, num, i, j);

	}
	else if (num == array[i - 4][j - 1])
	{
		printf("%d,%d\n", i - 4,j - 1);
		return 1;
	}
}

int main()
{
	int array[4][4] = { {1,2,3,4},
						{2,3,4,5},
						{3,4,5,6},
						{4,5,6,7} };
	int num = 0;
	scanf("%d", &num);
	int ret = is_find(array, num, 4, 4);
	if (ret == 0)
	{
		printf("未找到");
	}
	else 
	{
		printf("找到了");
	}

	return 0;
}
