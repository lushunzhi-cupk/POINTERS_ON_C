
#include "Callback_Function.h"


/*
 *
 * */
LinkList search_list(Node* node,int const value){
    while(node!=NULL&&node->value!=value){
        node=node->link;
    }
    return node;
}

/*
 *
 * */
LinkList search_list_1(Node* node,int const *value,int (*compare)(void const *,void const *)){
    while(node!=NULL&&compare(&node->value,value)){
        node=node->link;
    }
    return node;
}

/*
 *
 * */
int compare(void const *a,void const *b){
    if(*(int *)a==*(int *)b){
        return 0;
    }else{
        return 1;
    };
}

/*
 * 算法2.11
 *
 * */
void CreateList(LinkList *L,int n){
    //逆位序输入n个元素的值，建立带头结点的单链线性表L。
    (*L)=(LinkList)malloc(sizeof(Node));
    (*L)->link=NULL; //先建立一个带头结点的单链表
    for(int i=n;i>0;--i){
        Node *p=(LinkList)malloc(sizeof(Node)); //生成新结点
        scanf("%d",&p->value); //输入元素值
        p->link=(*L)->link; //插入到表头
        (*L)->link=p;
    }
}//CreateList
