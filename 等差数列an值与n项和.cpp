/*
	2019��1��26��18:40:17
	���ܣ� ����Ȳ����е�n���ֵ��n��� 
*/
#include <stdio.h>

//�������� 
int An(int, int, int );//�����n��ֵ 
int Sum (int, int, int );//����n���

//������ 
int main (void) 
{
   //������������������������������
   int a1;//���� 
   int d;//���� 
   int n;//����
   int an;
   int sum;
       
   printf("����������a1=��\n");
   scanf("%d",&a1);
   printf("�����빫��d=��\n");
   scanf("%d",&d);
   printf("����������n=?\n");
   scanf("%d",&n);
     
   an = An(a1, d, n);
   sum = Sum(a1, d, n);
   
   printf("��n���ֵΪan=%d\n", an);
   printf("ǰn���Ϊsum=%d\n", sum);   
    
  return 0;	
} 

//����An����
int An (int a1, int d, int n)
{
	int an1;
	
   	an1 = a1 + (n-1)*d;
	 
	return an1; 
} 

//������n��ͺ���
int Sum (int a1, int d, int n)
{
	int b;//����sum��ֵ
	
	b = n*a1 + n*(n-1)*d/2;
	
	return b;
	
}
