/*
	问题：求各位数字的立方和等于1099的三位数
	
	分析：
		A:设百位数字为a，十位数字为b，个位数字为c
		B:a的取值范围为1-9，b的取值范围为0-9，c的取值范围为0-9
		C:1099 = a*a*a + b*b*b + c*c*c；
		D:结果为：100*a + 10*b + c； 
*/

#include <stdio.h>

int main (void)
{
	int a;
	int b;
	int c;
	
	for(a=1; a<=9; a++)
	{
		for (b=0; b<=9; b++)
		{
			for(c=0; c<=9; c++)
			{
				if(1099 == a*a*a + b*b*b + c*c*c)
				{
					printf("%d\n", 100*a + 10*b + c);
				}
			}
		}
	}
	
	return 0;
}

