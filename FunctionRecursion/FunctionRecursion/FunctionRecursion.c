#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��n�Ľ׳�(�õݹ鷽����)����ʾ:n!=n*(n-1)!
int fact(int n)
{
	if (n == 0)//��������,ÿ�κ������ö�ҪΪ��ε�����ջ������ռ䣨���ռ��������ʱ��ջ,���ߺ���ջ֡�ռ䣩,�ع��ʱ����������ռ䣬���û����������һֱ����ռ�ᵼ��ջ�����
		return 1;
	else
		return n * fact(n - 1);
}



int main()
{
	int n = 0;
	scanf("%d", &n);
	int r = fact(n);
	printf("%d", r);
	return 0;
}
//�ݹ��ŵ�:��࣬��˵��,�ܿ�����뵽
//�ݹ�ȱ��:Ч��û�����ߣ�����һ������ջ���ռ䣬ռ���ڴ��