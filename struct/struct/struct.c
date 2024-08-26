#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct student//struct创造结构体
{
	char name[20];
	int age;
	float score;
} s2, s3, s4;//根据类型创建变量（全局变量），可以不创建，但是还是要有分号
struct abc
{
	int a;
	int b
};
struct A
{
	struct student Stu;
	int a;
	struct abc b;
};//结构体可以嵌套结构体


int main()
{
	struct student s1 = {"qwf",18,100.0f};//用=和{}依次初始化变量
	struct student s2 = { .age=18,.score=100.0f,.name="qwf"};//也可以用创建结构体的时候的.变量名称来初始化变量
	struct A a = { {.age = 18,.score = 100.0f,.name = "qwf"} ,4 ,.b.a = 1,.b.b = 2 };//结构体嵌套结构体要把嵌套的整个表达一下,也可以把嵌套内部的分别表达，同时内部的变量名可以和外部的相同
	printf("%s\n", s1.name);//引用的时候就结构体名.成员名
	printf("%d\n",a.Stu.age);//嵌套结构体就依次从最高级往下.
	return 0;
}