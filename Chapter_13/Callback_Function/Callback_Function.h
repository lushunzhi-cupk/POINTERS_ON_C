
#pragma once
#pragma once
#include<stdio.h>
#include<stdlib.h> // 提供malloc、realloc、free、exit原型
#include<string.h>

/* 链表元素类型定义 */
typedef int ElemType;

typedef struct Node {
    struct Node *link;
    ElemType value;
}Node,*LinkList;

/*
 *
 * */
LinkList search_list(Node* node,int const value);

/*
 *
 * */
LinkList search_list_1(Node* node,int const *value,int (*compare)(void const *,void const *));

/*
 *
 * */
int compare(void const *a,void const *b);

/*
 * 算法2.11
 *
 * */
void CreateList(LinkList *L,int n);