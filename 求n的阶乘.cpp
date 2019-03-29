/*
	递归求解：n的阶乘 
	
	分析： 
		A: n！= 1  (n=0或者n=1)
		B: n！= n * (n-1)！ (n>1)
	由第二式子可以看出，求n的阶乘的问题可以转化为求(n-1)的阶乘的问题，而(n-1)的阶乘又可以转换为
	求(n-2)的阶乘的问题。这样一步步化简，最后当n=1时就可由A式直接给出结果。 
*/ 
#include <stdio.h>

//函数声明 
int jieCheng(int); 

//主函数 
int main(void) 
{
	int n;
	printf("请输入一个数字：");
	scanf("%d", &n);
	
	//调用函数
	int result = jieCheng(n);
	
	//输出结果
	printf("%d！= %d",n,result); 
	
	return 0;
}

//求阶乘函数
int jieCheng(int n)
{
   
   if (n > 1){
   	  	n = n * jieCheng(n-1);
   	  	return n;
   } else if(n==0) {
   		return 1;
   }else {
   		return 1; 
   }
} 
 
