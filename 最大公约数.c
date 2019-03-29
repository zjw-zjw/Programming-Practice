/*
	求两个正整数的最大公约数 
*/
#include <stdio.h> 

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	if( n > m){
		temp = m;
		m = n;
		n = temp;
	}
	return 0;
}
