/*
    2019��1��13��16:07:06

*/

# include <stdio.h>

//�ں�������������Բ���д�β�
void huhuan_1(int , int );
void huhuan_2(int *, int *);


int main (void)
{
	int a = 3;
	int b = 5;
 
    huhuan_2(&a,&b);  // huhuan_2(*p,*q);�Ǵ����   huhuan_2(a,b);Ҳ�Ǵ����
	printf ("a =%d, b =%d\n", a, b);

	return 0;
}

//�ú�������ʵ�ֻ�������
void huhuan_1(int a,int b)
{
	int t;
	
	t = a;
	a = b;
	b = t;
    
	return ;
}

//�ú���������ɻ�������
void huhuan_2(int *p, int *q)
{
	int t;//���Ҫ����*p �� *q ��ֵ��t���붨��Ϊint�ͣ����ܶ���Ϊ int * ����

	t = *p; //*p ��ͬ��a 
	*p = *q;// *q ��ͬ��b
	*q = t;

	return ;
}
