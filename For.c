#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int q;
	char w;
	for (q = 1; q*q*q <= 10086; q += 3)//for��������ʼ��;����;�����仯��//���������ʱ��q++��++q��û�������
	{
		printf("q=%d\n", q);
	}
	for (w = 'a'; w <= 'z'; w++)//for�ڵı�������Ϊ�ַ�����Ϊ���������ʱ���Ƕ�Ӧ��ASCII��仯
	{
		printf("%c��ASCII��Ϊ%d,", w, w);
		if ((w-97) % 3 == 2)//ÿ��n��ִ��һ��if(��w-t��%n=n-1),w-tʹ�ó�ʼֵΪ0
			printf("\n");
	}
	return 0;
}