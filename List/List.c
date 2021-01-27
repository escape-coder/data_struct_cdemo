/*********************������ּ��ʵ�ֵ�����Ĵ���********************/
#include<stdio.h> 
#include<assert.h> 
#include<malloc.h> 

#define ElemType int //�궨��ĺô���һ�����ģ���������ִ�� 

typedef struct ListNode{
	ElemType data;
	struct ListNode *next; 
}ListNode;

typedef ListNode* List; 

//��ͷ����������ʽ����������ĳ�ʼ������ 
 
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
//β�崴�������� 
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

//ͷ�巨����������
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

//��ͷ���ĵ������ͷ�巨
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
	printf("��ͷ���ĵ��������ɹ�!\n"); 
	return;
} 
*/

//����������������
void createList(List *head){
	ListNode *p=*head;
	ElemType i; 
	for(i=1;i<=10;i++){
	p=p->next=(ListNode *)malloc(sizeof(ListNode));
	assert(p!=NULL);
	p->data=i;
	p->next=NULL; 
	} 	
printf("����Ϊ%d�ĵ��������ɹ�!\n",i);	
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

