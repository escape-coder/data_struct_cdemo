#include"st_info.h" 
void print(struct student a[],int i,int j)//��ʾ
{
	sort(a,j+1); 
	ave(a,j+1);
	int m;
	printf("\n");
	printf("          ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("          حѧ��ح ���� ح �Ա� ح ���� ح  ��ѧ  ح  Ӣ��  ح  ����  ح ��ѧ ح  �ܷ� ح ƽ����ح ����ح\n");
	for(m=i;m<=j;m++)
	{
	printf("          ----------------------------------------------------------------------------------------------\n");
	printf("          ح%3d ح%s  ح%s    ح%5.1f ح %5.1f  ح %5.1f  ح %5.1f  ح%5.1f ح %5.1f ح%5.1f  ح%2d   ح\n",a[m].num,a[m].name,a[m].sex,a[m].f[0],a[m].f[1],a[m].f[2],a[m].f[3],a[m].f[4],a[m].sum,a[m].ave,a[m].pos);
	
	}
printf("          ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
}

void sum(struct student a[],int n)//�ܷ�
{
	int m;
	for(m=0;m<n;m++)
		a[m].sum=(a[m].f[0]+a[m].f[1]+a[m].f[2]+a[m].f[3]+a[m].f[4]);
	//print(a,0,N-1);

}

void ave(struct student a[],int n)//ƽ����
{
	int m;
	for(m=0;m<n;m++)
		a[m].ave=(a[m].f[0]+a[m].f[1]+a[m].f[2]+a[m].f[3]+a[m].f[4])/5;
	//print(a,0,N-1);

}

void select(struct student a[],int n,int num)//����ѧ��
{ 
	int i;
	for(i=0;i<n;i++)
		if(num==a[i].num)
		{
			print(a,i,i);
			return;
		}
		printf("����ʧ�ܣ�\n");
}

void search(struct student a[],int n,char name[8])//��������
{ 
	
	int i;
	for(i=0;i<n;i++)
		if(strcmp(name,a[i].name)==0) 
		{
			print(a,i,i);
			return;
		}
		printf("����ʧ�ܣ�\n");
}

void sort(struct student a[],int n)//����
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
		printf("ɾ��ʧ�ܣ�������");
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
	printf("�ռ��������������������!\n"); 
	return 4; 
	} 
	printf("                               �������%d��ѧ������Ϣ��ѧ�ţ����������ſεĳɼ���\n\n",n);
	int i; 
	for(i=n; i<4; i++) {
		printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
		printf("                               �������%d��ѧ����ѧ�ţ�\n",i+1);
		printf("                               >>>");
		scanf("%d",&a[i].num);

		printf("                               �������%d��ѧ����������\n",i+1);
		printf("                               >>>");
		scanf("%s",&a[i].name);

		printf("                               �������%d��ѧ�����Ա�\n",i+1);
		printf("                               >>>");
		scanf("%s",&a[i].sex);

		printf("                               �������%d��ѧ�������ſγɼ����м��ÿո������\n",i+1);
		printf("                               >>>");
		scanf("%f %f %f %f %f",&a[i].f[0],&a[i].f[1],&a[i].f[2],&a[i].f[3],&a[i].f[4]);
		a[i].sum=0;
		a[i].ave=0;
	}
	return 4; 
	
} 
