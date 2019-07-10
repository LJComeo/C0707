#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int JudgeNum(int arr[4][4], int n)
{
	int i;
	for (i = 0; i < 16; i++)
	{
		if (arr[i] == n)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int arr[4][4] = {
		1, 2, 8, 9,
		2, 4, 9, 12,
		4, 7, 10, 13,
		6, 8, 11, 15
	};
	int n = JudgeNum(arr, 15);
	if (n)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	//         //q[0]     q[1]       q[2]        q[3]
	//int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };
	//int *q[4];
	//int k;
	//for (k = 0; k < 4; ++k)
	//{
	//	q[k] = &a[k * 3];
	//}
	//printf("%d\n", q[3][1]);//22

	//int i, j, a = 0;
	//for (i = 0; i < 2; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		if (j % 2)
	//			break;
	//		a++;
	//	}
	//	a++;
	//}
	//printf("%d\n", a);//4
	system("pause");
	return 0;
}