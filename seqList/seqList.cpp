#include"seqList.h"
//��ʼ��˳��� 
void InitseqList(seqList *list){
list->base = (ElemType *)malloc(sizeof(ElemType)*SEQLIST_INIT_SIZE);
assert(list->base !=NULL);
list->capacity=SEQLIST_INIT_SIZE;
list->size=0;
}

//˳���β�巨 
void push_back(seqList *list,ElemType x){
	if(list->size >= list->capacity)//�жϵ�ǰ��ռ��Ƿ�����������ֹͣ�������� 
	{
	printf("\t\t\t\t����m����˳���ռ��������ܽ���β����������!\n");
	return;
	}
    list->base[list->size] = x;//��Ҫ���������x��ֵ��������ָʾ��size��ָ�Ŀռ� 
	list->size++;//��ָʾ��size��ֵ��һ��ʹ��ָ�����β�����Ǹ�Ԫ�ص���һ��Ԫ�صĿռ� 

}

//��ӡ�����������Ԫ�� 
void show_list(seqList *list){
	if(list->size==0){
	printf("\t\t\t\t����m�����Բ���,���������ݿ�չʾ,������������!\n"); 
	return; 
	} 
printf("\t\t\t\t*^____^*��������������:\n");//�ڿ���̨��ӡ����ʾ��Ϣ 
/*
���ݵ�ǰ���size�����Ҵ�ӡ���˳����е�����Ԫ�� 
*/
 printf("\t\t\t\t");
for(int i=0;i<list->size;i++) 
{
printf("%d ",list->base[i]);
}
printf("\n");

}

//˳���ͷ�巨 
void push_front(seqList *list,ElemType x){
/*
�жϵ�ǰ���е������Ƿ����� 
*/
	if(list->size >= list->capacity){
	printf("\t\t\t\t����m����˳���ռ��������ܽ���ͷ����������!\n");
	return;
	}
	/*
	��ͷ��������ǰ����ǰ���е�����Ԫ����������ƶ�һ��λ�ã�Ϊ��Ҫ�������Ԫ���ڳ��ռ� 
	*/ 
	for(int i=list->size;i>0;i--){
	    list->base[i]=list->base[i-1];
	}
	list->base[0] = x;//��x��ֵ����������Ϊ0�Ŀռ� 
	list->size++;//��ָʾ��ֵ��һ 

}

//˳���βɾ�� 
void pop_back(seqList *list){
	/*
	�жϱ��Ƿ���Ԫ�� 
	*/ 
	if(list->size==0){
	printf("\t\t\t\t����m����˳���Ϊ�ղ��ܽ���β��ɾ������!\n");
	return;
	}
	/*
	����Ϊ�գ���ָʾ��sizeֵ��һ����ʱβ��������Ԫ��ʵ�����ڴ�ռ��У���������Ԫ�ػὫ�����ǵ�
	���൱���Ѿ���ɾ�� 
	*/ 
	else {
	list->size--;
	printf("\t\t\t\t*^____^*β��ɾ���ɹ�!\n");
	}
}

//˳���ͷɾ�� 
void pop_front(seqList *list){
if(list->size==0){
	printf("\t\t\t\t����m����˳���Ϊ�ղ��ܽ���ͷ��ɾ������!\n");
	return;
	}
for(int i=0;i<list->size-1;i++){
list->base[i]=list->base[i+1];
}
list->size--;
printf("\t\t\t\t*^____^*ͷ��ɾ���ɹ�!\n");
}

//��pos�����һ������Ԫ��
int insert_pos(seqList *list,int pos,ElemType x){

/*
�жϱ��Ƿ�������������ʾ���ܲ��� 
*/
if(list->size >= list->capacity){
printf("\t\t\t\t����m����˳�������,�ݲ�֧�ֲ�������!\n"); 
return 0; 
} 

/*
�ж������Ƿ�Ϸ�������֮��ı�Ҫ��֤�������Ա������
*/ 
else if(pos<0||pos>list->size){
printf("\t\t\t\t����m�����Ƿ�����λ�ã�����������!\n"); 
return 1;
}

/*
��������λ�øպ��Ǳ�ĵ�һ��Ԫ�ص�λ��(pos==0)������ǰ��(push_front)���� 
*/
else if(pos==0){
push_front(list,x);
printf("\t\t\t\t*^____^*��������Ϊ%d������Ԫ��%d!\n",pos,x);
return 0; 
}

/*
��������λ�øպ��Ǳ�����һ��Ԫ�ص�λ��(pos==size-1)�����ú��(push_back)���� 
*/
else if(pos==list->size){
push_back(list,x);
printf("\t\t\t\t*^____^*��������Ϊ%d������Ԫ��%d!\n",pos,x);
return 0; 
}

/*
����δ���Ҳ��ڱ�β�ͱ�ͷ�����룬posҲ���ǷǷ�ֵ��ʱ��(˵���˾�����ȡֵ��ΧΪ������[1��size-2]������ʱ) 
���������Ϊpos==0��pos==list->size-1������else if��������ʡȥ����Ϊ�����else�������Դ������Ĺ��� 
ʵ�ʿ����п���ɾȥ������else if ����飬���Լ�С�����ʱ�临�ӶȺͿռ临�Ӷȡ� 
*/
 
else{	
for(int i=list->size;i>pos;i--){
 list->base[i+1]=list->base[i]; 
}
list->base[pos]=x; 
list->size++; 
printf("\t\t\t\t*^____^*��������Ϊ%d������Ԫ��%d!\n",pos,x); 
return 0; 
} 

}

