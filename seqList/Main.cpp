#include"seqList.h"

int main(){
seqList mylist;
InitseqList(&mylist);
ElemType Item;
int select=1;
int pos;
int y_n=1; 

while(select){
printf("\t\t\t\t**************顺序表操作菜单****************\n");
printf("\t\t\t\t*  [1]  push_back       [2]  push_fornt    *\n");
printf("\t\t\t\t*  [3]  show_list       [4]  pop_back      *\n");
printf("\t\t\t\t*  [5]  pop_front       [6]  insert_pos    *\n");
printf("\t\t\t\t*  [7]  find_val        [8]  seqlength     *\n");
printf("\t\t\t\t*  [9]  find_pos        [10] delete_pos    *\n");
printf("\t\t\t\t*  [11] delete_val      [12] sort          *\n");
printf("\t\t\t\t*  [13] resver          [14] clear         *\n");
printf("\t\t\t\t*  [15] destroy*        [0]  quit_system   *\n");
printf("\t\t\t\t**************顺序表操作菜单****************\n");
printf("\t\t\t\t（￣m￣）请选择:\n");
printf("\t\t\t\t"); 
scanf("%d",&select);
if(select ==0 )
break;
switch(select){
case 1: 
	printf("\t\t\t\t\\^o^/请输入将要插入的数据(输入\"-1\"结束插入操作):\n");
	printf("\t\t\t\t"); 
	while(scanf("%d",&Item),Item!= -1){
	push_back(&mylist,Item);
	}
	printf("\t\t\t\t*^____^*数据插入完毕!\n"); 
	break;
case 2:
    printf("\t\t\t\t\\\^o^/请输入将要插入的数据(输入-1结束插入操作):\n");
    printf("\t\t\t\t"); 
	while(scanf("%d",&Item),Item!= -1){
	push_front(&mylist,Item);
	}
	break;
case 3:
	show_list(&mylist);
     break; 
case 4:
	 pop_back(&mylist);
	 break;
case 5:
	 pop_front(&mylist);
	 break;
case 6:
	while(y_n){
	printf("\t\t\t\t\\\^o^/请输入要插入的数据:\n");
	printf("\t\t\t\t"); 
	scanf("%d",&Item);
	printf("\t\t\t\t\\\^o^/请输入要插入的数据的位置:\n");
	printf("\t\t\t\t");
	scanf("%d",&pos);
	y_n=insert_pos(&mylist,pos,Item);
}
     break; 
case 7:
    printf("\t\t\t\t\\\^o^/请输入要查找的元素索引:\n");	
    printf("\t\t\t\t"); 
    scanf("%d",&pos); 
    find_val(&mylist,pos);
	break;
case 8:
	seqlength(&mylist);
	break;
case 9:
	printf("\t\t\t\t\\\^o^/请输入要查找的元素数值:\n"); 
	printf("\t\t\t\t"); 
	scanf("%d",&Item); 
    pos=find_pos(&mylist,Item);
    if(pos>=0) {
	printf("\t\t\t\t*^____^*你所查找的%d元素位于索引%d处!\n",Item,pos);
	break; 
	} 
	else if(pos==-1){
	printf("\t\t\t\t（￣m￣）对不起,表中无数据,请重新选择!\n");
	break; 
	} 
	else if(pos==-2){
	printf("\t\t\t\t（￣m￣）对不起,你所查找的元素值%d不存在,请确认后再试!\n",Item);
    break; 
	} 
	break; 
case 10:
	 printf("\t\t\t\t\\\^o^/请输入要删除的元素索引值:\n");
	 printf("\t\t\t\t"); 
	 scanf("%d",&pos);
	 delete_pos(&mylist,pos);
	 break; 
case 11:
     printf("\t\t\t\t\\\^o^/请输入你要删除的元素值:\n"); 
     printf("\t\t\t\t");
     scanf("%d",&Item); 
     delete_val(&mylist,Item); 
     break; 
case 12:
	 sort(&mylist); 
	 break; 
case 13:
     resver(&mylist);
	 break;	 
case 14:
	 clear(&mylist); 
     break; 
//case 15:
     //destroy(&mylist);
	// break;   
//case 16:
     //quit_system(&mylist);
	 //break;	  
default:
	printf("\t\t\t\t（￣m￣）输入的选择错误，请重新输入!\n");
	break;
}
}
quit_system(&mylist); 
return 0; 
}
