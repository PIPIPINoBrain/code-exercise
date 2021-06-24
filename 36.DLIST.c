#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"DLIST.h"

DListData* BuyListNode(datatype x)
{
	DListData* newnode = (DListData*)malloc(sizeof(DListData));
	if (newnode == NULL)
	{
		printf("fail to create newnode!");
		exit(-1);
	}
	newnode->data = x;
	newnode->head = NULL;
	newnode->next = NULL;
	return newnode;
}

void DListPushback(DListData** pphead, datatype x)
{
	DListData* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
		
	else
	{
		DListData* ret = *pphead;
		while (ret->next != NULL)
		{
			ret = ret->next;
		}

		ret->next = newnode;
		newnode->head = ret;
	}
}

void DListPushfront(DListData** pphead, datatype x)
{
	DListData* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		DListData* ret = *pphead;
		ret->head = newnode;
		*pphead = newnode;
		(*pphead)->next = ret;
	}
}

void DListPopback(DListData** pphead)
{
	if (*pphead == NULL)
		printf("Nothing to pop!");
	else if ((*pphead)->next = NULL)
		printf("NULL");
	else
	{
		DListData* ret = *pphead;
		while (ret->next->next != NULL)
		{
			ret = ret->next;
		}

	}
}

void DListShow(DListData* phead)
{
	DListData* ret = phead;
	if (phead == NULL)
		printf("NULL");
	else
	{
		while (ret->next != NULL)
		{
			printf("%d->", ret->data);
			ret = ret->next;
		}
		printf("%d", ret->data);
	}
		
}
