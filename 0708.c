#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BF(int *x, int *y, int m, int n)//暴力查找
{
	int i, j;
	for (j = 0; j <= n - m; ++j) //首先遍历一遍文本串
	{
		for (i = 0; i < m && x[i] == y[i + j]; ++i)
		{
			if (i >= m)
			{
				return j;
			}	
		}
	}
}


int main()
{
	char x []= "eerrtty";
	char y []= "rt";
	int n, m;
	n = strlen(x);
	m = strlen(y);
	int q = BF(&x, &y, m, n);
	printf("%d\n", q);
	system("pause");
	return 0;
}