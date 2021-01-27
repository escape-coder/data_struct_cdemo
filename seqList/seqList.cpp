#include"seqList.h"
//初始化顺序表 
void InitseqList(seqList *list){
list->base = (ElemType *)malloc(sizeof(ElemType)*SEQLIST_INIT_SIZE);
assert(list->base !=NULL);
list->capacity=SEQLIST_INIT_SIZE;
list->size=0;
}

//顺序表尾插法 
void push_back(seqList *list,ElemType x){
	if(list->size >= list->capacity)//判断当前表空间是否已满，若满停止插入数据 
	{
	printf("\t\t\t\t（￣m￣）顺序表空间已满不能进行尾部插入数据!\n");
	return;
	}
    list->base[list->size] = x;//将要插入的数据x的值赋给表中指示器size所指的空间 
	list->size++;//将指示器size的值加一，使它指向表中尾部的那个元素的下一个元素的空间 

}

//打印输出表中所有元素 
void show_list(seqList *list){
	if(list->size==0){
	printf("\t\t\t\t（￣m￣）对不起,表中无数据可展示,请先输入数据!\n"); 
	return; 
	} 
printf("\t\t\t\t*^____^*表中有以下数据:\n");//在控制台打印出提示信息 
/*
根据当前表的size遍历且打印输出顺序表中的所有元素 
*/
 printf("\t\t\t\t");
for(int i=0;i<list->size;i++) 
{
printf("%d ",list->base[i]);
}
printf("\n");

}

//顺序表头插法 
void push_front(seqList *list,ElemType x){
/*
判断当前表中的数据是否已满 
*/
	if(list->size >= list->capacity){
	printf("\t\t\t\t（￣m￣）顺序表空间已满不能进行头部插入数据!\n");
	return;
	}
	/*
	在头插入数据前将当前表中的所有元素依次向后移动一个位置，为将要插入的新元素腾出空间 
	*/ 
	for(int i=list->size;i>0;i--){
	    list->base[i]=list->base[i-1];
	}
	list->base[0] = x;//将x赋值给表中索引为0的空间 
	list->size++;//将指示器值加一 

}

//顺序表尾删法 
void pop_back(seqList *list){
	/*
	判断表是否有元素 
	*/ 
	if(list->size==0){
	printf("\t\t\t\t（￣m￣）顺序表为空不能进行尾部删除操作!\n");
	return;
	}
	/*
	若表不为空，将指示器size值减一，此时尾部的数据元素实则还在内存空间中，当插入新元素会将它覆盖的
	，相当于已经被删除 
	*/ 
	else {
	list->size--;
	printf("\t\t\t\t*^____^*尾部删除成功!\n");
	}
}

//顺序表头删法 
void pop_front(seqList *list){
if(list->size==0){
	printf("\t\t\t\t（￣m￣）顺序表为空不能进行头部删除操作!\n");
	return;
	}
for(int i=0;i<list->size-1;i++){
list->base[i]=list->base[i+1];
}
list->size--;
printf("\t\t\t\t*^____^*头部删除成功!\n");
}

//在pos点插入一个数据元素
int insert_pos(seqList *list,int pos,ElemType x){

/*
判断表是否已满，满了提示不能插入 
*/
if(list->size >= list->capacity){
printf("\t\t\t\t（￣m￣）顺序表已满,暂不支持插入数据!\n"); 
return 0; 
} 

/*
判断索引是否合法，插入之后的表要保证满足线性表的特性
*/ 
else if(pos<0||pos>list->size){
printf("\t\t\t\t（￣m￣）非法插入位置，请重新输入!\n"); 
return 1;
}

/*
如果插入的位置刚好是表的第一个元素的位置(pos==0)，调用前插(push_front)函数 
*/
else if(pos==0){
push_front(list,x);
printf("\t\t\t\t*^____^*已在索引为%d处插入元素%d!\n",pos,x);
return 0; 
}

/*
如果插入的位置刚好是表的最后一个元素的位置(pos==size-1)，调用后插(push_back)函数 
*/
else if(pos==list->size){
push_back(list,x);
printf("\t\t\t\t*^____^*已在索引为%d处插入元素%d!\n",pos,x);
return 0; 
}

/*
当表未满且不在表尾和表头处插入，pos也不是非法值的时候(说白了就是在取值范围为闭区间[1，size-2]处插入时) 
上面的条件为pos==0和pos==list->size-1的两个else if代码块可以省去，因为下面的else代码块可以代替它的功能 
实际开发中可以删去那两个else if 代码块，可以减小程序的时间复杂度和空间复杂度。 
*/
 
else{	
for(int i=list->size;i>pos;i--){
 list->base[i+1]=list->base[i]; 
}
list->base[pos]=x; 
list->size++; 
printf("\t\t\t\t*^____^*已在索引为%d处插入元素%d!\n",pos,x); 
return 0; 
} 

}

