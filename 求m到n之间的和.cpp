/*
	2019��2��1��12:24:37
		 
*/ 

#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;
	printf("�������������ݣ�");
    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

int sum(int m, int n) 
{
  int sum = 0;
  
  while (m <= n)
  {
    sum = sum + m;
    m++;
  }
  return sum;
}
