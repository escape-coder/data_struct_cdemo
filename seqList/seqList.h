#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include<stdio.h>
#include<malloc.h>
#include<assert.h>



#define SEQLIST_INIT_SIZE 10 
typedef int ElemType;
typedef struct seqList{
ElemType *base;
 int   capacity;
 int   size;
}seqList;



void InitseqList(seqList *list);//��ʼ��˳���Ϊ��������ڴ溯�� 
void push_back(seqList *list,ElemType x);//˳���β�巨���� 
void show_list(seqList *list);//��ʾ��Ԫ�غ��� 
void push_front(seqList *list,ElemType x);//˳���ͷ�巨 
void pop_back(seqList *list);//˳���βɾ������ 
void pop_front(seqList *list);//˳���ͷɾ������ 
int insert_pos(seqList *list,int pos,ElemType x);//����ָ��λ�ò���Ԫ�غ��� 
void find_val(seqList *list,int pos);//�����û�����Ԫ��ֵ������������ 
void seqlength(seqList *list);//��ȡ��ǰ˳����Ⱥ��� 
int find_pos(seqList *list,ElemType key);//�����û���������ֵ����Ԫ��ֵ���� 
void delete_pos(seqList *list,int pos);//����ָ��λ��ɾ��Ԫ�غ��� 
void delete_val(seqList *list,ElemType key);//����Ԫ��ֵɾ��Ԫ�غ��� 
void sort(seqList *list);//ð�������� 
void resver(seqList *list); //����Ԫ�غ��� 
void clear(seqList *list);//��ձ��� 
void destroy(seqList *list);//�������ٺ���,�û�����ֱ�ӵ���,ֻ����ϵͳ�˳�ʱͨ��quit_system�Զ����� 
void quit_system(seqList *list);//�û��˳�ʱϵͳ���õĺ��� 

#endif   //_SEQLIST_H__
