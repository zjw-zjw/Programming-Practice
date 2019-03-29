/*
	2019年2月25日09:34:10
	问题：求一元二次方程 ax^2 + bx + c = 0 的根。
	
	分析：这是一般性的一元二次方程的求解问题。为此，要考虑到各种可能的情况，即；
	      系数a, b, c的取值
		A:如果a，b都为0，则原方程退化，不再是方程了； 
		B:如果a是0，b不是0，则方程退化为一次方程，只有一个根，其值为 x = -c/b； 
		C:如果a不是0，而c是0，则方程有两个根，其值分别是 -b/a 和 0;
		D:如果a和c都不为0，则可以利用求根公式计算：
				x1 = [-b + sqrt(b^2 - 4ac)] / 2a
				x2 = [-b - sqrt(b^2 - 4ac)] / 2a
			当b^2 - 4ac >= 0时，有两个实数根；当b^2 - 4ac < 0时，方程有两个虚数根。 
*/ 
#include <stdio.h>
#include <math.h>

int main(void) {
	//定义系数
	double a, b, c;
	
	//定义判别式的值
	double deta;
	
	//定义实部和（可能的）虚部
	double re, im;
	
	printf("Input values of a, b, c\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if(a == 0.0 && b == 0.0) 
	{
		printf("The equation is degenerate.\n"); // 如果a，b都为0，则原方程退化，不再是方程了；
	} 
	else if(a == 0.0) 
	{
		printf("Single root:x=&f\n", -c/b); // 如果a是0，b不是0，则方程退化为一次方程，只有一个根，其值为 x = -c/b；
	} 
	else if(c == 0.0) 
	{
		printf("Two roots:x1=%f,x2=%f\n", 0.0, -b/a); // 如果a不是0，而c是0，则方程有两个根，其值分别是 -b/a 和 0; 
	} 
	else
    {
		re = -b / (2.0 * a); // 实数部分 
		deta = pow(b,2) - 4*a*c;
		im = sqrt(fabs(deta)) / (2.0 * a); // 虚数部分 
		
		if(deta >= 0.0) {
			printf("Two roots: x1 = %f\tx2 = %f\n",re + im, re - im);
		} else {
			printf("Two complex roots:\n");
			printf("x1 = %f+%fi\tx2 = %f+&fi\n", re, im, re, im);
		}
	}
	
	return 0;
}
