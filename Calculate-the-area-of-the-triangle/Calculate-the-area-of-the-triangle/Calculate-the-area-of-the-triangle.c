#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	float area = 1;
	printf("���������ͨ��1�����ߵĳ���2����һ�нǼ��������ε������������1����2�����������ε����");
	int decide = 0;
	scanf("%d", &decide);
	if (decide == 1)
	{
		printf("�����������ε�������");
		int a,b,c;
		a=b=c= 0;
		scanf("%d%*c%d%*c%d",& a,& b, &c);//��ֵ���Է�%*���ͣ��������Ͷ�����%*c���Ǻ�������ַ���%*d���Ǻ�������
		area = 0.0;
		printf("ʹ�ù�ʽ�����ó������������Ϊ%d", area);

	}
	if (decide = 2)
	{
		printf("�����������ε�����");
		int a, b;
		a = b  = 0;
		scanf("%d %d", &a, &b);
		printf("�����������ߵļн�");
		double c = 1.0;
		scanf("%f", &c);
		double d = sin(c);
		area = a * b * d;
		printf("���ݹ�ʽS=a*b*sinc���ó������ε����Ϊ%d", area);
	}



	return 0;
}