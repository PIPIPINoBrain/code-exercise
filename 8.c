#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("####猜数字游戏，最多可猜十次####\n");
	printf("######请输入按键号！！！！######\n");
	printf("#########1:开始; 0:结束#########\n");
	printf("输入：");
}
	
void game(int random_num)
{
	int n = 0;
	printf("游戏开始，请猜一个数字:");
	for (n = 0; n < 10; n++)
	{
		int num_ = 0;
		scanf("%d", &num_);
		if (num_ < random_num)
			printf("猜小了\n");
		else if (num_ > random_num)
			printf("猜大了\n");
		else
		{
			printf("对了\n");
			break;
		}
			
	}
	printf("这吧结束\n");
	
}
int main()
{
	int time_ = 0;
	int random_num = 0;
	int num = 0;
	time_ = rand((unsigned int)time(NULL));
	random_num = rand(time_)%100+1;
	do
	{
		menu();
		scanf("%d", &num);
		switch (num) 
		{
		case(1):
			game(random_num);
		case(0):
		{
			printf("结束游戏\n");
			break;
		}	
		default:
			printf("错误数字\n");
		}
	} while (num);
	return 0;
}
