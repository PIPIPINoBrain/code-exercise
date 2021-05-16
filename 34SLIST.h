#pragma once
#include<stdio.h>

typedef int SListDataType;

typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

SListNode* BuySListNode(SListDataType x);
void PrintSList(SListNode* phead);
void SListPushBack(SListNode** pphead, SListDataType x);
