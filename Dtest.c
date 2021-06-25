#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"DLIST.h"

int main()
{
	DListData* phead = NULL;
	DListPushback(&phead,1);
	DListPushback(&phead, 2);
	DListPushback(&phead, 3);
	DListPushfront(&phead, 3);
	DListPopback(&phead);
	DListPopfront(&phead);
	DListShow(phead);
	return 0;
}
