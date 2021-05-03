#pragma once
#include<assert.h>
typedef int SLDataType;
#define N 10
//
//struct Seqlist
//{
//	SLDataType a[N];
//	int size;
//};//静态顺序表


//动态顺序表

typedef struct Seqlist
{
	SLDataType* a;//动态开辟数组
	int size;//有效数据个数
	int capicity;//容量空间大小
}SL;

//尾插尾删，头插头删，任意插删除
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListInsert(SL* ps, SLDataType x, SLDataType num);
void SeqListDelsert(SL* ps, SLDataType num);
