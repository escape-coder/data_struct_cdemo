#include<stdio.h>
/* ���Ե����ַ�'\'�ڳ����е�����  
int main(){
print\
f("hello world!\n\
*************\
");
return 0;
}
*/

/*���Ա�����������ʹ��
int main(){
	int a;
	char b;
	float c;
	double d;
	
	a=520;
	b='F';
	c=3.14;
	d=3.141592653;
	
	printf("��c�����Ҵ�����2010���%d\n",a); 
	printf("I love %cish.com!\n",b);
	printf("Բ������ : %3.2f\n",c);
	printf("Բ������ : %.2f\n",c);
	printf("��ȷ��С������λ��Բ������: %11.9f\n",d);
	 
	return 0; 
} 
*/

/* #�����������ڳ���ͷ��ʾ�궨���Ԥ���� #define ��ʶ�� ����
#define URL "http:////www.fishc.com" 
#define NAME "��c������"
#define BOSS "С����"
#define YEAR 2010  
#define MONTH 5
#define DAY 20
int main(){
	printf("%s������%d��%d��%d��\n",NAME,YEAR,MONTH,DAY);
	printf("%s��%s������--\n",NAME,BOSS);
	printf("%s��������%s\n",NAME,URL); 
	return 0; 
}
*/
 
/*sizeof�������ʹ��
int main(){
	int i;
	char j;
	float k;
	
	i=123;
	j='c';
	k=3.14;
	
	printf("Size of int is %d\n",sizeof(int));
	printf("Size of i is %d\n",sizeof(i)); 
	printf("Size of char is %d\n",sizeof(char));
	printf("Size of j is %d\n",sizeof j);
	printf("Size of float is %d\n",sizeof(float));
	printf("Size of k is %d\n",sizeof k); 
	printf("Size of short int is %d\n",sizeof(short int));
	printf("Size of long int is %d\n",sizeof(long int)); 
	printf("Size of long long int is %d\n",sizeof(long long int));
	printf("Size of _Bool is %d\n",sizeof(_Bool));
	printf("Size of double is %d\n",sizeof(double));
	printf("Size of long double is %d\n",sizeof(long double)); 
	return 0; 
} 
*/

 /*  unsigned ��ʶ����ʹ��
 int main(){
 	unsigned short i;//����unsignedĬ����signed���ͣ��������ɸ� 
	  short j;
	  
	  i=-1;
	  j=-1;
	   
	printf("�����%u\n",i); 
	 printf("�����%d",j); 
	 return 0; 
 } 
 */
 
 /* pow������ʹ��,Ĭ�������int��signed���͵��ڴ洢��Ԫ���������������ķ���λ��ռ����һ������λ��
 ���Բ���32λ���洢���ݣ�Ҫ�뾫ȷ��ʾ2��32���ݵĽ����Ҫ����intΪunsigned����,unsigned���͵�
 ��Сֵ��0��Ϊ��û�и���
  
#include<math.h> 
 int main(){
    
// 	unsigned int result=pow(2,32)-1;
//	 printf("result = %u\n",result); 
// 	return 0;
//	 
     
	
//	 int result=pow(2,32)-1;
//	 printf("result = %d\n",result); 
// 	return 0;
    
    
    
//    unsigned int result=pow(2,31)-1;
//	 printf("result = %u\n",result); 
// 	return 0;
     
    
   
    int result=pow(2,31)-1;
	 printf("result = %d\n",result); 
 	return 0;
	
 }
 
 */ 
 
  
  /*�����ַ����ַ��� c���Բ�û�й涨��д��char��ʱ��Ĭ����signed char ����unsigned char��signed char
  ��unsigned char���ɱ���ϵͳ���й涨��

  int main()
  {
 
  //char a='C';
  //printf("%c = %d\n",a,a); 
 
  //int b=0; 
  //printf("%c= %d",b,b); 
  
  //int c=1;
  //printf("%c = %d",c,c); 
  
  //int d=2;
  //printf("%c = %d",d,d); 

   //int e=3;
   //printf("%c = %d",e,e); 
   
   //int f=4;
   //printf("%c = %d",f,f); 
   
   //int g,h,i,k,l;  
   //g=70,h=105,i=115,k=104,l=67;
   //printf("%c%c%c%c%c",g,h,i,k,l);  
   
//   char height;
//   height=173;
//   printf("�ҵ������%d����!\n",height); 
//   //�������-80����Ȼ��������charǰӦ�üӱ�ʶ��unsigned��unsigned��ȡֵ��Χ��0~255 
//    
//   unsigned char right_height;
//   right_height=173;
//   printf("�ҵ������%d����!\n",right_height);//��ȷ������ 
//   
//   char num1_name[3];
//   char num2_name[2] = {'Y','T'}; 
//   num1_name[0]='Z';
//   num1_name[1]='W';
//   num1_name[2]='B'; 
//   printf("ѧ��һ: %s\n",num1_name);
//   printf("ѧ����: %s\n",num2_name); 
//   printf("hello");   

//   []���±��������=�Ǹ�ֵ�����   
//   char a[5]={'F','I','S','H','C'};
//   //Ҫ������[]���ֵ��Ϊ6��Ȼ��{}���β������һ��\0�ַ�
//   //C�й涨�ַ�������Ҫ��\0��ʾ�ַ��������������������һֱ�����������ʱ�ռ�������������� 
//   printf("%s\n",a);
//   printf("hello\n");  
//   
//   char b[] = {"ILOVEC\n"}; //����д��c���Ի��Զ����ַ�����β��\0 
//   char c[] = "����������"; //����д�������ڴ�ӡ������ĵ�ʱ�򲻳������� 
//   printf("%s",b); 
//   printf("%s",c); 
//  return 0; 
  } 
  */
  
  /*����������ȼ���c�����ȼ�Խ�߶�Ӧ�����ȼ�����ԽС������ͬ���������ͽ�������ʱ
  ������ͨ�����Ƚ�ռ��Ӳ�̿ռ��С����������ת��Ϊռ��Ӳ�̿ռ�����������
  #include<math.h> 
  int main(){
  	int i,j,k;
	  i=1+2;
	  j=1+2*3;
	  k=i+j+-1+pow(2,3);
	  printf("%d   %d   %d\n",i,j,k);
	  
	  printf("�������: %d\n",1+2.2);
	  //�����������Ϊ��������1ת��Ϊ�����ͣ�
	  //Ȼ���ַ����е�"%d"ָʾ����������ͣ����Գ��� 
	  printf("���������: %f\n",1+2.2); 
  	  
	  //�������:��ǿת�� 
	  printf("�������: %d\n",1 + (int)2.2); 
	  //	ǿת����ʱ�ὫС������ֱ��ȥ��ֻ������������ 
	  
  	return 0; 
  } 
  */
    
    /*��ϵ���ʽ���߼����ʽ���ʹ��ʱ����0��ʾ�٣��κη�0����ʾ�漴1*/ 

/*int main(){
	int a=5,b=3;
	int e,f; 
	
	printf("����һ: %d\n",a<b); 
	printf("���Զ�: %d\n",1<2); 
	printf("������: %d\n",a>=b); 
	printf("������: %d\n",a>b); 
	printf("������: %d\n",a <= b + 1); 
	printf("������: %d\n",'a' + 'b'< 'c'); 
	printf("������: %d\n",(e=4)>(f=5));
	printf("���԰�: %d\n",1+2 && 2+3);
	printf("���Ծ�: %d\n",3+1 || 2==0);
	printf("����ʮ: %d\n",!(1+2));
	printf("����ʮһ: %d\n",!0+1<1 || !(3+4));	
	printf("����ʮ��: %d\n",-1 && 1);
	printf("����ʮ��: %d\n",'a' - 'b' && 'c');
	printf("����ʮ��: %d\n",(a=2)>(b=1)); 
	return 0; 
} */
int main(){
int	a=3,b=3;
	(a=0)&&(b=5);
	printf("a = %d ��b=%d\n",a,b);
	(a=1)||(b=5);
	printf("a = %d, b=%d\n",a,b); 
	 
	return 0;  
} 



 
  
