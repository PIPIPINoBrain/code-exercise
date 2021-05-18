#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"SLIST.h"

struct SListNode* BuySListNode(SListDataType x)
{
	SListNode* phead = (SListNode*)malloc(sizeof(SListNode));
	if (phead == NULL)
	{
		printf("fail to get space!!");
		exit(-1);
	}
	phead->data = x;
	phead->next = NULL;
	return phead;
}

void SListPushBack(SListNode** pphead, SListDataType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pphead == NULL)
		*pphead = newnode;
	else
	{
		SListNode* ret = *pphead;
		while (ret->next != NULL)
		{
			ret=ret->next;
		} 
		ret->next = BuySListNode(x);
	}
}

void SListPopBack(SListNode** pphead)
{
	SListNode* tail = *pphead;
	if (*pphead == NULL)
		;
	else if ((*pphead)->next == NULL)
	{
		*pphead = NULL;
	}
	else
	{
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next->next);
		tail->next = NULL;
	}
}

void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newnode = BuySListNode(x);
	SListNode* head = *pphead;
	*pphead = newnode;
	newnode->next = head;
}

void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)
		;
	else if ((*pphead)->next == NULL)
	{
		*pphead = NULL;
	}
	else
	{
		*pphead = (*pphead)->next;
	}
}


void SListShow(SListNode* phead)
{
	
	if (phead == NULL)
	{
		printf("NULL");
	}
	else
	{
		while (phead != NULL)
			{
				printf("%d->", phead->data);
				phead = phead->next;
			}
	}
	
}
