#include<stdio.h>
#include<stdbool.h>//使用bool函数必带
int main()
{
	long long a = 10;
	int b = 20;
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));//int为整数型，int有int,short int,long int,long long int，还可加上signed和unsigned，直接写默认带signed，signed为有符号（正负都可）输出为%d，unsigned为无符号（非负整数）输出为%u（C语言规定long int长度>=int）
	printf("%zd\n", sizeof(char));//char为字符型，可分为有无符号，signed和unsigned
	printf("%zd\n", sizeof(float));//float为单精度浮点型，值得注意的是直接写小数默认为double型，结尾加f为float型，如3.1为double型，3.1f为float型
	printf("%zd\n", sizeof(double));//double为双精度浮点型
	printf("%zd\n", sizeof(long double));//long double为长双精度浮点型
	printf("%zd\n", sizeof(bool));//bool判断真假，ture为1，false为0（早期C语言中0为假，非0为真），记得必须带#include<stdbool.h>
	printf("%zd\n", sizeof(int));//sizeof关键字可以计算类型、变量或者表达式的长度（不可计算自己，即sizeof），单位为字节（Byte），1Byte=8bit（二进制一个单位长度），1KB=1024Byte
	printf("%zd\n", sizeof(a));//sizeof关键字返回的为size_t类型的，需用%zd
	printf("%zd\n", sizeof a);//变量可以不用（），类型和表达式必须（）
	printf("%zd\n", sizeof(a = b + 1 + 1));
	printf("a=%zd\n", a);//sizeof中的表达式不会真实计算，纯靠类型推断，1和1和b都为长度为4字节的int类型，a=b+1+1意思是将b+1+1放入a中，因为a是长度为8的long类型，所以计算出来还是看a的长度
	return 0;
}