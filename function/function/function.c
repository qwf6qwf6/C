#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"add.h"//引入自己建造的同文件要用"",企业中经常会把自己定义的函数放在一个新的源文件中，然后定义放在头文件中，便于分工合作修改文件。划分模块后，每个人负责一个模块，然后通过这种方式整合到一起
//创造头文件的好处1方便多人协作，2程序模块化，3一定程度对函数进行隐藏,||但是有的编译环境不支持多文件编译
void set_arr(int arr[], int sz);//函数声明可以在主调函数外
int main()//main函数也是被编译器指定的一个函数
{
	int x = 1;
	int y = 1;
	printf("%d\n", add(x, y));//xy是实际参数，
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, sz);
	void printchar(int arr[], int sz);//函数调用前要先声明，只要声明就好了，不是定义一定要放前面,定义是一种特殊的声明
	printchar(arr,sz);
	printf("%d", printf("%d", printf("%d", 43)));//链式访问，一个函数的返回值作为另一个函数的参数
	//printf函数，如果成功的话会返回打印再屏幕上字符的个数，最里面的打印43，中间的打印2（最里面的有两个字符），最外面打印1（中间的1个字符）
	return 0;//将0返回给调用main函数的函数，一般返回0为正常执行

}
void printchar(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void set_arr(int arr[], int sz)//形参为一维数组的时候数组大小可以不写,数组传参实际上是传数组的地址，是通过传过去的地址找到访问的，在形参部分访问数组的时候，其实操作的就是主调函数中的数组，所以并未建造新的数组，故形参的数组大小可不写
//形参如果为二维数组行可以省略，列不可以
//数组个数一定要在传参前输入，因为传参后数组降级成一个地址了，无法再求长度了
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
}
