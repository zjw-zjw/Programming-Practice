/*
	问题：换零钱问题。把一元钱兑换成1分、2分、5分的硬币，共有多少种换法？
	
	分析：
		A:设5分硬币个数为i，则i的取值范围为0~20
		B:设2分硬币个数为j，则j的取值范围为0~（100 - 5*i）/ 2 
		C:一份的硬币范围为100 - 5*i - 2*j 
*/ 
#include <stdio.h>

int main(void) {
	int i, j;
	int m = 0;
	for(i=0; i <= 20; i++) {
		for(j=0; j <= (100-5*i)/2; j++) {
			if(m%10 == 0) {
				printf("\n");
			}	
			++m;
				
			printf("%d\t%d\t%d\n", i, j, 100-5*i-2j);
		}
	}
	printf("\nm=%d\n", m);
	return 0;
} 
