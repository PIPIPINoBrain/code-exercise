#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>

int random()
{
	int random_num = 0;
	srand((unsigned int)time(NULL));
	random_num = rand()%100+1;
	return random_num;
}

void game(random_num)
{
	int i = 0;
	int num = 0;
	for (i = 0; i < 10; i++)
	{
		printf("请输入数字：");
		scanf("%d", &num);
		if (num > random_num)
			printf("猜大了\n");
		else if (num < random_num)
			printf("猜小了\n");
		else
		{
			printf("猜对了\n");
			system("shutdown -a");
			break;
		}

	}
}
int main()
{
	int random_num = 0;
	char input_start[100] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("电脑即将在60秒内关机，猜对数字(1-100)取消关机\n输入'开始'开始游戏：");
	scanf("%s", input_start);
	random_num = random();
	if (strcmp(input_start, "开始") != 0)
		goto again;
	else
	{
		game(random_num);
	}
	return 0;
}
