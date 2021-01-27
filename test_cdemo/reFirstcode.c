#include<stdio.h>
/* 测试单个字符'\'在程序中的作用  
int main(){
print\
f("hello world!\n\
*************\
");
return 0;
}
*/

/*测试变量的声明和使用
int main(){
	int a;
	char b;
	float c;
	double d;
	
	a=520;
	b='F';
	c=3.14;
	d=3.141592653;
	
	printf("鱼c工作室创建于2010年的%d\n",a); 
	printf("I love %cish.com!\n",b);
	printf("圆周率是 : %3.2f\n",c);
	printf("圆周率是 : %.2f\n",c);
	printf("精确到小数点后九位的圆周率是: %11.9f\n",d);
	 
	return 0; 
} 
*/

/* #。。。。放在程序开头表示宏定义的预处理 #define 标识符 常量
#define URL "http:////www.fishc.com" 
#define NAME "鱼c工作室"
#define BOSS "小甲鱼"
#define YEAR 2010  
#define MONTH 5
#define DAY 20
int main(){
	printf("%s成立于%d年%d月%d日\n",NAME,YEAR,MONTH,DAY);
	printf("%s是%s创立的--\n",NAME,BOSS);
	printf("%s的域名是%s\n",NAME,URL); 
	return 0; 
}
*/
 
/*sizeof运算符的使用
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

 /*  unsigned 标识符的使用
 int main(){
 	unsigned short i;//不加unsigned默认是signed类型，即可正可负 
	  short j;
	  
	  i=-1;
	  j=-1;
	   
	printf("结果是%u\n",i); 
	 printf("结果是%d",j); 
	 return 0; 
 } 
 */
 
 /* pow函数的使用,默认情况下int是signed类型的在存储单元中有区分正负数的符号位并占用了一个比特位，
 所以不是32位都存储数据，要想精确显示2的32次幂的结果需要声明int为unsigned类型,unsigned类型的
 最小值是0因为它没有负数
  
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
 
  
  /*测试字符和字符串 c语言并没有规定光写个char的时候默认是signed char 还是unsigned char，signed char
  和unsigned char是由编译系统自行规定的

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
//   printf("我的身高是%d厘米!\n",height); 
//   //输出的是-80，显然错误，所以char前应该加标识符unsigned，unsigned的取值范围是0~255 
//    
//   unsigned char right_height;
//   right_height=173;
//   printf("我的身高是%d厘米!\n",right_height);//正确输出身高 
//   
//   char num1_name[3];
//   char num2_name[2] = {'Y','T'}; 
//   num1_name[0]='Z';
//   num1_name[1]='W';
//   num1_name[2]='B'; 
//   printf("学生一: %s\n",num1_name);
//   printf("学生二: %s\n",num2_name); 
//   printf("hello");   

//   []是下标运算符，=是赋值运算符   
//   char a[5]={'F','I','S','H','C'};
//   //要将数组[]里的值变为6，然后{}里结尾处增加一个\0字符
//   //C中规定字符串后面要加\0表示字符串结束如果不加则程序会一直往后面读，此时空间已满会出现乱码 
//   printf("%s\n",a);
//   printf("hello\n");  
//   
//   char b[] = {"ILOVEC\n"}; //这种写法c语言会自动在字符串结尾加\0 
//   char c[] = "哈哈哈哈哈"; //这种写法可以在打印输出中文的时候不出现乱码 
//   printf("%s",b); 
//   printf("%s",c); 
//  return 0; 
  } 
  */
  
  /*运算符和优先级，c中优先级越高对应的优先级数字越小，当不同的数据类型进行运算时
  编译器通常会先将占用硬盘空间较小的数据类型转化为占用硬盘空间大的数据类型
  #include<math.h> 
  int main(){
  	int i,j,k;
	  i=1+2;
	  j=1+2*3;
	  k=i+j+-1+pow(2,3);
	  printf("%d   %d   %d\n",i,j,k);
	  
	  printf("整型输出: %d\n",1+2.2);
	  //这里出错是因为编译器将1转换为浮点型，
	  //然后字符串中的"%d"指示输出的是整型，所以出错 
	  printf("浮点型输出: %f\n",1+2.2); 
  	  
	  //解决方法:用强转符 
	  printf("整型输出: %d\n",1 + (int)2.2); 
	  //	强转整型时会将小数部分直接去掉只留下整数部分 
	  
  	return 0; 
  } 
  */
    
    /*关系表达式和逻辑表达式结合使用时中用0表示假，任何非0数表示真即1*/ 

/*int main(){
	int a=5,b=3;
	int e,f; 
	
	printf("测试一: %d\n",a<b); 
	printf("测试二: %d\n",1<2); 
	printf("测试三: %d\n",a>=b); 
	printf("测试四: %d\n",a>b); 
	printf("测试五: %d\n",a <= b + 1); 
	printf("测试六: %d\n",'a' + 'b'< 'c'); 
	printf("测试七: %d\n",(e=4)>(f=5));
	printf("测试八: %d\n",1+2 && 2+3);
	printf("测试九: %d\n",3+1 || 2==0);
	printf("测试十: %d\n",!(1+2));
	printf("测试十一: %d\n",!0+1<1 || !(3+4));	
	printf("测试十二: %d\n",-1 && 1);
	printf("测试十三: %d\n",'a' - 'b' && 'c');
	printf("测试十四: %d\n",(a=2)>(b=1)); 
	return 0; 
} */
int main(){
int	a=3,b=3;
	(a=0)&&(b=5);
	printf("a = %d ，b=%d\n",a,b);
	(a=1)||(b=5);
	printf("a = %d, b=%d\n",a,b); 
	 
	return 0;  
} 



 
  
