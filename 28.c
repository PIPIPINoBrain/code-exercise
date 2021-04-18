#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int main()
{
	int n = 0, k = 0;
	int time[1000] = { 0 };
	int i = 0;
	int time_ = 0;
	scanf("%d%d", &n, &k);
	assert(1 <= n && n <= k && k <= 1000000);
	for (i = 0; i < n; i++)
	{
		int ret = 0;
		scanf("%d", &ret);
		time[i] = ret;
	}
	while (k)
	{
		time_++;
		for (i = 0; i < n; i++)
		{
			if (time_ % time[i] == 0)
			{
				printf("%d\n", i+1);
				k--;
			}
		}
	}
}

