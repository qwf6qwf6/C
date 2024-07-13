#include<stdio.h>
int main()
{
	float a = 20.0f;
	float b = 30.0f;
	int c = 20;
	int d = 30;
	printf("a+b=%d\n", a + b);//加法
	printf("c+d=%d\n", c + d);
	printf("a-b=%d\n", a - b);//减法
	printf("c-d=%d\n", c - d);
	printf("a*b=%d\n", a * b);
	printf("c*d=%d\n", c * d);
	printf("a/b=%f\n", a / b);
	printf("c/d=%f\n", c / d);//求商，变量类型不变，两个都为整数，只能求出整数部分。有一个为小数算出来就可以为小数
	printf("%d\n", c % d);
	printf("%d\n", 20 % -6);
	printf("%d\n", -20 % 6);//求模（余数），要求两边都要是整数,且+-号看第一个数
	printf("(100/30)*30=%d\n", (100 / 30) * 30);
	printf("(100/30.0)*30.0=%d\n", (100 / 30.0f) * 30);
	int q = 20;
	int w = 30;
	int f = 40;//变量初始化,变量最好都初始化一下，不然有的编译器上容易报错，并且局部变量未初始化时值是随机的
	q = w = f + 10;//连续赋值从右往左依次赋值
	q += 10;//也可写作q=q+10，即自身加上10，-*/%同理
	printf("q=%d", q);
	printf("w=%d", w);
	printf("f=%d\n", f);
	int x = 1;
	int m = 1;
	int y = 10;
	int z = 20;
	y = ++x;//前置++，先++再使用，可看作先x=x+1再y=x(--同理)
	z = m++;//后置++，先使用后++，可看作先z=x再x=x+1（--同理）
	printf("y=%d", y);
	printf("z=%d\n", z);
	int n = 1;
	int j = -n;//正负，+没变，-取相反数
	printf("j=%d\n", j);
	double e = 3.14;
	int g = (int)e;//强制转化类型(类型)
	printf("%d\n", g);
	return 0;
}