//��������ֵΪpos������Ԫ�ص�ֵ
void find_val(seqList *list,int pos){
if(list->size==0){
printf("\t\t\t\t����m��������������Ԫ���޷����ң����Ȳ�������!\n"); 
return; 
}

else if(pos<0||pos>=list->size){
printf("\t\t\t\t����m����������Ϸ�������ֵ!\n");
return; 
}

else{
printf("\t\t\t\t*^____^*��Ҫ���ҵ�����Ϊ%d������Ԫ�ص�ֵΪ%d!\n",pos,list->base[pos]); 
return;	
} 

}

//�����ǰ���Ա�ĳ���length
void seqlength(seqList *list){
	printf("\t\t\t\t*^____^*˳���ĳ��ȣ�length��Ϊ%d!\n",list->size); 
	return;
} 

//�����û��������ֵ����Ԫ������ֵ
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

//�����û������Ԫ��ֵ������ֵɾ��Ԫ��
void delete_pos(seqList *list,int pos){
	if(list->size==0){
	printf("\t\t\t\t����m�����Բ���,��Ϊ���޷�ɾ��,������ѡ��!\n"); 
	return; 
	} 
	else if(pos>=list->size||pos<0){
	printf("\t\t\t\t����m�����Բ���,���������ֵ���Ϸ�,����������!\n"); 
	return; 
	} 
	else{
		int temp=list->base[pos]; 
		for(int i=pos;i<list->size;i++){
		list->base[i]=list->base[i+1]; 
		} 
		list->size--;
	printf("\t\t\t\t*^____^*����ֵΪ%d��Ԫ��%d�Ѿ��ɹ���ɾ��!\n",pos,temp);	 
	return; 
	} 
} 
 
//�����û������Ԫ��ֵɾ����ӦԪ��
void delete_val(seqList *list,ElemType key){
	if(list->size==0){
	printf("\t\t\t\t����m�����Բ���,��Ϊ���޷�ɾ��,������ѡ��!\n"); 
	return; 
	} 
    else{
		int temp; 
		temp=find_pos(list,key);
		if(temp==-2){
			printf("\t\t\t\t����m�����Բ���,����ɾ����Ԫ��ֵ%d������,��ȷ�Ϻ�����!\n",key); 
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

//ʹ��ð�������㷨ʵ��˳��������
void sort(seqList *list){
	if(list->size==0){
		printf("\t\t\t\t����m�����Բ���,��Ϊ���޷�����������ݺ�����!\n");
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
	printf("\t\t\t\t*^____^*���������,����ָ��3���Բ鿴�������±�!\n"); 
	return; 
	
	
	
	
	
	
	
	
	
	
	
} 
 
//����˳����е�Ԫ��ֵ 
void resver(seqList *list){
	if(list->size==0){
		printf("\t\t\t\t����m�����Բ���,��Ϊ���޷����ã�������ݺ�����!\n"); 
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
	 printf("\t\t\t\t*^____^*˳������óɹ�,����ָ��3�鿴�±�!\n"); 
     return;	 
} 

//��ձ�
void clear(seqList *list){	
	list->size=0; 
	printf("\t\t\t\t*^____^*˳��������!\n"); 
	return; 
} 

//���������ͷſռ�
void destroy(seqList *list){
	free(list->base);
	list->base=NULL;
	list->capacity=0;
	list->size=0;
	return; 
} 

//ֹͣϵͳ
void quit_system(seqList *list){
 destroy(list); 
 printf("\t\t\t\t����m���������˳�ϵͳ...\n");
 printf("\t\t\t\t����m����ϵͳ���˳�!\n");
 return; 
}  

 

