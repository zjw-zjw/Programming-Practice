/*
	问题：计算1/1 * 2 + 1/2 * 3 + 1/3 * 4 + ... + 1/n * (n+1) , n = 20。
	
	分析： 用一个for循环即可
		注意：统计变量sum要定义为 double型或者float型 
*/ 
#include <stdio.h>

int main (void) {
	
	double n;
	double sum = 0;
	
	for(n=1; n <= 20; n++){
		sum = sum + 1/n * (n+1);
	}
	
	printf("结果为：%lf\n", sum); // float型的结果为：23.597742 
								  // double型的结果为：23.597740 
	return 0;
}
