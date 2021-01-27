#include"SList.h"

int main(){
List mylist;
init_List(&mylist);	
ElemType Item;
Node *key; 
int select=1;
while(select){
printf("**************单链表操作菜单*******************\n");
printf("*[1]  push_back               [2]  push_front *\n");	
printf("*[3]  show_list               [4]  pop_back   *\n");
printf("*[5]  pop_front               [6]  insert_val *\n");
printf("*[7]  find                    [8]  SLLength   *\n");
printf("*[9]  delete_val              [10] sort       *\n"); 
printf("*[11] resver                  [12] clear      *\n"); 
printf("*[13] destroy                 [0]  quit_system*\n"); 
printf("**************单链表操作菜单*******************\n");	
printf("请输入[ ]里的指令完成操作:\n");
scanf("%d",&select); 
if(select==0)
break;
switch(select){		
case 1:
	printf("请输入要插入的元素,输入-1结束操作!\n");
	while(scanf("%d",&Item),Item!=-1){
    push_back(&mylist,Item); 
	}  
	printf("数据插入成功,亲可以输入指令3查看表数据!\n");
	break;
	
case 2:
	printf("请输入要插入的元素,输入-1结束操作!\n");
	while(scanf("%d",&Item),Item!=-1){
    push_front(&mylist,Item); 
	}  
	printf("数据插入成功,亲可以输入指令3查看表数据!\n");
	break;
	
case 3:
    printf("表中有如下数据:\n");	
	show_List(&mylist);
	break;
	
case 4:
	if(pop_back(&mylist)==0){
	printf("单链表为空,无法删除元素!\n"); 
	}
    else{
    	printf("删除完毕!\n");
	}
	break;

case 5:
    pop_front(&mylist); 
    break;
case 6:
	printf("请输入要插入的元素\n"); 
	scanf("%d",&Item); 
    insert_val(&mylist,Item); 
     printf("数据插入成功,亲可以输入指令3查看表数据!\n"); 
	break;   
	
case 7:
	printf("请输入你所要查找的元素值\n");
	scanf("%d",&Item);	
	key=find(&mylist,Item);
	printf("你所要查找的元素指针为:%d\n",key); 
	break;

case 8:
	printf("单链表的长度为:%d\n",SLLength(&mylist));
	break;

case 9:
	printf("请输入你要删除的元素值\n");
	scanf("%d",&Item); 
	if(delete_val(&mylist,Item)==NULL){
    printf("单链表为空或者表中不存在要删除的元素,删除失败!\n");
	} 
	else{
	 printf("数据为%d的结点已被删除,输入指令3查看即可!\n",Item); 
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
	printf("输入的指令错误，请重新输入:\n");
	break; 
	
} 


} 






return 0; 
} 








