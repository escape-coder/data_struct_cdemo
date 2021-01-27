#include<stdio.h>
#include<string.h>
//#define N 2
struct student
{
  int num;//学号
  char name[8];//姓名
  char sex[1];//性别 
  float f[5];//五门课程
  float sum;//总分
  float ave;//平均分
  int pos;//排名 
   
};
void print(struct student a[],int i,int j);
void sum(struct student a[],int n);
void ave(struct student a[],int n);
void select(struct student a[],int n,int num);
void sort(struct student a[],int n);
void search(struct student a[],int n,char name[8]);

int delete_student(struct student a[],int num,int n); //根据学号删除学生信息 
int insert_student(struct student a[],int n);//插入操作 
