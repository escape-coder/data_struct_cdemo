#include"st_info.h"

void main() {

int i,n,num;
int N=4;
char name[8];
	int delete_pos; 
	struct student a[N];
	printf("                                         ******************************\n");
	printf("                                         ****��ӭʹ��ѧ��ѧ������ϵͳ**\n");
	printf("                                         ****      ��1���           **\n");
	printf("                                         ****      ��2���ܷ�         **\n");
	printf("                                         ****      ��3��ƽ����       **\n");
	printf("                                         ****      ��4����           **\n");
	printf("                                         ****      ��5ɾ��           **\n");
	printf("                                         ****      ��6����           **\n");
	printf("                                         ****      ��7�˳�           **\n");
	printf("                                         ******************************\n\n");
	printf("                               �������%d��ѧ������Ϣ��ѧ�ţ����������ſεĳɼ���\n\n",N);
	for(i=0; i<N; i++) {
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

	for(;;)

	{
	printf("                                         ******************************\n");
	printf("                                         ****��ӭʹ��ѧ��ѧ������ϵͳ**\n");
	printf("                                         ****      ��1���           **\n");
	printf("                                         ****      ��2���ܷ�         **\n");
	printf("                                         ****      ��3��ƽ����       **\n");
	printf("                                         ****      ��4����           **\n");
	printf("                                         ****      ��5ɾ��           **\n");
	printf("                                         ****      ��6����           **\n");
	printf("                                         ****      ��7�˳�           **\n");
	printf("                                         ****      ��8����           **\n");
	printf("                                         ******************************\n\n");
	printf("                               �����빦������\n");
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
				printf("                        �� | -----------------| �� \n");
				printf("                        �� |  8 ��ѧ�Ų��ң�  | �� \n");
				printf("                        �� |  9 ���������ң�  | �� \n");
				printf("                        �� |------------------| �� \n");
				printf("                                     �����빦������\n");
				printf("                               >>>");
				scanf("%d",&n);
				switch(n) {

					case 8:
						printf("��������ҵ�ѧ��");
						scanf("%d",&num);
						select(a,N,num);
						break;
					case 9:
						printf("��������ҵ�����");
						scanf("%s",name);
						getchar();
						search(a,N,name);
						break;
				}
				break;
			case 5:
			      printf("                               ��������Ҫɾ����ѧ��ѧ��\n"); 
			      printf("                               >>>");
			      scanf("%d",&delete_pos); 
			      N=delete_student(a,delete_pos,N);
			      
				break;
			case 6:
			    sort(a,N);
				printf("                               ����ɹ�����1�鿴��\n");
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






