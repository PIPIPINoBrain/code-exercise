#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"SEQLIST.h"

int main()
{
	SL list;
	SeqListInit(&list);
	SeqListPushBack(&list, 3);
	SeqListPushBack(&list, 3);
	SeqListPushFront(&list, 4);
	SeqListPopFront(&list);
	SeqListInsert(&list,4,1);
	SeqListDelsert(&list, 1);
	printf("%d\n", list.size);
	printf("%d\n", list.capicity);
	int i = 0;
	for (i = 0; i < list.size; i++)
		printf("%d ", list.a[i]);
	return 0;
}
