#include<stdio.h>
#include<string.h>
//#define N 2
struct student
{
  int num;//ѧ��
  char name[8];//����
  char sex[1];//�Ա� 
  float f[5];//���ſγ�
  float sum;//�ܷ�
  float ave;//ƽ����
  int pos;//���� 
   
};
void print(struct student a[],int i,int j);
void sum(struct student a[],int n);
void ave(struct student a[],int n);
void select(struct student a[],int n,int num);
void sort(struct student a[],int n);
void search(struct student a[],int n,char name[8]);

int delete_student(struct student a[],int num,int n); //����ѧ��ɾ��ѧ����Ϣ 
int insert_student(struct student a[],int n);//������� 
