/*
	问题：求一个等差数列前n项的和。
	
	分析：求n项和的基本方法是逐项相加，即：s=a1 + a2 + ... + an 
			因为从第二项开始，每一项恰是前一项加上公差d。这样，知道第一项a1和d的值以及所求项数n，就可以求出前n项的和。 
*/ 
#include <stdio.h>

int main(void) {
	//定义变量
	int a, d, n, i;
	int ai, sum;	
	
	printf("Type in: a = \td = \tn = \n");
	scanf("%d%d%d", &a, &d, &n);
	
	ai = a;
	for(i=0; i < n; i++) {
		sum += ai;
		ai += d;
	}
	
	printf("Sum = %d\n", sum);
	 
	return 0;
}
/*
	----------------------
	程序运行结果： 
	Type in: a =    d =     n =
	6 5 20
	Sum = 1070
*/
