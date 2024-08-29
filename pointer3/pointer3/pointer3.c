#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void test(int arr[])
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);
	printf("sz2=%d\n",sz2);
}
int main()
{
	int arr[10] = { 0 };
	printf("&arr[0]=%p\n",&arr[0]);
	printf("&arr   =%p\n", &arr);
	printf(" arr   =%p\n", arr);//可以发现都是打出该数组第一个元素的地址，因为&数组的时候虽然取的是整个数组，但是一般是取第一个当整个数组的地址
	printf("&arr[0]+1=%p\n", &arr[0]+1);
	printf("&arr+1   =%p\n", &arr+1);
	printf(" arr+1   =%p\n", arr+1);//可以发现&arr[0]+1=arr+1!=&arr+1，因为&arr是取出整个数组，然后它+1相当于int[10]*的指针+1，就是比本来又多了40个字节(跳过整个数组)，所以可以看出&arr和&arr[0]还是有区别的
	//arr虽然大部分情况下=&arr[0]，但是在sizeof(arr)和&arr时代表的是整个数组
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int* p = arr;
	for (i = 0;i < sz; i++)
		scanf("%d", p + i);
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", arr[i]);
		
	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", *(arr + i));

	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", p[i]);

	}
	printf("\n");
	for (i = 0; i < sz; i++) {
		printf("%d,", i[arr]);//甚至可以写成i[arr]

	}
	printf("\n%d\n", 1[arr]);//数字[arr]同理
	//可以发现arr[i]==p[i]==*(p+i)==*(arr+i),其实arr[i]编译器在执行的时候也会自动转化为*(arr+i)的方式执行的，所以哪怕没定义p为数组，依然可以用p[i]形式表达*(p+i)
	int sz1 = sizeof(arr) / sizeof(arr[0]);
	printf("sz1=%d\n", sz1);
	test(arr);//第一个输出10，第二个x86输出1，x64输出8，因为数组传参的本质时传递了首元素的地址（指针），函数形参部分不会真的创建数组，所以应该用指针变量接收，所以在外部函数中arr是个指针，在x86的环境下指针所占的字节是4，x64环境下是8
	//数组传参，形参可以写成数组形式，其实是为了方便理解，方便使用，但是形参也可以写成指针变量的形式（这个是数组传参的本质）
	
	//二级指针

	int a = 0;
	int* pa = &a;//一级指针
	int** ppa = &pa;//二级指针（pa存放了a的地址，同时也申请了自己的空间，ppa存放了pa的地址）int**可以看成int* *同理，还有三级四级五级指针
	**ppa = 1;//二次解引用，可以看成*(*ppa),也就是*pa，也就是a
	
	//指针数组：存放指针的数组
	char q = 'q';
	char w = 'w';
	char f = 'f';
	char* qwf[3] = {&q,&w,&f};
	for (i = 0; i < 3; i++)
		printf("%c,", *qwf[i]);//这里用*qwf[i]因为qwf[i]是地址，对地址进行解引用就可以得到这个地址的内容
	printf("\n");
	//利用指针数组模拟二维数组
	int arr1[3] = { 1,2,3 };
	int arr2[3] = { 4,5,6 };
	int arr3[3] = { 7,8,9 };
	int* arr4[3] = { arr1,arr2,arr3 };//因为这里的arr1实际上是arr1首元素的地址，所以用int*类型，所以这里就是整形指针数组
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
			printf("%d,", arr4[i][j]);//从左往右看arr4[i][j],比如当i=1时就是arr4[1][j],arr4[1]先引用出来为arr1，也便是arr1[j]
		printf("\n");
	}
	
	return 0;
}



