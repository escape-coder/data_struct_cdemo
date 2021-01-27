#ifndef _SLIST_H_
#define _SLIST_H_ 

#include"stdio.h"
#include"SList.h"
#include"assert.h"
#include"malloc.h" 
 
#define ElemType int

typedef struct Node{
ElemType data;

struct Node *next;
	
}Node,*PNode;

typedef struct List{
PNode first;
PNode last;
size_t size;
}List; 

void init_List(List *list);//初始化记录结构对象 
void push_back(List *list,ElemType Item);//单链表尾插法
void show_List(List *list);//打印输出单链表中存储的数据 
void push_front(List *list,ElemType Item);//单链表头插法 
int pop_back(List *list);//单链表尾部删除数据 
void pop_front(List *list);//单链表头部删除数据 
void insert_val(List *list,ElemType Item);
//按值插入，Item从链表头开始比较，找到第一个比它大的元素，然后在这个元素前面插入Item 
Node * find(List *list,ElemType val);//根据用户输入数据值来查找对应元素值的指针 
int SLLength(List *list);//求单链表长度 
Node * delete_val(List *list,ElemType val);//根据值删除单链表数据 
#endif //_SLIST_H_ 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
