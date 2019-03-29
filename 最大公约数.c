/*
	求两个正整数的最大公约数 
*/
#include <stdio.h> 

int main()
{
	int n, m, r;
	int temp;
	scanf("%d%d", &n, &m);
	if( n > m){
		temp = m;
		m = n;
		n = temp;
	}
	while( n != 0 ){
		r = m % n;
		if( r == 0) { 
			break;
		}
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}