//查找索引值为pos的数据元素的值
void find_val(seqList *list,int pos){
if(list->size==0){
printf("\t\t\t\t（￣m￣）表中无数据元素无法查找，请先插入数据!\n"); 
return; 
}

else if(pos<0||pos>=list->size){
printf("\t\t\t\t（￣m￣）请输入合法的索引值!\n");
return; 
}

else{
printf("\t\t\t\t*^____^*你要查找的索引为%d的数据元素的值为%d!\n",pos,list->base[pos]); 
return;	
} 

}

//输出当前线性表的长度length
void seqlength(seqList *list){
	printf("\t\t\t\t*^____^*顺序表的长度（length）为%d!\n",list->size); 
	return;
} 

//根据用户输入的数值查找元素索引值
int find_pos(seqList *list,ElemType key){
	if(list->size==0){
		return -1; 
	} 
	
	for(int i=0;i<list->size;i++) {
         if(list->base[i]==key){		
		 return i; 
		 } 
	}
    return -2;	 	
} 

//根据用户输入的元素值的索引值删除元素
void delete_pos(seqList *list,int pos){
	if(list->size==0){
	printf("\t\t\t\t（￣m￣）对不起,表为空无法删除,请重新选择!\n"); 
	return; 
	} 
	else if(pos>=list->size||pos<0){
	printf("\t\t\t\t（￣m￣）对不起,输入的索引值不合法,请重新输入!\n"); 
	return; 
	} 
	else{
		int temp=list->base[pos]; 
		for(int i=pos;i<list->size;i++){
		list->base[i]=list->base[i+1]; 
		} 
		list->size--;
	printf("\t\t\t\t*^____^*索引值为%d的元素%d已经成功被删除!\n",pos,temp);	 
	return; 
	} 
} 
 
//根据用户输入的元素值删除相应元素
void delete_val(seqList *list,ElemType key){
	if(list->size==0){
	printf("\t\t\t\t（￣m￣）对不起,表为空无法删除,请重新选择!\n"); 
	return; 
	} 
    else{
		int temp; 
		temp=find_pos(list,key);
		if(temp==-2){
			printf("\t\t\t\t（￣m￣）对不起,你所删除的元素值%d不存在,请确认后再试!\n",key); 
			return; 
		} 
	for(int i=0;i<list->size;i++){
		if(list->base[i]==key){
	         delete_pos(list,i); 
			 } 		   
	    }
	return; 
     }
	return;	
}

//使用冒泡排序算法实现顺序表的排序
void sort(seqList *list){
	if(list->size==0){
		printf("\t\t\t\t（￣m￣）对不起,表为空无法排序，请存数据后重试!\n");
		return; 
	} 
	int temp;
for(int i=0;i<list->size-1;i++){
   for(int j=0;j<list->size-(1+i);j++){
      if(list->base[j]>list->base[j+1]){
          temp=list->base[j+1];
          list->base[j+1]=list->base[j];
          list->base[j]=temp;
           }
      }
    }
	printf("\t\t\t\t*^____^*排序已完成,输入指令3可以查看排序后的新表!\n"); 
	return; 
	
	
	
	
	
	
	
	
	
	
	
} 
 
//逆置顺序表中的元素值 
void resver(seqList *list){
	if(list->size==0){
		printf("\t\t\t\t（￣m￣）对不起,表为空无法逆置，请存数据后重试!\n"); 
		return; 
	} 
	int left=0;
	int right=list->size-1;
	int temp; 
	while(left<right){
	  temp=list->base[left];
	  list->base[left]=list->base[right];
	  list->base[right]=temp;  
	    left++;
		right--; 
	}
	 printf("\t\t\t\t*^____^*顺序表逆置成功,输入指令3查看新表!\n"); 
     return;	 
} 

//清空表
void clear(seqList *list){	
	list->size=0; 
	printf("\t\t\t\t*^____^*顺序表已清空!\n"); 
	return; 
} 

//将表销毁释放空间
void destroy(seqList *list){
	free(list->base);
	list->base=NULL;
	list->capacity=0;
	list->size=0;
	return; 
} 

//停止系统
void quit_system(seqList *list){
 destroy(list); 
 printf("\t\t\t\t（￣m￣）正在退出系统...\n");
 printf("\t\t\t\t（￣m￣）系统已退出!\n");
 return; 
}  

 

