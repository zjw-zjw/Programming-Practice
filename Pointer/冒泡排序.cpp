/*
    2019��1��16��09:42:58
	ð������
*/

# include <stdio.h>

void Bubblesort(int * pArr, int len)
{
	int i,j,t;

	for (i=0; i< len-1; ++i)
	{
		for (j=0; j < len-1-i; ++j)
		{
			if (pArr[j] > pArr[j+1]) // ��>�� ��ʾ����, ��<�� ��ʾ����
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
	int a[6] = {68, 23, -3, 75, 43, 25};// ������a��������ð������
	int i;
	Bubblesort(a,6);

	printf ("������Ϊ��");
    for (i = 0; i < 6; ++i)
	{
		printf ("%d ", a[i]);
	}
	printf ("\n");

	return 0;
}