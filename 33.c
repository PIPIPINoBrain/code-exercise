#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void  rotate(int* nums, int numsize, int k)
//{
//	while (k--)
//	{
//		int i = nums[numsize - 1];
//		int j = 0;
//		for (j = numsize-1; j > 0; j--)
//		{
//			nums[j] = nums[j-1];
//		}
//		nums[0] = i;
//	}
//}

void ro(int* nums, int start, int end)
{
	while (start < end)
	{
		int ret = nums[start];
		nums[start] = nums[end];
		nums[end] = ret;
		start++;
		end--;
	}
}

void rotate(int* nums, int numsize, int k)
{
	ro(nums, 0, numsize - k - 1);
	ro(nums, numsize - k, numsize - 1);  //前5个逆,后3个逆 {5,4,3,2,1,8,7,6}，然后总体逆
	ro(nums, 0, numsize - 1);
}

int main()
{
	int nums[8] = { 1,2,3,4,5,6,7,8 };
	rotate(nums, 8, 3);
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}

