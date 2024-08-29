#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exchange(int arr[], int sz)
{
	int j = 0;
	int i = 0;
	int flag = 1;
	for (j = 0; j < sz - 1; j++)//循环j-1次因为是把最大的往后排，那自然剩下的就是最小的在最左边
	{
		for (i = 0;i<sz-1-j; i++) //这一个循环其实是在把第j大的数放到最后面
		{
			if (arr[i] > arr[i+1])//只要前一个比后一个大，这两个就交换，也就是比较大的往后移动
			{
				*(arr+i) = *(arr+i) ^ *(arr+i + 1);
				*(arr+i+1) = *(arr+i) ^ *(arr+i+1);
				*(arr+i) = *(arr+i) ^ *(arr+i + 1);
				flag = 0;
			}
			
		}
		if (flag)//识别如果已经半路就排好了，就结束
			break;
	}
	
}
int main()
{
	int arr[10] = {0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for(i =0;i < sz;i++)
	{
		scanf("%d", arr + i);
	}
	exchange(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d,", *(arr + i));
	}
	printf("\n");
	return 0;
}