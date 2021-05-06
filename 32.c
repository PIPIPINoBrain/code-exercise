#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"SEQLIST.h"

//数组内加法[1,2,3],35得到返回数组[1,5,8]

int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
	int numret = k;
	int numsize = 0;
	int i = 0;
	int res = 0;
	while (numret)
	{
		numsize++;
		numret /= 10;//计算num的位数
	}
	int len = numSize > numsize ? numSize : numsize;
	int* arrret = (int*)malloc(sizeof(int) * (len + 1));//开辟最大长度两数字相加最多为最大数字+1
	if (arrret == NULL)
		perror("Fail to get space:");
	int kk = numSize - 1;
	while (len--)
	{
		int rets = 0;
		if (kk >= 0)
		{
			rets = num[kk];
		}
		arrret[i] = rets + k % 10 + res;//数字相加，大于10，进一
		k /= 10;
		if (arrret[i] > 9)
		{
			arrret[i] -= 10;
			res = 1;
		}
		else
			res = 0;
		kk--;
		i++;
	}
	if (res == 1)
	{
		arrret[i] = 1;
		i++;
	}
	int left = 0, right = i - 1;
	while (left < right)
	{
		int temp = arrret[left];
		arrret[left] = arrret[right];
		arrret[right] = temp;
		left++;
		right--;
	}
	*returnSize = i;
	return arrret;
}


int main()
{
	int arr[4] = { 1,2,3,4 };
	int num = 33;
	int i = 0;
	int k = 0;
	int* returnsize = &k;
	int* arrret = addToArrayForm(arr, 4, num, returnsize);
	for (i = 0; i < 4; i++)
		printf("%d ", arrret[i]);
	printf("\n%d\n", *returnsize);
	return 0;
}
