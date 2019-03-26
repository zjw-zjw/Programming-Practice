#include <stdio.h>
int ddd(int a[],int de);
main ()
{
	int i,j,de,a[64];
	printf("Enter de number:\n");
	scanf("%d",&de);
	j=ddd(a,de);
	for(i=j;i>=0;i--)
		printf("%d",a[i]);
}
int ddd(int a[],int de)
{
	int i=0,re;
	while(de>0)
	{
		re=de%2;
		de=de/2;
		a[i++]=re;
		if(de<2)
		{
			a[i]=de;
			break;
		}
	}
	return i;
}