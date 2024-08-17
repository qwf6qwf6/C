#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	while (scanf("%d%*c%d", &a, &b) != EOF)/*     % *为赋值忽略符号，本质上是读取后就丢弃，%* c为忽略这个字符
	EOF，即End Of File，在头文件stdio.h里面，这里加入！=EOF是为了防止程序进入死喜欢
	while循环（）内为条件，{}内为循环的东西*/
	{
		if (a > b)//表示a大于b
			printf("%d>%d\n", a, b);
		if (a >= b)//表示a大于等于b
			printf("%d>=%d\n", a, b);
		if (a < b)//表示a小于b
			printf("%d<%d\n", a, b);
		if (a <= b)//表示a小于等于b
			printf("%d<=%d\n", a, b);
		if (a == b)//表示a等于b，值得注意的是赋值是单个=，判断相等是两个=。即==
			printf("%d=%d\n", a, b);
		if (a != b)//表示a不等于b
			printf("%d!=%d", a, b);
	}//输出后可以发现是从上往下顺序输出的因为c语言也有顺序，从上往下依次执行，
	return 0;
}