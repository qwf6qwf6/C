#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 1;//初始化
	scanf("%d", &a);
	//while (a > 0)//while(表达式){} 原理：执行完一次循环重新判定，判定真就再进行下次循环,判断假就break，判断
	//{
	//	printf("%d",a--);
	//}
	int b = 0;
	int c = 0;
	while (a > 0)//求某位数的方法，用余数，求这个数是几位数可以再定义一个参数，让他每次循环+1
	{
		b = a % 10;
		printf("%d", b);
		a /= 10;
		c++;//调整数
	}
	printf("这个数是%d位数", c);
	do
	{
		printf("%d", a--);
	}

	while (a > 0);//do while和while与for的区别是，do while至少会执行一次，执行一次后再识别再循环再识别；其他都是先识别再循环，不满足条件可能一次都没有

	
	return 0;
}
