#pragma once
#include<stdio.h>

typedef int datatype;
typedef struct DListData 
{
	struct DListData* head;
	datatype data;
	struct DListData* next;

}DListData;

DListData* BuyListNode(datatype x);
void DListPushback(DListData** pphead, datatype x);
void DListPushfront(DListData** pphead, datatype x);
void DListShow(DListData* phead);
void DListPopback(DListData** pphead);
void DListPopfront(DListData** pphead);
