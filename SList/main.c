#include"SList.h"

int main(){
List mylist;
init_List(&mylist);	
ElemType Item;
Node *key; 
int select=1;
while(select){
printf("**************����������˵�*******************\n");
printf("*[1]  push_back               [2]  push_front *\n");	
printf("*[3]  show_list               [4]  pop_back   *\n");
printf("*[5]  pop_front               [6]  insert_val *\n");
printf("*[7]  find                    [8]  SLLength   *\n");
printf("*[9]  delete_val              [10] sort       *\n"); 
printf("*[11] resver                  [12] clear      *\n"); 
printf("*[13] destroy                 [0]  quit_system*\n"); 
printf("**************����������˵�*******************\n");	
printf("������[ ]���ָ����ɲ���:\n");
scanf("%d",&select); 
if(select==0)
break;
switch(select){		
case 1:
	printf("������Ҫ�����Ԫ��,����-1��������!\n");
	while(scanf("%d",&Item),Item!=-1){
    push_back(&mylist,Item); 
	}  
	printf("���ݲ���ɹ�,�׿�������ָ��3�鿴������!\n");
	break;
	
case 2:
	printf("������Ҫ�����Ԫ��,����-1��������!\n");
	while(scanf("%d",&Item),Item!=-1){
    push_front(&mylist,Item); 
	}  
	printf("���ݲ���ɹ�,�׿�������ָ��3�鿴������!\n");
	break;
	
case 3:
    printf("��������������:\n");	
	show_List(&mylist);
	break;
	
case 4:
	if(pop_back(&mylist)==0){
	printf("������Ϊ��,�޷�ɾ��Ԫ��!\n"); 
	}
    else{
    	printf("ɾ�����!\n");
	}
	break;

case 5:
    pop_front(&mylist); 
    break;
case 6:
	printf("������Ҫ�����Ԫ��\n"); 
	scanf("%d",&Item); 
    insert_val(&mylist,Item); 
     printf("���ݲ���ɹ�,�׿�������ָ��3�鿴������!\n"); 
	break;   
	
case 7:
	printf("����������Ҫ���ҵ�Ԫ��ֵ\n");
	scanf("%d",&Item);	
	key=find(&mylist,Item);
	printf("����Ҫ���ҵ�Ԫ��ָ��Ϊ:%d\n",key); 
	break;

case 8:
	printf("������ĳ���Ϊ:%d\n",SLLength(&mylist));
	break;

case 9:
	printf("��������Ҫɾ����Ԫ��ֵ\n");
	scanf("%d",&Item); 
	if(delete_val(&mylist,Item)==NULL){
    printf("������Ϊ�ջ��߱��в�����Ҫɾ����Ԫ��,ɾ��ʧ��!\n");
	} 
	else{
	 printf("����Ϊ%d�Ľ���ѱ�ɾ��,����ָ��3�鿴����!\n",Item); 
	} 
	break;
	
//	case 10:
//	sort();
//	break; 
//	 
//	case 11:
//	resver();
//	break; 
//	
//	case 12:
//	clear();
//	break;
//	
//	case 13:
//	destroy();
//	break;
//	
//	case 0:
//	quit_system();
//	break; 
	 
default:
	printf("�����ָ���������������:\n");
	break; 
	
} 


} 






return 0; 
} 








