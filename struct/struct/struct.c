#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
struct student//struct����ṹ��
{
	char name[20];
	int age;
	float score;
} s2, s3, s4;//�������ʹ���������ȫ�ֱ����������Բ����������ǻ���Ҫ�зֺ�
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
};//�ṹ�����Ƕ�׽ṹ��


int main()
{
	struct student s1 = {"qwf",18,100.0f};//��=��{}���γ�ʼ������
	struct student s2 = { .age=18,.score=100.0f,.name="qwf"};//Ҳ�����ô����ṹ���ʱ���.������������ʼ������
	struct A a = { {.age = 18,.score = 100.0f,.name = "qwf"} ,4 ,.b.a = 1,.b.b = 2 };//�ṹ��Ƕ�׽ṹ��Ҫ��Ƕ�׵��������һ��,Ҳ���԰�Ƕ���ڲ��ķֱ��ͬʱ�ڲ��ı��������Ժ��ⲿ����ͬ
	printf("%s\n", s1.name);//���õ�ʱ��ͽṹ����.��Ա��
	printf("%d\n",a.Stu.age);//Ƕ�׽ṹ������δ���߼�����.
	return 0;
}