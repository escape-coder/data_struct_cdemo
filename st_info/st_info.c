#include"st_info.h" 
void print(struct student a[],int i,int j)//显示
{
	sort(a,j+1); 
	ave(a,j+1);
	int m;
	printf("\n");
	printf("          ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("          丨学号丨 姓名 丨 性别 丨 语文 丨  数学  丨  英语  丨  物理  丨 化学 丨  总分 丨 平均分丨 排名丨\n");
	for(m=i;m<=j;m++)
	{
	printf("          ----------------------------------------------------------------------------------------------\n");
	printf("          丨%3d 丨%s  丨%s    丨%5.1f 丨 %5.1f  丨 %5.1f  丨 %5.1f  丨%5.1f 丨 %5.1f 丨%5.1f  丨%2d   丨\n",a[m].num,a[m].name,a[m].sex,a[m].f[0],a[m].f[1],a[m].f[2],a[m].f[3],a[m].f[4],a[m].sum,a[m].ave,a[m].pos);
	
	}
printf("          ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

void sum(struct student a[],int n)//总分
{
	int m;
	for(m=0;m<n;m++)
		a[m].sum=(a[m].f[0]+a[m].f[1]+a[m].f[2]+a[m].f[3]+a[m].f[4]);
	//print(a,0,N-1);

}

void ave(struct student a[],int n)//平均分
{
	int m;
	for(m=0;m<n;m++)
		a[m].ave=(a[m].f[0]+a[m].f[1]+a[m].f[2]+a[m].f[3]+a[m].f[4])/5;
	//print(a,0,N-1);

}

void select(struct student a[],int n,int num)//查找学号
{ 
	int i;
	for(i=0;i<n;i++)
		if(num==a[i].num)
		{
			print(a,i,i);
			return;
		}
		printf("查找失败！\n");
}

void search(struct student a[],int n,char name[8])//查找姓名
{ 
	
	int i;
	for(i=0;i<n;i++)
		if(strcmp(name,a[i].name)==0) 
		{
			print(a,i,i);
			return;
		}
		printf("查找失败！\n");
}

void sort(struct student a[],int n)//排序
{
	sum(a,n); 
	int i,j;
	struct student t;
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i].sum<a[j].sum)  
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			a[i].pos=i+1; 
			a[j].pos=j+1; 
		}
	}
	//print(a,0,N-1);
}


int delete_student(struct student a[],int num,int n){
	if(n==0){
		printf("删除失败，无数据");
		return; 
	} 
	 int i;
	 int j; 
	  for(i=0;i<=n-1;i++){
	  	 if(a[i].num==num){ 
	        for(j=i;j<n-1;j++){
	        	a[j]=a[j+1]; 
			} 
//	        a[n-1].pos=-1;
//			a[n-1].sex[1]="";
//			a[n-1].num=0;
//			a[n-1].name[8]="";
//			a[n-1].sum=0;
//			a[n-1].ave=0;
//			a[n-1].f[0]=0;
//			 a[n-1].f[1]=0;
//			 a[n-1].f[2]=0;
//			 a[n-1].f[3]=0;
//			 a[n-1].f[4]=0;
		   } 
	  } 
	  return n-1;

} 

int insert_student(struct student a[],int n){
	if(n==4){
	printf("空间已满，不能再添加数据!\n"); 
	return 4; 
	} 
	printf("                               请输入第%d个学生的信息（学号，姓名及五门课的成绩）\n\n",n);
	int i; 
	for(i=n; i<4; i++) {
		printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
		printf("                               请输入第%d个学生的学号：\n",i+1);
		printf("                               >>>");
		scanf("%d",&a[i].num);

		printf("                               请输入第%d个学生的姓名：\n",i+1);
		printf("                               >>>");
		scanf("%s",&a[i].name);

		printf("                               请输入第%d个学生的性别：\n",i+1);
		printf("                               >>>");
		scanf("%s",&a[i].sex);

		printf("                               请输入第%d个学生的五门课成绩，中间用空格隔开：\n",i+1);
		printf("                               >>>");
		scanf("%f %f %f %f %f",&a[i].f[0],&a[i].f[1],&a[i].f[2],&a[i].f[3],&a[i].f[4]);
		a[i].sum=0;
		a[i].ave=0;
	}
	return 4; 
	
} 
