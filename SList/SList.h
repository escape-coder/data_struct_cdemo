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

void init_List(List *list);//��ʼ����¼�ṹ���� 
void push_back(List *list,ElemType Item);//������β�巨
void show_List(List *list);//��ӡ����������д洢������ 
void push_front(List *list,ElemType Item);//������ͷ�巨 
int pop_back(List *list);//������β��ɾ������ 
void pop_front(List *list);//������ͷ��ɾ������ 
void insert_val(List *list,ElemType Item);
//��ֵ���룬Item������ͷ��ʼ�Ƚϣ��ҵ���һ���������Ԫ�أ�Ȼ�������Ԫ��ǰ�����Item 
Node * find(List *list,ElemType val);//�����û���������ֵ�����Ҷ�ӦԪ��ֵ��ָ�� 
int SLLength(List *list);//�������� 
Node * delete_val(List *list,ElemType val);//����ֵɾ������������ 
#endif //_SLIST_H_ 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
