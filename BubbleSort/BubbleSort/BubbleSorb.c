#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exchange(int arr[], int sz)
{
	int j = 0;
	int i = 0;
	int flag = 1;
	for (j = 0; j < sz - 1; j++)//ѭ��j-1����Ϊ�ǰ����������ţ�����Ȼʣ�µľ�����С���������
	{
		for (i = 0;i<sz-1-j; i++) //��һ��ѭ����ʵ���ڰѵ�j������ŵ������
		{
			if (arr[i] > arr[i+1])//ֻҪǰһ���Ⱥ�һ�����������ͽ�����Ҳ���ǱȽϴ�������ƶ�
			{
				*(arr+i) = *(arr+i) ^ *(arr+i + 1);
				*(arr+i+1) = *(arr+i) ^ *(arr+i+1);
				*(arr+i) = *(arr+i) ^ *(arr+i + 1);
				flag = 0;
			}
			
		}
		if (flag)//ʶ������Ѿ���·���ź��ˣ��ͽ���
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