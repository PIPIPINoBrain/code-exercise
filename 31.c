#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"SEQLIST.h"
//将数组中额定删除其中一个数，返回剩下的长度
int remove1(int* list, int numsize, int val)
{
	int src = 0, dst = 0;//定义两个变量，一个为往后走的序号，一个为不是那个数字往后走的数字
	while(src < numsize)
	{
		if (list[src] != val)
		{
			list[dst] = list[src];
			dst++;
			src++;
		}
		else
		{
			src++;
		}
	}
	return dst;
}
int main()
{
	int list[10] = { 1,2,3,3,5,3,3,5,8,6 };
	int i = 0,dst=0;
	dst = remove1(list, 10, 3);
	for (i = 0; i < dst; i++)
	{
		printf("%d ", list[i]);
	}
	return 0;
}
