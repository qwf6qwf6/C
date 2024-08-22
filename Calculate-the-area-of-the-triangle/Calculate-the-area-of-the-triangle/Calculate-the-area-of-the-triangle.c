#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main()
{
	float area = 1;
	printf("本程序可以通过1三条边的长度2两边一夹角计算三角形的面积，请输入1或者2来计算三角形的面积");
	int decide = 0;
	scanf("%d", &decide);
	if (decide == 1)
	{
		printf("请输入三角形的三条边");
		int a,b,c;
		a=b=c= 0;
		scanf("%d%*c%d%*c%d",& a,& b, &c);//赋值忽略符%*类型，解析完后就丢弃，%*c就是忽略这个字符，%*d就是忽略数字
		area = 0.0;
		printf("使用公式：，得出该三角形面积为%d", area);

	}
	if (decide = 2)
	{
		printf("请输入三角形的两边");
		int a, b;
		a = b  = 0;
		scanf("%d %d", &a, &b);
		printf("请输入这两边的夹角");
		double c = 1.0;
		scanf("%f", &c);
		double d = sin(c);
		area = a * b * d;
		printf("根据公式S=a*b*sinc，得出三角形的面积为%d", area);
	}



	return 0;
}