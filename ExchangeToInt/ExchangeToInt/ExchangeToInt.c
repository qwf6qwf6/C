#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//整形提升，表达式中的字符或者短整型在内存中存储会被升级为普通整形（int或者unsigned int）
//整形运算要在cpu的相应计算器件中进行，cpu中整形计算器（ALU）的操作长度一般就是普通整形类型，同时也是cpu通用寄存器的长度
//有符号的高位都补充其符号位，比如char a=1;本来是8bit的就是其余24位补0，无符号数统一补0,变回来的时候高位截断，低位保留
int main()
{
	char a = 400;
	//00000000000000000000000110010000
	char b = 400;
	//00000000000000000000000110010000
	char c = a + b;
	//00000000000000000000001100100000
	//高位截断后剩下00100000(溢出的被截断掉了)
	//整型提升为00000000000000000000000000100000--补码
	//对于正数（二进制0开头的），原码等于补码，所以就是2^5=32
	char q = 200;
	//00000000000000000000000011001000
	char w = 200;
	//00000000000000000000000011001000
	char f = q + w;
	//00000000000000000000000110010000
	//高位截断后剩下10010000
	//打印时发生整形提升变成11111111111111111111111110010000--补码
	//打印的是原码          10000000000000000000000001110000（取反+1），就是-(2^6+2^5+2^4)=-(64+32+16)=-112
	printf("c=%d,f=%d", c,f);
	//算术转换:当两个操作符类型不同的时候，除非一个类型转化为另一个类型，不然无法计算，转化按照long double，double,float,unsigned long int,long int,sunsigned int,int(char 和short会整形提升为int)，右边的会转化为左边的（占用内存小的转为为占用内存大的）
	return 0;
}