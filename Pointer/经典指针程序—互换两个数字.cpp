/*
    2019年1月13日16:07:06

*/

# include <stdio.h>

//在函数声明这里可以不用写形参
void huhuan_1(int , int );
void huhuan_2(int *, int *);


int main (void)
{
	int a = 3;
	int b = 5;
 
    huhuan_2(&a,&b);  // huhuan_2(*p,*q);是错误的   huhuan_2(a,b);也是错误的
	printf ("a =%d, b =%d\n", a, b);

	return 0;
}

//该函数不能实现互换功能
void huhuan_1(int a,int b)
{
	int t;
	
	t = a;
	a = b;
	b = t;
    
	return ;
}

//该函数可以完成互换功能
void huhuan_2(int *p, int *q)
{
	int t;//如果要互换*p 和 *q 的值，t必须定义为int型，不能定义为 int * 类型

	t = *p; //*p 等同于a 
	*p = *q;// *q 等同于b
	*q = t;

	return ;
}
