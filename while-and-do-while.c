#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;//��ʼ��
	scanf("%d", &a);
	//while (a > 0)//while(���ʽ){} ԭ��ִ����һ��ѭ�������ж����ж�����ٽ����´�ѭ��,�жϼپ�break���ж�
	//{
	//	printf("%d",a--);
	//}
	int b = 0;
	int c = 0;
	while (a > 0)//��ĳλ���ķ���������������������Ǽ�λ�������ٶ���һ������������ÿ��ѭ��+1
	{
		b = a % 10;
		printf("%d", b);
		a /= 10;
		c++;//������
	}
	printf("�������%dλ��", c);
	do
	{
		printf("%d", a--);
	}

	while (a > 0);//do while��while��for�������ǣ�do while���ٻ�ִ��һ�Σ�ִ��һ�κ���ʶ����ѭ����ʶ������������ʶ����ѭ������������������һ�ζ�û��

	
	return 0;
}
