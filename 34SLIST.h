#pragma once
#include<stdio.h>

typedef int SListDataType;

typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** pphead, SListDataType x);
struct SListNode* BuySListNode(SListDataType x);
void SListShow(SListNode* phead);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);
