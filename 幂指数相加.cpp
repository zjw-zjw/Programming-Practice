/*
	问题：计算3^0 + 3^1 + 3^2 + ... + 3^20
	
	分析：这是一个幂指数相加的例子，指数从0到20，底数为3 
*/
#include <stdio.h>

int main (void) {
	long sum = 1;
	long mul = 1;
	int i;
	int j;

	for (i = 1; i <= 20; i++) {
		for(j = i; j > 0; j--){
			mul = mul * 3;
		}
		sum = sum + mul;
		mul = 1;
	}

	printf("结果为%ld\n", sum);
	
	return 0;
}
