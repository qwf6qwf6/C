#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NDEBUG
#include<assert.h>
int my_strlen1(const char * s)//数组名等于数组第一个元素的地址，即arr=arr[0]
{
	int n = 0;
	while(*(s+n)!='\0')
	{
		n++;
	}
	return n;
}
int my_strlen2(const char* s)//加入const使得不可通过s来修改本来的元素
{
	char *begin = s;
	while (*begin)//还可以不屑！='\0'，因为\0本质为0（ASCII值）
	{
		begin++;
	}
	return begin-s;
}
int* test()
{
	int n = 100;
	return &n;
}
void exchange(int a, int b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
void exchange1(int* p1, int* p2)
{
	int z = 0;
	z = *p1;
	*p1 = *p2;
	*p2 = z;
}
int main()
{
	//const
	const int num = 1;//const修饰的变量具有了常属性（不可被修改）；在c语言中count修饰的是常变量（本质还是变量，但是const修饰后编译器在语法上不允许修改这个变量），在c++中被修饰的就是常量
	int* p = &num;
	*p = 20;//但是可以通过读取它存放的地址，再解引用来修改这个地址内的内容，同时因为变量的本质就是申请了一个储存的空间，这个空间的内容被改变了，那么它也就被改变了
	int x = 1;
	const int* p1 = &x;//const int*p1和int const*p一样，都是再*左边，可以限制不能对p1进行解引用，但是指针变量本身的值是可以改的（可以改成存放其他地址）
	int* p2 = p1;
	*p2 = 2;//但是任然可以通过新建变量来解引用
	int* const p3 = &num;//const在*右边时可以进行解引用，但是不能改成存放其它地址
	printf("%d\n", num);
	//指针-指针，得到指针和指针间的元素个数（高地址-低地址为正数，低地址-高地址为负数）（前提条件是两个指针指向同一块空间）
	int abc[10] = {1,2,3,4,5,6,7,8,9,10};
	int* q = &abc[0];
	int* w = &abc[9];
	printf("%p\n", q );
	printf("%p\n", w);
	printf("%d\n", q - w);
	//自写strlen函数
	char qwf[] = "qwf";
	printf("%d\n", my_strlen1(qwf));
	printf("%d\n", my_strlen2(qwf));
	//指针关系运算
	int xyz[] = {1,2,3,4,5,6,7,8,9,10};
	int* pa = xyz;
	int sz = sizeof(xyz) / sizeof(xyz[0]);
	while (pa < &xyz[sz])
	{
		printf("%d,", *pa);
		pa++;
	}
	//野指针成因，野指针（随机的，没明确限制的，错误的）
	int* qb;//指针未初始化，（如果不知道这个指针此时此刻应该指向哪里，可以用NULL（本质是0）使得变成空指针，直接访问空指针会报错），指针变量不再使用时应该及时置为NULL
	int* qc = &xyz[11];//越界访问
	printf("\n%d\n", *test());
	int* pd = test();
	printf("%d\n", *pd);//空间释放了，因为函数结束后栈帧会被销毁，那从函数中传出的指针的内容自然也不可控了，也便变成野指针了，使用时应尽量避免局部变量返回指针
	//assert（指定条件）断言（需包含头文件assert.h），用于运行时确保程序符合指定条件，不符合则终止报错(会显示错误的路径文件及行数)，如果已经确定程序无问题了可以在#include<assert.h>前加入#define NDEBUG关闭assert，在release版本中一般会禁用assert来缩短运行时间
	int* pf = NULL;
	assert(pf!=NULL);
	printf("1\n");
	//指针的使用和传指调用
	int a = 10; int b = 20;
	exchange(a,b);//这样不会交换，因为穿值操时作形参会临时创建一个自己的空间，对形参的修改不影响实参数(哪怕名字相同也一样)
	printf("%d,%d\n", a, b);
	int* p1a = &a; int* p1b = &b;
	exchange1(&a, &b);//传址操作可以使得实参被修改，所以如果要修改主调函数的内容的话一般采用传地操作
	printf("%d,%d\n", a, b);
	return 0;
}
