/*
	2019年1月26日18:40:17
	功能： 计算等差数列第n项的值和n项和 
*/
#include <stdio.h>

//参数声明 
int An(int, int, int );//计算第n项值 
int Sum (int, int, int );//计算n项和

//主函数 
int main (void) 
{
   //定义首项变量，公差变量，项数变量
   int a1;//首项 
   int d;//公差 
   int n;//项数
   int an;
   int sum;
       
   printf("请输入首项a1=？\n");
   scanf("%d",&a1);
   printf("请输入公差d=？\n");
   scanf("%d",&d);
   printf("请输入项数n=?\n");
   scanf("%d",&n);
     
   an = An(a1, d, n);
   sum = Sum(a1, d, n);
   
   printf("第n项的值为an=%d\n", an);
   printf("前n项和为sum=%d\n", sum);   
    
  return 0;	
} 

//定义An函数
int An (int a1, int d, int n)
{
	int an1;
	
   	an1 = a1 + (n-1)*d;
	 
	return an1; 
} 

//定义求n项和函数
int Sum (int a1, int d, int n)
{
	int b;//接收sum的值
	
	b = n*a1 + n*(n-1)*d/2;
	
	return b;
	
}
