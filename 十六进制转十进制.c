/*
	十六进制转十进制 
*/ 
#include <stdio.h>
#include <string.h>
#include <math.h>


#define N 20
int main()
{
	int t, i;
	char s[N];
	long sum = 0;
	scanf("%s", s);
	for(i=strlen(s)-1; i>=0; i--){
		if(s[i]>='A' && s[i]<='F'){
			t = s[i] - 'A' + 10;
		}
		if(s[i]>='0' && s[i]<='9'){
			t = s[i] - '0';
		}
		sum += t * pow(16, (float)(strlen(s)-i-1));
	}
	printf("%ld\n", sum);
	
	return 0;	
} 
