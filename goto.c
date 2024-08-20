#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("1\n");
	goto next;//跳转到指定位置，在多层循环跳出循环好用，但是尽量少用，会打乱代码运行顺序
	printf("2");
next:
	printf("跳过了2");
	return 0;
}