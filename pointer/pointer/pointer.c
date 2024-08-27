#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()//内存单元的编号==地址==指针
{
	int a = 0x11223344;
	char b = 'w';
	int* c = &a;//int*类型存储地址类型（int说明c指向的对象为int类型的，*说明c为指针变量），c被称为指针变量（&a就是取出了a的地址存放在c，c就是用来存放地址的，地址就是指针）
	//指针变量的大小：指针变量是为了存放地址的，所以地址多大指针变量就多大（32位时有32根地址线，指针就占用32个bit（二进制位），也就是32/8=4个字节大小，64位有64根地址线，也就是32位的两倍8个字节大小）
	//指针类型只改变指针解引用的时候访问的字节个数（访问的字节个数==类型占用字节的个数，比如int*就访问int类型占用的字节个数，即为4个字节，char*就只访问1个字节），不改变指针变量的大小，只要平台相同，指针变量大小就相同
	char *d = &b;//char* d或者char *d都可以
	printf("c=%p\nd=%p\na=%d\n", c,d,a);
	*c = 1;//解引用操作符（间接访问操作符），通过c存放的地址来找到a，解引用*和取地址&可以看成相反的步骤
	printf("a=%d\n", a);
	int n = 0x11223344;
	int* pi = &n;
	char* pn = &n;
	*pi = 0;
	int m = 0x11223344;
	char* pc = &m;
	*pc = 0;//调整监视和内存可以看到pi使得n的内容都变成0了，但是pc仅仅使得m的第一个字节变成0，因为char*识别m为char，所以更改的时候只改一个字节（char仅仅只占一个字节）
	printf("&n  =%p\n",&n);
	printf("pi  =%p\n", pi);
	printf("pi+1=%p\n",pi+1);
	printf("pn  =%p\n",pn);
	printf("pn+1=%p\n", pn+1);//地址加减n就是加减它的类型所占字节数*n，比如int*就是加减4n，char*就是加减n，即加减sizeof（类型去掉*）
	void* qwf = &n;//void*是没有具体类型的指针（泛型指针），可以接受任意类型的地址，但是不能直接进行加减或者解引用，一般仅用来存放地址
	*(int*)qwf = 1;//可以用强制转换后进行加减或者解引用
	return 0;
}