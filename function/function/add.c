#define _CRT_SECURE_NO_WARNINGS 1
int add(int a, int b)//ab是形式参数，是实参的临时拷贝，无实际作用，不被调用就不预留空间，被调用就帮实际参数预留空间，然后将实际参数靠背进去，定义函数一般是返回值类型 函数名字（参数）的形式，无返回值就用void
//形参可以和实参同名，一般不同，形参个数可以没有也可以一个很或者多个，形参个数要和实参一样
//函数返回类型不写的话，编译器会默认返回int类型的
{
	int z = 0;
	z = a + b;
	return z;//返回给调用这个函数的函数，无返回值可以直接写return;注意是这个不能用break，break是跳出循环，只能用在循环中，但是相当于循环中的break，只要返回一个值后这个函数就结束了
	//如果返回值和要求的不一样，会强制类型转化为要求的，比如如果这里写return3.4就会被强制转换成3
	//如果有if语句，则需要必须要return语句，否则可能会报错（会返回不可预测的随机值）
}
