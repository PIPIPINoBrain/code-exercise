#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	return x + y;
}

int mul(int x, int y)
{
	return x * y;
}

int divl(int x, int y)
{
	return x / y;
}

int sub(int x, int y)
{
	return x - y;
}
//普通函数
//int main()
//{
//	int i = 1;
//	while (i)
//	{
//		int x = 0, y = 0;
//		scanf("%d%d", &x, &y);
//		scanf("%d", &i);
//		switch (i)
//		{
//		case(0):
//			printf("exit\n");
//			break;
//		case(1):
//			printf("%d\n", add(x, y));
//			break;
//		case(2):
//			printf("%d\n", divl(x, y));
//			break;
//		case(3):
//			printf("%d\n", sub(x, y));
//			break;
//		case(4):
//			printf("%d\n", mul(x, y));
//			break;
//		default:
//			printf("reinput");
//			break;
//		}
//	}
//	
//	return 0;
//}

//函数指针数组
//int main()
//{
//	int (*p[5])(int, int) = { 0,add,mul,divl,sub };
//	int i = 1;
//	while (i)
//	{
//		int x = 0,y = 0;
//		scanf("%d", &i);
//		scanf("%d%d", &x, &y);
//		printf("%d\n", p[i](x, y));
//	}
//	return 0;
//}

//回调函数

void calc(int (*p)(int,int))
{
	int x = 0, y = 0;
	scanf("%d%d", &x, &y);
	printf("%d\n", p(x, y));
}

int main()
{
	int i = 1;
	while (i)
	{
		scanf("%d", &i);
		int input = 0;
		switch (i)
		{
		case(1):
			calc(mul);
			break;
		case(2):
			calc(add);
			break;
		case(3):
			calc(divl);
			break;
		case(4):
			calc(sub);
			break;
		case(0):
			printf("exit\n");
			break;
		default:
			printf("reinput");
		}
	}
	
	return 0;
}
