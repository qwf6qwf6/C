#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int q;
	char w;
	for (q = 1; q*q*q <= 10086; q += 3)//for（变量初始化;条件;变量变化）//这里调整的时候q++和++q是没有区别的
	{
		printf("q=%d\n", q);
	}
	for (w = 'a'; w <= 'z'; w++)//for内的变量可以为字符，因为它在运算的时候是对应的ASCII码变化
	{
		printf("%c的ASCII码为%d,", w, w);
		if ((w-97) % 3 == 2)//每隔n个执行一次if(（w-t）%n=n-1),w-t使得初始值为0
			printf("\n");
	}
	return 0;
}