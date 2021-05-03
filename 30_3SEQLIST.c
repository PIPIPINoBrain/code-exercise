#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"SEQLIST.h"


void SeqListInit(SL* ps)
{
	assert(ps);
	ps->a = (SLDataType*)malloc(sizeof(SLDataType));
	if (ps == NULL)
		perror("Fail to get space: ");
	else
	{
		ps->size = 0;
		ps->capicity = 1;
	}
}

void SeqListMore(SL* ps)
{
	assert(ps);
	ps->capicity = 2 * (ps->capicity);
	SLDataType* ret = (SLDataType*)realloc(ps->a, sizeof(SLDataType)* ps->capicity);
	if (ps == NULL)
		perror("Fail to get more space: ");
	else
	{
		ps->a = ret;
	}
}
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	ps->a[ps->size] = x;
	ps->size++;
	if (ps->size == ps->capicity)
	{
		SeqListMore(ps);
	}
}

void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	if(ps->size+1>=ps->capicity)
		SeqListMore(ps);
	int i = 0;
	for (i = ps->size-1; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i <= ps->size-1; i++)
	{
		ps->a[i] = ps->a[i+1];
	}
	ps->size--;
}

void SeqListInsert(SL* ps, SLDataType x, SLDataType num)
{
	assert(ps);
	if (ps->size + 1 >= ps->capicity)
		SeqListMore(ps);
	int i = 0;
	for (i = ps->size - 1; i >= num; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[num] = x;
	ps->size++;
}

void SeqListDelsert(SL* ps, SLDataType num)
{
	assert(ps);
	assert(num < ps->size&& num >= 0);
	int i = 0;
	for (i = num; i <= ps->size - 1; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}
