/*
	���⣺��һ���Ȳ�����ǰn��ĺ͡�
	
	��������n��͵Ļ���������������ӣ�����s=a1 + a2 + ... + an 
			��Ϊ�ӵڶ��ʼ��ÿһ��ǡ��ǰһ����Ϲ���d��������֪����һ��a1��d��ֵ�Լ���������n���Ϳ������ǰn��ĺ͡� 
*/ 
#include <stdio.h>

int main(void) {
	//�������
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
	�������н���� 
	Type in: a =    d =     n =
	6 5 20
	Sum = 1070
*/
