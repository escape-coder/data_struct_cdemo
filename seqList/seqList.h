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



void InitseqList(seqList *list);//初始化顺序表为并其分配内存函数 
void push_back(seqList *list,ElemType x);//顺序表尾插法函数 
void show_list(seqList *list);//显示表元素函数 
void push_front(seqList *list,ElemType x);//顺序表头插法 
void pop_back(seqList *list);//顺序表尾删法函数 
void pop_front(seqList *list);//顺序表头删法函数 
int insert_pos(seqList *list,int pos,ElemType x);//根据指定位置插入元素函数 
void find_val(seqList *list,int pos);//根据用户输入元素值查找索引函数 
void seqlength(seqList *list);//获取当前顺序表长度函数 
int find_pos(seqList *list,ElemType key);//根据用户输入索引值查找元素值函数 
void delete_pos(seqList *list,int pos);//根据指定位置删除元素函数 
void delete_val(seqList *list,ElemType key);//根据元素值删除元素函数 
void sort(seqList *list);//冒泡排序函数 
void resver(seqList *list); //逆置元素函数 
void clear(seqList *list);//清空表函数 
void destroy(seqList *list);//将表销毁函数,用户不能直接调用,只能在系统退出时通过quit_system自动调用 
void quit_system(seqList *list);//用户退出时系统调用的函数 

#endif   //_SEQLIST_H__
