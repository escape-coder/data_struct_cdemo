#include"seqList.h"

int main(){
seqList mylist;
InitseqList(&mylist);
ElemType Item;
int select=1;
int pos;
int y_n=1; 

while(select){
printf("\t\t\t\t**************˳�������˵�****************\n");
printf("\t\t\t\t*  [1]  push_back       [2]  push_fornt    *\n");
printf("\t\t\t\t*  [3]  show_list       [4]  pop_back      *\n");
printf("\t\t\t\t*  [5]  pop_front       [6]  insert_pos    *\n");
printf("\t\t\t\t*  [7]  find_val        [8]  seqlength     *\n");
printf("\t\t\t\t*  [9]  find_pos        [10] delete_pos    *\n");
printf("\t\t\t\t*  [11] delete_val      [12] sort          *\n");
printf("\t\t\t\t*  [13] resver          [14] clear         *\n");
printf("\t\t\t\t*  [15] destroy*        [0]  quit_system   *\n");
printf("\t\t\t\t**************˳�������˵�****************\n");
printf("\t\t\t\t����m������ѡ��:\n");
printf("\t\t\t\t"); 
scanf("%d",&select);
if(select ==0 )
break;
switch(select){
case 1: 
	printf("\t\t\t\t\\^o^/�����뽫Ҫ���������(����\"-1\"�����������):\n");
	printf("\t\t\t\t"); 
	while(scanf("%d",&Item),Item!= -1){
	push_back(&mylist,Item);
	}
	printf("\t\t\t\t*^____^*���ݲ������!\n"); 
	break;
case 2:
    printf("\t\t\t\t\\\^o^/�����뽫Ҫ���������(����-1�����������):\n");
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
	printf("\t\t\t\t\\\^o^/������Ҫ���������:\n");
	printf("\t\t\t\t"); 
	scanf("%d",&Item);
	printf("\t\t\t\t\\\^o^/������Ҫ��������ݵ�λ��:\n");
	printf("\t\t\t\t");
	scanf("%d",&pos);
	y_n=insert_pos(&mylist,pos,Item);
}
     break; 
case 7:
    printf("\t\t\t\t\\\^o^/������Ҫ���ҵ�Ԫ������:\n");	
    printf("\t\t\t\t"); 
    scanf("%d",&pos); 
    find_val(&mylist,pos);
	break;
case 8:
	seqlength(&mylist);
	break;
case 9:
	printf("\t\t\t\t\\\^o^/������Ҫ���ҵ�Ԫ����ֵ:\n"); 
	printf("\t\t\t\t"); 
	scanf("%d",&Item); 
    pos=find_pos(&mylist,Item);
    if(pos>=0) {
	printf("\t\t\t\t*^____^*�������ҵ�%dԪ��λ������%d��!\n",Item,pos);
	break; 
	} 
	else if(pos==-1){
	printf("\t\t\t\t����m�����Բ���,����������,������ѡ��!\n");
	break; 
	} 
	else if(pos==-2){
	printf("\t\t\t\t����m�����Բ���,�������ҵ�Ԫ��ֵ%d������,��ȷ�Ϻ�����!\n",Item);
    break; 
	} 
	break; 
case 10:
	 printf("\t\t\t\t\\\^o^/������Ҫɾ����Ԫ������ֵ:\n");
	 printf("\t\t\t\t"); 
	 scanf("%d",&pos);
	 delete_pos(&mylist,pos);
	 break; 
case 11:
     printf("\t\t\t\t\\\^o^/��������Ҫɾ����Ԫ��ֵ:\n"); 
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
	printf("\t\t\t\t����m���������ѡ���������������!\n");
	break;
}
}
quit_system(&mylist); 
return 0; 
}
