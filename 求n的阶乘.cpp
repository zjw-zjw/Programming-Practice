/*
	�ݹ���⣺n�Ľ׳� 
	
	������ 
		A: n��= 1  (n=0����n=1)
		B: n��= n * (n-1)�� (n>1)
	�ɵڶ�ʽ�ӿ��Կ�������n�Ľ׳˵��������ת��Ϊ��(n-1)�Ľ׳˵����⣬��(n-1)�Ľ׳��ֿ���ת��Ϊ
	��(n-2)�Ľ׳˵����⡣����һ�����������n=1ʱ�Ϳ���Aʽֱ�Ӹ�������� 
*/ 
#include <stdio.h>

//�������� 
int jieCheng(int); 

//������ 
int main(void) 
{
	int n;
	printf("������һ�����֣�");
	scanf("%d", &n);
	
	//���ú���
	int result = jieCheng(n);
	
	//������
	printf("%d��= %d",n,result); 
	
	return 0;
}

//��׳˺���
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
 
