/*********************本代码旨在实现单链表的创建********************/
#include<stdio.h> 
#include<assert.h> 
#include<malloc.h> 

#define ElemType int //宏定义的好处是一处更改，处处更改执行 

typedef struct ListNode{
	ElemType data;
	struct ListNode *next; 
}ListNode;

typedef ListNode* List; 

//带头结点和其他方式创建单链表的初始化函数 
 
void initList(List *head){
	*head=(ListNode *)malloc(sizeof(ListNode));
	assert(*head!=NULL); 
	(*head)->next=NULL; 
	return; 
} 
 

/* 
void initList(List *head){
(*head)=NULL; 
return;
}
*/
//尾插创立单链表 
/*
void createList(List *head){
	*head=(ListNode *)(malloc(sizeof(ListNode)));
	assert(*head!=NULL);
	(*head)->data=1; 
	(*head)->next=NULL;
	
	ListNode *p=*head;
	int i;
	for(i=2;i<=10;i++)
	{
	ListNode *s=(ListNode *)(malloc(sizeof(ListNode)));
       s->data=i;
	   s->next=NULL;
	   p->next=s;
	   p=s; 
	} 	
}*/ 

//头插法建立单链表
/*
void createList(List *head){
	*head=(ListNode *)malloc(sizeof(ListNode));
	assert(*head!=NULL);
	(*head)->data=1;
	(*head)->next=NULL;
	
	ElemType i; 
	for(i=2;i<=10;i++){
		ListNode *s=(ListNode *)malloc(sizeof(ListNode));
		assert(s!=NULL); 
		s->data=i;
	    s->next=*head;
		*head=s;		 
	} 	
	return; 
} 
*/

//带头结点的单链表的头插法
/*
void createList(List *head){
	ElemType i; 
	for(i=1;i<=10;i++){
		ListNode *s=(ListNode *)malloc(sizeof(ListNode));
		assert(s!=NULL);
		s->data=i; 
		s->next=(*head)->next;
		 (*head)->next=s; 
	} 
	printf("带头结点的单链表创建成功!\n"); 
	return;
} 
*/

//其他建立单链表方法
void createList(List *head){
	ListNode *p=*head;
	ElemType i; 
	for(i=1;i<=10;i++){
	p=p->next=(ListNode *)malloc(sizeof(ListNode));
	assert(p!=NULL);
	p->data=i;
	p->next=NULL; 
	} 	
printf("长度为%d的单链表创建成功!\n",i);	
	return; 
}  
 
void showList(List head){
	ListNode *p=head->next;
	//ListNode *p=head;
	while(p!=NULL){
		printf("%d-->",p->data); 
        p=p->next; 
	} 
	printf("NULL.\n"); 
	return; 
} 

void main(){
	List mylist;
	initList(&mylist); 
	createList(&mylist);
	showList(mylist);	 
	return; 
} 

