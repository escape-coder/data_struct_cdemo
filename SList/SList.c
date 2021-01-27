#include"SList.h"
//��ʼ����¼������Ľṹ 
void init_List(List *list){
	list->first=list->last=(Node *)(malloc(sizeof(Node))); 
	assert(list->first!=NULL); 
	list->first->next=NULL; 
	list->size=0; 
	return; 
} 

//β�巨
void push_back(List *list,ElemType Item){
  Node *s=(Node *)malloc(sizeof(Node));
  assert(s!=NULL);
  s->data=Item;
  s->next=NULL;
  list->last->next=s;
  list->last=s;
  list->size++;
return; 
} 

//ͷ�巨(������軭ͼ�ص���䣬��ͷ�巨�Ͳ�����lastָ��,�⶯firstָ��;��β�巨�Ͳ�����firstָ��,�⶯lastָ��;) 
void push_front(List *list,ElemType Item){
   Node *s=(Node *)malloc(sizeof(Node));
   assert(s!=NULL); 
   s->data=Item;
   s->next=NULL; 
   s->next=list->first->next;
   list->first->next=s;
   if(list->size==0){
    list->last=s; 
   } 
   list->size++; 
	return; 
} 
 
// ����һ:�������ڿ���̨��ӡ����������
//void show_List(List *list){
// List *p=list;
// //assert((p->first->next)!=NULL); 
// if(p->size==0){
// 	printf("��������������,���Ȳ������������鿴!\n"); 
// } 
// while((p->first->next)!=NULL){
// 	printf("%d-->",p->first->next->data);
//	 p->first=p->first->next; 
// }
//printf("\n"); 			
//	return; 	
//} 

 //������:�������ڿ���̨��ӡ����������
void show_List(List *list){
Node *p=list->first->next;
 if(list->size==0){
	printf("��������������,���Ȳ������������鿴!\n"); 
	return;
} 
while(p!=NULL){
	printf("%d-->",p->data);
	p=p->next; 
}
printf("\n"); 
return; 
} 

//β��ɾ��������Ԫ��
 
int pop_back(List *list){
if(list->size==0){
    return 0; 
} 

Node *p=list->first;
assert(p!=NULL);
while(p->next!=list->last){
	p=p->next;
}
 free(list->last);
 list->last=p;
 list->last->next=NULL;
 list->size--;
return 1;
 
} 

//ͷ��ɾ��������Ԫ��
void pop_front(List *list){
	if(list->size==0){
	printf("������Ϊ��,�޷�ɾ��������Ԫ��!\n"); 
	} 
	Node *p=list->first->next;
	list->first->next=p->next;
	free(p); 
	list->size--; 
	printf("ɾ�����!\n"); 
	return; 
} 

//��ֵ����Ԫ��
void insert_val(List *list,ElemType Item){
	Node *s=(Node *)malloc(sizeof(Node)); 
	assert(s!=NULL);
	s->data=Item;
	s->next=NULL; 
	
	if(list->size==0){
		push_back(list,Item);
		return; 
	}
	Node *p=list->first;
	while(p->next!=NULL&&p->next->data<Item){
	p=p->next; 
}
  if(p->next==NULL){
  push_back(list,Item);
		return; 
  }
	s->next=p->next;
	p->next=s;
	list->size++; 

	return; 
} 

//����Ԫ�ص�ָ��
Node * find(List *list,ElemType val){
Node *p=list->first->next;
if(p==NULL||list->size==0){
//	printf("������Ԫ��,����������!\n");
	return NULL; 
} 
//while(p!=NULL){
//	if(p->data==val)
//	{
//		return p; 
//	 } 
//	else{
//		p=p->next; 
//	} 
//} 
//printf("�������ҵ�Ԫ�ز�����!\n"); 
//
//return NULL; 
//���´��������Ч
while(p!=NULL&&p->data!=val){
	p=p->next; 
} 
return p; 
} 

//������ĳ���length
int SLLength(List *list){	
	return list->size; 
	 
}

//�����û�������ֵɾ��������Ԫ��
//int delete_val(List *list,ElemType val){
//	Node *p=list->first; 
//	if(p->next==NULL||list->size==0){
//	return 0; 
//	} 
//	while(p->next!=NULL&&p->next->data!=val){
//	p=p->next; 
//	} 
//  
//	if(p==NULL){
//		return 0; 
//	} 
//	else if(p!=NULL&&p->next->next==NULL){
//	pop_back(list);
//	return 1;
//	}
//	else{
//	
//	p->next->data=p->next->next->data;
//	Node *t;
//	t=p->next;
//	p->next=p->next->next;
//	free(t);
//	list->size--;
//	return 1; 
//}
//} 
Node * delete_val(List *list,ElemType val){
	if(list->size==0){
	return NULL; 
	} 
	Node *p=find(list,val); 
	if(p==NULL){
		return NULL; 
	} 
	if(p==list->last){
	pop_back(list);
	return p;
	}
	else{
	Node *q=p->next; 
    p->data=q->data;
	p->next=q->next;
	free(q); 
	list->size--;
	return p; 
}
} 





















 
