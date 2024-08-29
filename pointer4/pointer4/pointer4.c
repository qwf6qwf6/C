#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef void(*ty_t)(int);
void Print(int arr3[][5], int a, int b)
{
	int i = 0, j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("%d", arr3[i][j]);
		}
		printf("\n");
	}
}
void print(int (*arr3)[5], int a, int b)//二维数组传参其实就是传了首元素的地址，对于二维数组首元素就是那个一维数组，也就是这个一维数组的地址,所以在这里就可以写成int(*arr)[5]
{
	int i = 0, j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			printf("%d", *(*(arr3+i)+j));//把上面的arr3[i][j]翻译过来，arr3[i]就是*（arr3+i），所以就是(*(arr3+i))[j],便是*（*（arr3+i）+j）
		}
		printf("\n");
	}
}
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
void(*signal(int x, void(*y)(int)))(int)
{


}
int main()
{
	char* pa = "abcdef";//常量字符串"abcdef"在内存中也有一段连续的存储空间，但它是常量不能修改，这种赋值把字符串中首个字符也就是a的地址赋给ps
	//*ps = 'w';//常量字符串不能被修改，这样程序会崩，
	const char* pb = "bcdef";//所以一般常量的指针写const以防试图改变常量的时候不报错，减少调试时间
	printf("%c\n", "abcdef"[0]);//相当于打印了字符串中下标为0的那个字符
	printf("%s\n", pb);//也可以用pb来打印字符串
	char str1[] = "abc";
	char str2[] = "abc";
	const char* str3 = "abc";
	const char* str4 = "abc";
	if (str1 == str2)//12的首元素地址
		printf("12Ture\n");
	else
		printf("12False\n");
	if (str3 == str4)
		printf("34Ture\n");
	else
		printf("34False\n");
	//可以发现12的地址不同，因为针对的是两个不同的数组，但是34同因为都是针对常量abc
	
	//数组指针变量：存放数组的地址
	int arr[10] = { 0 };
	arr;
	&arr[0];//这两种都是首元素的地址
	int (*parr)[10] = &arr;//要和指针数组int *parr[10]区别开来，这里用（）使得parr和*结合起来了，这里的10不能省略，类型是int(*)[10]
	int* arr2[9];
	int* (*parr2)[9] = &arr2;//存放指针数组arr2的地址,类型是int*(*)[9]
	//如果parr2+1就是跳过x86：4*9=36个字节或者x64：8*9=72个字节，因为它是int*（*）[9]类型的，它跳过的时候就是就是按照它解引用后的int*[9]跳的，这个是x86：4*9=36字节或者x64：8*9=72字节的
	//如果是parr+1就是跳过4*10个字节的，因为它跳过的时候是按照int[10]跳过的，就是跳过4*10个字节
	//parr是&arr，所以*parr就是*&arr，也就是arr,*parr的时候拿到的是整个数组,所以还可以用*parr[i]来取出数组中下标为i的元素
	
	//二维数组传参的本质

	int arr3[3][5] = { 1,2,3,4,5,5,4,3,2,1,1,2,3,4,5 };
	Print(arr3, 3, 5);//二维数组传参，实参是数组名，也便是首元素地址
	print(arr3, 3, 5);

	//函数指针变量
	int c = Add(1, 2);
	printf("%p\n", &Add);
	printf("%p\n", Add);//&函数名 和 函数名 都代表函数的地址（不存在函数首元素的地址的说法）
	int(*pAdd)(int, int) = &Add;//形参名字可加可不加
	printf("%p\n", pAdd);
	int* p, q;//鼠标靠近可以发现p为整形指针，q为整形，因为*实际上是表示*后面一个变量是指针的类型
	printf("%d\n", (*pAdd)(1,2));//可以通过解地址来使用该函数（*可以不写）
	printf("%d\n", (pAdd)(1, 2));//*可以不写（*其实是摆设，甚至可以写成*******pAdd）

	//判断

	(*(void(*)())0)();//void(*)()是函数指针类型，(void(*)())0就是把0强制转换成函数类型指针void(*)()类型的，所以*（void(*)()0）就是把地址为0的地方解引用成void类型函数，也就是前面的(*(void(*)())0)类似于读取地址为0的地方的函数，后面的（）代表的是无参数
	void(*signal(int,void(*)(int)))(int);//先看signa(int,void(*)(int))就是signa函数的参数是int类型的和void(*)(int)类型的，类似函数声明，但是缺少了返回值类型，刚好void（*）（int）就是返回类型是void参数是int的函数的指针，所以其实可以看成void（*）（int）signa(int,void(*)(int))//但是语法不支持这么写，就是返回类型是void（*）（int）的，参数是int和void(*)(int)的，函数名是signa的函数；
	//该函数名称为signa
	//这句代码是声明一个函数
	//生命的函数是signa
	//函数有两个参数，分别是int类型的和void(*)(int)类型的
	// void(*)(int)类型的函数指针指向的是返回值为void，参数为int的函数
	//signa函数的返回类型是void(*)(int)

	ty_t signal(int,ty_t);//用typedef函数可以简化成这个形式，更直观了

	//函数指针数组
	int(*q1)(int, int) = Add;
	int(*q2)(int, int) = Sub;
	int(*q3[2])(int, int) = { q1,q2 };//函数指针数组的写法，在函数指针名字的后面加上[元素个数]
	printf("%d", (*q3[1])(1, 2));//可以用函数指针数组解引用来访问函数指针数组内的函数地址进而使用该函数（好处是可以把函数放在一起归纳在一起）
	return 0;
}