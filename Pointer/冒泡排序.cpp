/*
    2019年1月16日09:42:58
	冒泡排序
*/

# include <stdio.h>

void Bubblesort(int * pArr, int len)
{
	int i,j,t;

	for (i=0; i< len-1; ++i)
	{
		for (j=0; j < len-1-i; ++j)
		{
			if (pArr[j] > pArr[j+1]) // “>” 表示升序, “<” 表示降序
			{
				t = pArr[j];
				pArr[j] = pArr[j+1];
				pArr[j+1] = t;
			}
		}
	}
}

int main (void)
{
	int a[6] = {68, 23, -3, 75, 43, 25};// 对数组a进行升序冒泡排序
	int i;
	Bubblesort(a,6);

	printf ("排序结果为：");
    for (i = 0; i < 6; ++i)
	{
		printf ("%d ", a[i]);
	}
	printf ("\n");

	return 0;
}