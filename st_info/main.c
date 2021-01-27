#include"st_info.h"

void main() {

int i,n,num;
int N=4;
char name[8];
	int delete_pos; 
	struct student a[N];
	printf("                                         ******************************\n");
	printf("                                         ****欢迎使用学生学籍管理系统**\n");
	printf("                                         ****      按1输出           **\n");
	printf("                                         ****      按2求总分         **\n");
	printf("                                         ****      按3求平均分       **\n");
	printf("                                         ****      按4查找           **\n");
	printf("                                         ****      按5删除           **\n");
	printf("                                         ****      按6排序           **\n");
	printf("                                         ****      按7退出           **\n");
	printf("                                         ******************************\n\n");
	printf("                               请输入第%d个学生的信息（学号，姓名及五门课的成绩）\n\n",N);
	for(i=0; i<N; i++) {
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

	for(;;)

	{
	printf("                                         ******************************\n");
	printf("                                         ****欢迎使用学生学籍管理系统**\n");
	printf("                                         ****      按1输出           **\n");
	printf("                                         ****      按2求总分         **\n");
	printf("                                         ****      按3求平均分       **\n");
	printf("                                         ****      按4查找           **\n");
	printf("                                         ****      按5删除           **\n");
	printf("                                         ****      按6排序           **\n");
	printf("                                         ****      按7退出           **\n");
	printf("                                         ****      按8插入           **\n");
	printf("                                         ******************************\n\n");
	printf("                               请输入功能数字\n");
	printf("                               >>>");
		scanf("%d",&n);
		switch(n) {
			case 1:
				print(a,0,N-1);
				break;
			case 2:
				sum(a,N);
				break;
			case 3:
				ave(a,N);
				break;
			case 4:
				printf("\n");
				printf("                        ★ | -----------------| ★ \n");
				printf("                        ★ |  8 按学号查找：  | ★ \n");
				printf("                        ★ |  9 按姓名查找：  | ★ \n");
				printf("                        ★ |------------------| ★ \n");
				printf("                                     请输入功能数字\n");
				printf("                               >>>");
				scanf("%d",&n);
				switch(n) {

					case 8:
						printf("请输入查找的学号");
						scanf("%d",&num);
						select(a,N,num);
						break;
					case 9:
						printf("请输入查找的姓名");
						scanf("%s",name);
						getchar();
						search(a,N,name);
						break;
				}
				break;
			case 5:
			      printf("                               请输入你要删除的学生学号\n"); 
			      printf("                               >>>");
			      scanf("%d",&delete_pos); 
			      N=delete_student(a,delete_pos,N);
			      
				break;
			case 6:
			    sort(a,N);
				printf("                               排序成功，按1查看吧\n");
				break;
			case 7:
				break;
			case 8:
			   N=insert_student(a,N);	
			   break; 

		}
		if(n==7)break;
	}
}






