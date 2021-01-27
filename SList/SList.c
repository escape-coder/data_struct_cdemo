#include"SList.h"
//初始化记录单链表的结构 
void init_List(List *list){
	list->first=list->last=(Node *)(malloc(sizeof(Node))); 
	assert(list->first!=NULL); 
	list->first->next=NULL; 
	list->size=0; 
	return; 
} 

//尾插法
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

//头插法(难理解需画图重点记忆，是头插法就不操作last指针,光动first指针;是尾插法就不操作first指针,光动last指针;) 
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
 
// 方法一:遍历并在控制台打印单链表数据
//void show_List(List *list){
// List *p=list;
// //assert((p->first->next)!=NULL); 
// if(p->size==0){
// 	printf("单链表中无数据,请先插入数据再来查看!\n"); 
// } 
// while((p->first->next)!=NULL){
// 	printf("%d-->",p->first->next->data);
//	 p->first=p->first->next; 
// }
//printf("\n"); 			
//	return; 	
//} 

 //方法二:遍历并在控制台打印单链表数据
void show_List(List *list){
Node *p=list->first->next;
 if(list->size==0){
	printf("单链表中无数据,请先插入数据再来查看!\n"); 
	return;
} 
while(p!=NULL){
	printf("%d-->",p->data);
	p=p->next; 
}
printf("\n"); 
return; 
} 

//尾部删除单链表元素
 
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

//头部删除单链表元素
void pop_front(List *list){
	if(list->size==0){
	printf("单链表为空,无法删除单链表元素!\n"); 
	} 
	Node *p=list->first->next;
	list->first->next=p->next;
	free(p); 
	list->size--; 
	printf("删除完毕!\n"); 
	return; 
} 

//按值插入元素
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

//查找元素的指针
Node * find(List *list,ElemType val){
Node *p=list->first->next;
if(p==NULL||list->size==0){
//	printf("表中无元素,请重新输入!\n");
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
//printf("你所查找的元素不存在!\n"); 
//
//return NULL; 
//以下代码更简洁高效
while(p!=NULL&&p->data!=val){
	p=p->next; 
} 
return p; 
} 

//求单链表的长度length
int SLLength(List *list){	
	return list->size; 
	 
}

//根据用户给的数值删除单链表元素
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





















 
