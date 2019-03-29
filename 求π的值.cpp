/*
	问题：利用参考级数1 - 1/3 + 1/5 - 1/7 + ... = π/ 4 可以求出π的近似值。
		  很显然，如果要求PI的精度越高，则计算的项数越多。我们可以指定一个精度要求，如10^-7.
		  当最后一项的绝对值小于10^-7时，就认为达到该值了。 
*/
#include <stdio.h>
#include <math.h>

int main(void) {
	//定义变量
	double sign; //每一项的符号 
	double n;  // 分母 
	double temp; // 每一项的值 
	double Pi;
	
	//赋初值
	sign = 1.0;
	n = 1.0;
	temp = 1.0;
	Pi = 0;
	
	while(fabs(temp) >= 1e-7) {
		Pi += temp;
		sign = -sign;
		n += 2;
		temp = sign/n;
	} 
	Pi *= 4;
	
	printf("PI = %f\n", Pi);
	
	return 0;
}
